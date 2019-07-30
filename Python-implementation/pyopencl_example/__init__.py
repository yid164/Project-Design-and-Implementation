import pyopencl as cl

platform = cl.get_platforms()[0]

gpu_devices = platform.get_devices(device_type=cl.device_type.GPU)

cpu_devices = platform.get_devices(device_type=cl.device_type.CPU)

print(gpu_devices[0])

print(cpu_devices[0])


