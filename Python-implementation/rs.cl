#define n_state 2
#define DOUBLE_SUPPORT_AVAILABLE
typedef double Real;

#define double alpha -0.08
#define double epsilon 0.05
#define double Main_gamma 3.0

#define v state[offest + 0]
#define w state[offset + 1]

__kernel void fitzhugh()
{
    const int cid = get_global_id(0);
    const int offest = cid * n_state;

}
