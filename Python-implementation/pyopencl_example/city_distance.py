import math
import numpy
import pyopencl as cl
import time

CITIES = 1024
MAP_SIZE = int(CITIES * (CITIES - 1 )/2)

if __name__ == '__main__':
    print('load program from cl source file')
    f = open('city_distance.cl', 'r', encoding='utf-8')
    kernels = ''.join(f.readlines())
    f.close()

    print('prepare the data')
    start_time = time.time()
    city_x = numpy.random.random(CITIES).astype(numpy.float32) * 100
    city_y = numpy.random.random(CITIES).astype(numpy.float32) * 100
    # prepare memory for final answer from opencl
    final = numpy.zeros(MAP_SIZE, dtype=numpy.float32)
    time_hostdata_load = time.time()

    print('create context')
    ctx = cl.Context(dev_type=cl.device_type.GPU)
    print('create command queue')
    queue = cl.CommandQueue(ctx, properties=cl.command_queue_properties.PROFILING_ENABLE)
    time_ctx_queue_creation = time.time()

    print('prepare device memory for input/output')
    dev_x = cl.Buffer(ctx, cl.mem_flags.READ_ONLY | cl.mem_flags.COPY_HOST_PTR, hostbuf=city_x)
    dev_y = cl.Buffer(ctx, cl.mem_flags.READ_ONLY | cl.mem_flags.COPY_HOST_PTR, hostbuf=city_y)
    dev_final = cl.Buffer(ctx, cl.mem_flags.WRITE_ONLY, final.nbytes)
    time_devicedata_load = time.time()

    print('compile kernel code')
    prg = cl.Program(ctx, kernels).build()
    time_kernel_compilation = time.time()

    print('execute kernel program')
    evt = prg.calc_distance(queue, (MAP_SIZE, ), (1, ), numpy.int32(CITIES), dev_x, dev_y, dev_final)
    print('wait for kernel exectuion')
    evt.wait()
    elapsed = 1e-9 * (evt.profile.end - evt.profile.start)

    print('elapsed time: {}'.format(elapsed))
    time_before_readback = time.time()
    cl._enqueue_read_buffer(queue, dev_final, final).wait()
    time_after_readback = time.time()

    print(final)
    print('prepare host data took       :{}'.format(time_hostdata_load - start_time))
    print('Create CTX/QUEUE took        :{}'.format(time_ctx_queue_creation - time_hostdata_load))
    print('Upload data to device took')