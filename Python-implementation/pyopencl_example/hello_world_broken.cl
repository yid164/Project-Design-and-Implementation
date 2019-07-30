__kernel void hello_world(){
    printf("hello host from kernel #%d\n", global_id);
}