/*
 * OpenCL kernel for fitzhugh_arimoto_yoshizawa_1961
 *
 * Generated on 2019-02-21 19:16:31 by Myokit OpenCL export
 *
 */

#define n_state 2

/* Using single precision floats */
typedef float Real;

/* Constants */
#define alpha -0.08f
#define epsilon 0.005f
#define Main_gamma 3.0f

/* Calculated constants */

/* Aliases of state variables. */
#define v state[offset + 0]
#define w state[offset + 1]


/*
 * Cell kernel.
 * Computes a single Euler-step for a single cell.
 */
__kernel void cell_step(const int n_cells, const Real time, const Real dt, __global Real *state, __global const Real* idiff_vec)
{
    const int cid = get_global_id(0);
    const int offset = cid * n_state;
    if(cid >= n_cells) return;
    
    /* Diffusion */
    Real idiff = idiff_vec[cid];
    
    /* Pacing */
    Real pace;
    if(cid < 4) {
        pace = (time > 10 && time < 10.5) ? 1 : 0;
    } else {
        pace = 0;
    }
    
    /* Evaluate derivatives */
    
    /* Evaluate Main */
    Real D_v = 1.0f * (v * (v - alpha) * (1.0f - v) - w + idiff);
    Real D_w = 1.0f * epsilon * (v - Main_gamma * w);

    /* Perform update */
    v += dt * D_v;
    w += dt * D_w;

}

/*
 * Diffusion kernel program
 * Performs a single diffusion step
 */
__kernel void diff_step(const int n_cells, const Real g, __global Real *state, __global Real* idiff)
{
    const int cid = get_global_id(0);
    const int offset = cid * n_state;
    if(cid >= n_cells) return;

    if(n_cells > 1) {
        if(cid == 0) {
            /* Diffusion, first cell */
            idiff[cid] = g * (state[0] - state[n_state]);
        } else if (cid == n_cells - 1) {
            /* Diffusion, last cell */
            idiff[cid] = g * (state[cid*n_state] - state[(cid-1)*n_state]);
        } else {
            /* Diffusion, middle cells */
            idiff[cid] = g * (2*state[cid*n_state] - state[(cid-1)*n_state] - state[(cid+1)*n_state]);
        }
    }
}

/* Remove aliases of state variables. */
#undef v
#undef w

/* Remove constant definitions */
#undef alpha
#undef epsilon
#undef Main_gamma

#undef n_state
