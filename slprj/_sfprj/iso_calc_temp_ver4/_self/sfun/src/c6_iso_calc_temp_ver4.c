/* Include files */

#include "iso_calc_temp_ver4_sfun.h"
#include "c6_iso_calc_temp_ver4.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c6_emlrtMCI = { 122,/* lineNo */
  13,                                  /* colNo */
  "rng",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pName */
};

static emlrtMCInfo c6_b_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c6_emlrtRSI = { 11, /* lineNo */
  "MATLAB Function5",                  /* fcnName */
  "#iso_calc_temp_ver4:38"             /* pathName */
};

static emlrtRSInfo c6_b_emlrtRSI = { 12,/* lineNo */
  "MATLAB Function5",                  /* fcnName */
  "#iso_calc_temp_ver4:38"             /* pathName */
};

static emlrtRSInfo c6_c_emlrtRSI = { 54,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_d_emlrtRSI = { 113,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_e_emlrtRSI = { 114,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_f_emlrtRSI = { 116,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_g_emlrtRSI = { 118,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_h_emlrtRSI = { 120,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_i_emlrtRSI = { 272,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_j_emlrtRSI = { 274,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_k_emlrtRSI = { 276,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_l_emlrtRSI = { 277,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c6_m_emlrtRSI = { 9,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c6_n_emlrtRSI = { 26,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c6_o_emlrtRSI = { 66,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_p_emlrtRSI = { 69,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_q_emlrtRSI = { 26,/* lineNo */
  "eml_rand_mcg16807_stateful",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m"/* pathName */
};

static emlrtRSInfo c6_r_emlrtRSI = { 49,/* lineNo */
  "eml_rand_mcg16807",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807.m"/* pathName */
};

static emlrtRSInfo c6_s_emlrtRSI = { 114,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c6_t_emlrtRSI = { 41,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c6_u_emlrtRSI = { 43,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c6_v_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c6_w_emlrtRSI = { 15,/* lineNo */
  "eml_rand_shr3cong_stateful",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong_stateful.m"/* pathName */
};

static emlrtRSInfo c6_x_emlrtRSI = { 29,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c6_y_emlrtRSI = { 64,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c6_ab_emlrtRSI = { 15,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c6_bb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_cb_emlrtRSI = { 151,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_db_emlrtRSI = { 257,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_eb_emlrtRSI = { 263,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c6_fb_emlrtRSI = { 268,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

/* Function Declarations */
static void initialize_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void initialize_params_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void enable_c6_iso_calc_temp_ver4(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance);
static void disable_c6_iso_calc_temp_ver4(SFc6_iso_calc_temp_ver4InstanceStruct *
  chartInstance);
static void c6_update_jit_animation_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void c6_do_animation_call_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void ext_mode_exec_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void set_sim_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, const mxArray *c6_st);
static void sf_gateway_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void mdl_start_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void mdl_terminate_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static void initSimStructsc6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static real_T c6_now(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance);
static real_T c6_mod(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance,
                     real_T c6_x);
static void c6_twister_state_vector(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, uint32_T c6_mt[625], uint32_T c6_b_seed, uint32_T c6_b_mt[625]);
static void c6_rand(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, const
                    emlrtStack *c6_sp, real_T c6_r[6]);
static void c6_eml_rand_mt19937ar(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, uint32_T c6_d_state[625], uint32_T
  c6_e_state[625], real_T *c6_r);
static real_T c6_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_vxc, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static uint32_T c6_c_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_method, const char_T *c6_identifier,
  boolean_T *c6_svPtr);
static uint32_T c6_d_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr);
static void c6_e_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_d_state, const char_T *c6_identifier,
  boolean_T *c6_svPtr, uint32_T c6_y[625]);
static void c6_f_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr, uint32_T c6_y[625]);
static void c6_g_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_d_state, const char_T *c6_identifier,
  boolean_T *c6_svPtr, uint32_T c6_y[2]);
static void c6_h_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr, uint32_T c6_y[2]);
static uint8_T c6_i_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_iso_calc_temp_ver4, const
  char_T *c6_identifier);
static uint8_T c6_j_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *c6_chart_data_browse_helper
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, int32_T c6_ssIdNumber);
static void c6_b_twister_state_vector(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, uint32_T c6_mt[625], uint32_T c6_b_seed);
static real_T c6_b_eml_rand_mt19937ar(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, uint32_T c6_d_state[625]);
static void init_dsm_address_info(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_seed_not_empty = false;
  chartInstance->c6_method_not_empty = false;
  chartInstance->c6_state_not_empty = false;
  chartInstance->c6_b_state_not_empty = false;
  chartInstance->c6_c_state_not_empty = false;
  chartInstance->c6_is_active_c6_iso_calc_temp_ver4 = 0U;
}

static void initialize_params_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_iso_calc_temp_ver4(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_iso_calc_temp_ver4(SFc6_iso_calc_temp_ver4InstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_jit_animation_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_do_animation_call_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  const mxArray *c6_b_y = NULL;
  const mxArray *c6_c_y = NULL;
  const mxArray *c6_d_y = NULL;
  const mxArray *c6_e_y = NULL;
  const mxArray *c6_f_y = NULL;
  const mxArray *c6_g_y = NULL;
  const mxArray *c6_h_y = NULL;
  const mxArray *c6_i_y = NULL;
  const mxArray *c6_j_y = NULL;
  const mxArray *c6_k_y = NULL;
  const mxArray *c6_l_y = NULL;
  const mxArray *c6_m_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(12, 1), false);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", chartInstance->c6_vxc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", chartInstance->c6_vyc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", chartInstance->c6_vzc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", chartInstance->c6_xc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", chartInstance->c6_yc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", chartInstance->c6_zc, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_h_y = NULL;
  if (!chartInstance->c6_method_not_empty) {
    sf_mex_assign(&c6_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c6_h_y, sf_mex_create("y", &chartInstance->c6_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_i_y = NULL;
  if (!chartInstance->c6_method_not_empty) {
    sf_mex_assign(&c6_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c6_i_y, sf_mex_create("y", &chartInstance->c6_seed, 7, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c6_y, 7, c6_i_y);
  c6_j_y = NULL;
  if (!chartInstance->c6_method_not_empty) {
    sf_mex_assign(&c6_j_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c6_j_y, sf_mex_create("y", &chartInstance->c6_c_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c6_y, 8, c6_j_y);
  c6_k_y = NULL;
  if (!chartInstance->c6_state_not_empty) {
    sf_mex_assign(&c6_k_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c6_k_y, sf_mex_create("y", chartInstance->c6_state, 7, 0U, 1U,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c6_y, 9, c6_k_y);
  c6_l_y = NULL;
  if (!chartInstance->c6_b_state_not_empty) {
    sf_mex_assign(&c6_l_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c6_l_y, sf_mex_create("y", chartInstance->c6_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c6_y, 10, c6_l_y);
  c6_m_y = NULL;
  sf_mex_assign(&c6_m_y, sf_mex_create("y",
    &chartInstance->c6_is_active_c6_iso_calc_temp_ver4, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c6_y, 11, c6_m_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  uint32_T c6_uv[625];
  int32_T c6_i;
  uint32_T c6_uv1[2];
  int32_T c6_i1;
  chartInstance->c6_doneDoubleBufferReInit = true;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_vxc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 0)), "vxc");
  *chartInstance->c6_vyc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 1)), "vyc");
  *chartInstance->c6_vzc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 2)), "vzc");
  *chartInstance->c6_xc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 3)), "xc");
  *chartInstance->c6_yc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 4)), "yc");
  *chartInstance->c6_zc = c6_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 5)), "zc");
  chartInstance->c6_method = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 6)), "method", &chartInstance->c6_method_not_empty);
  chartInstance->c6_seed = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 7)), "seed", &chartInstance->c6_seed_not_empty);
  chartInstance->c6_c_state = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 8)), "state", &chartInstance->c6_c_state_not_empty);
  c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 9)),
                        "state", &chartInstance->c6_state_not_empty, c6_uv);
  for (c6_i = 0; c6_i < 625; c6_i++) {
    chartInstance->c6_state[c6_i] = c6_uv[c6_i];
  }

  c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 10)),
                        "state", &chartInstance->c6_b_state_not_empty, c6_uv1);
  for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
    chartInstance->c6_b_state[c6_i1] = c6_uv1[c6_i1];
  }

  chartInstance->c6_is_active_c6_iso_calc_temp_ver4 = c6_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 11)),
     "is_active_c6_iso_calc_temp_ver4");
  sf_mex_destroy(&c6_u);
  sf_mex_destroy(&c6_st);
}

static void sf_gateway_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  emlrtStack c6_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack c6_b_st;
  int32_T c6_b_cond;
  real_T c6_b_xc;
  real_T c6_b_yc;
  real_T c6_b_zc;
  real_T c6_b_vxc;
  real_T c6_b_vyc;
  real_T c6_b_vzc;
  real_T c6_x;
  real_T c6_b_x;
  real_T c6_s;
  time_t c6_eTime;
  int32_T c6_prevEpochTime;
  int32_T c6_exitg1;
  time_t c6_b_eTime;
  int32_T c6_t;
  real_T c6_c_x;
  real_T c6_d_x;
  real_T c6_d;
  real_T c6_s0;
  boolean_T c6_covSaturation;
  uint32_T c6_u;
  uint32_T c6_method2;
  uint32_T c6_varargin_1;
  uint32_T c6_b_varargin_1;
  const mxArray *c6_y = NULL;
  uint32_T c6_c_varargin_1;
  int32_T c6_i;
  static char_T c6_cv[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'n', 'g',
    ':', 'b', 'a', 'd', 'S', 'e', 't', 't', 'i', 'n', 'g', 's' };

  int32_T c6_i1;
  uint32_T c6_arg3;
  const mxArray *c6_b_y = NULL;
  uint32_T c6_b_arg3;
  uint32_T c6_c_arg3;
  uint32_T c6_b_s;
  uint32_T c6_b_seed;
  uint32_T c6_r;
  real_T c6_test[6];
  uint32_T c6_b_t;
  uint32_T c6_d_state;
  c6_st.tls = chartInstance->c6_fEmlrtCtx;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  chartInstance->c6_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 0U, (real_T)
                    *chartInstance->c6_cond);
  chartInstance->c6_sfEvent = CALL_EVENT;
  c6_b_cond = *chartInstance->c6_cond;
  covrtEmlFcnEval(chartInstance->c6_covrtInstance, 4U, 0, 0);
  c6_b_xc = 0.0;
  c6_b_yc = 0.0;
  c6_b_zc = 0.0;
  c6_b_vxc = 0.0;
  c6_b_vyc = 0.0;
  c6_b_vzc = 0.0;
  if (covrtEmlIfEval(chartInstance->c6_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c6_covrtInstance,
        4U, 0U, 0U, (real_T)c6_b_cond, 0.0, -1, 5U, (real_T)c6_b_cond >= 0.0)))
  {
    c6_b_st.site = &c6_emlrtRSI;
    if (!chartInstance->c6_seed_not_empty) {
      chartInstance->c6_seed = 0U;
      chartInstance->c6_seed_not_empty = true;
    }

    if (!chartInstance->c6_method_not_empty) {
      chartInstance->c6_method = 7U;
      chartInstance->c6_method_not_empty = true;
    }

    c6_x = c6_now(chartInstance) * 8.64E+6;
    c6_b_x = c6_x;
    c6_b_x = muDoubleScalarFloor(c6_b_x);
    c6_s = c6_mod(chartInstance, c6_b_x);
    c6_eTime = time(NULL);
    c6_prevEpochTime = (int32_T)c6_eTime + 1;
    do {
      c6_exitg1 = 0;
      c6_b_eTime = time(NULL);
      c6_t = (int32_T)c6_b_eTime;
      if (c6_t <= c6_prevEpochTime) {
        c6_c_x = c6_now(chartInstance) * 8.64E+6;
        c6_d_x = c6_c_x;
        c6_d_x = muDoubleScalarFloor(c6_d_x);
        c6_s0 = c6_mod(chartInstance, c6_d_x);
        if (c6_s != c6_s0) {
          c6_exitg1 = 1;
        }
      } else {
        c6_exitg1 = 1;
      }
    } while (c6_exitg1 == 0);

    c6_d = muDoubleScalarRound(c6_s);
    c6_covSaturation = false;
    if (c6_d < 4.294967296E+9) {
      if (c6_d >= 0.0) {
        c6_u = (uint32_T)c6_d;
      } else {
        c6_covSaturation = true;
        c6_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 121, 3);
      }
    } else if (c6_d >= 4.294967296E+9) {
      c6_covSaturation = true;
      c6_u = MAX_uint32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 121, 3);
    } else {
      c6_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c6_covrtInstance, 4, 0, 0, 0,
      c6_covSaturation);
    chartInstance->c6_seed = c6_u;
    if (!chartInstance->c6_method_not_empty) {
      chartInstance->c6_method = 7U;
      chartInstance->c6_method_not_empty = true;
    }

    c6_method2 = chartInstance->c6_method;
    if (c6_method2 == 7U) {
      c6_varargin_1 = chartInstance->c6_seed;
      if (!chartInstance->c6_state_not_empty) {
        for (c6_i = 0; c6_i < 625; c6_i++) {
          chartInstance->c6_state[c6_i] = 0U;
        }

        c6_b_twister_state_vector(chartInstance, chartInstance->c6_state, 5489U);
        chartInstance->c6_state_not_empty = true;
      }

      c6_arg3 = c6_varargin_1;
      c6_b_twister_state_vector(chartInstance, chartInstance->c6_state, c6_arg3);
    } else if (c6_method2 == 5U) {
      c6_b_varargin_1 = chartInstance->c6_seed;
      if (!chartInstance->c6_b_state_not_empty) {
        for (c6_i1 = 0; c6_i1 < 2; c6_i1++) {
          chartInstance->c6_b_state[c6_i1] = 362436069U + 158852560U * (uint32_T)
            c6_i1;
        }

        chartInstance->c6_b_state_not_empty = true;
      }

      c6_b_arg3 = c6_b_varargin_1;
      c6_b_s = c6_b_arg3;
      chartInstance->c6_b_state[0] = 362436069U;
      chartInstance->c6_b_state[1] = c6_b_s;
      if ((real_T)chartInstance->c6_b_state[1] == 0.0) {
        chartInstance->c6_b_state[1] = 521288629U;
      }
    } else if (c6_method2 == 4U) {
      c6_c_varargin_1 = chartInstance->c6_seed;
      if (!chartInstance->c6_c_state_not_empty) {
        chartInstance->c6_c_state = 1144108930U;
        chartInstance->c6_c_state_not_empty = true;
      }

      c6_c_arg3 = c6_c_varargin_1;
      c6_b_seed = c6_c_arg3;
      c6_r = c6_b_seed >> 16U;
      c6_b_t = c6_b_seed & 32768U;
      c6_d_state = c6_r << 16U;
      c6_d_state = c6_b_seed - c6_d_state;
      c6_d_state -= c6_b_t;
      c6_d_state <<= 16U;
      c6_d_state += c6_b_t;
      c6_d_state += c6_r;
      if ((real_T)c6_d_state < 1.0) {
        c6_d_state = 1144108930U;
      } else {
        if (c6_d_state > 2147483646U) {
          c6_d_state = 2147483646U;
        }
      }

      chartInstance->c6_c_state = c6_d_state;
    } else {
      c6_y = NULL;
      sf_mex_assign(&c6_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 22),
                    false);
      c6_b_y = NULL;
      sf_mex_assign(&c6_b_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1, 22),
                    false);
      sf_mex_call(&c6_b_st, &c6_emlrtMCI, "error", 0U, 2U, 14, c6_y, 14,
                  sf_mex_call(&c6_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c6_b_st, NULL, "message", 1U, 1U, 14, c6_b_y)));
    }

    c6_b_st.site = &c6_b_emlrtRSI;
    c6_rand(chartInstance, &c6_b_st, c6_test);
    c6_b_xc = c6_test[0];
    c6_b_yc = c6_test[1];
    c6_b_zc = c6_test[2];
    c6_b_vxc = c6_test[3];
    c6_b_vyc = c6_test[4];
    c6_b_vzc = c6_test[5];
  }

  *chartInstance->c6_xc = c6_b_xc;
  *chartInstance->c6_yc = c6_b_yc;
  *chartInstance->c6_zc = c6_b_zc;
  *chartInstance->c6_vxc = c6_b_vxc;
  *chartInstance->c6_vyc = c6_b_vyc;
  *chartInstance->c6_vzc = c6_b_vzc;
  c6_do_animation_call_c6_iso_calc_temp_ver4(chartInstance);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 1U, *chartInstance->c6_xc);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 2U, *chartInstance->c6_yc);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 3U, *chartInstance->c6_zc);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 4U, *chartInstance->c6_vxc);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 5U, *chartInstance->c6_vyc);
  covrtSigUpdateFcn(chartInstance->c6_covrtInstance, 6U, *chartInstance->c6_vzc);
}

static void mdl_start_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  static const uint32_T c6_decisionTxtStartIdx = 0U;
  static const uint32_T c6_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c6_chart_data_browse_helper);
  chartInstance->c6_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c6_RuntimeVar,
    &chartInstance->c6_IsDebuggerActive,
    &chartInstance->c6_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c6_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c6_covrtInstance, 1U, 0U, 1U,
    40U);
  covrtChartInitFcn(chartInstance->c6_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c6_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c6_decisionTxtStartIdx, &c6_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c6_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c6_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 274);
  covrtEmlSaturationInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 121, -1,
    124);
  covrtEmlIfInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 102, 116, -1,
                    269);
  covrtEmlRelationalInitFcn(chartInstance->c6_covrtInstance, 4U, 0U, 0U, 106,
    115, -1, 5U);
}

static void mdl_cleanup_runtime_resources_c6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c6_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c6_covrtInstance);
}

static void initSimStructsc6_iso_calc_temp_ver4
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c6_iso_calc_temp_ver4_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static real_T c6_now(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance)
{
  real_T c6_cDaysMonthWise[12];
  time_t c6_rawtime;
  struct tm c6_timeinfo;
  c6_sxaDueAh1f53T9ESYg9Uc4E c6_timeinfoDouble;
  real_T c6_x;
  real_T c6_b_x;
  real_T c6_c_x;
  real_T c6_d_x;
  real_T c6_e_x;
  real_T c6_f_x;
  real_T c6_dDateNum;
  real_T c6_g_x;
  real_T c6_h_x;
  real_T c6_i_x;
  real_T c6_j_x;
  real_T c6_k_x;
  boolean_T c6_b;
  real_T c6_l_x;
  real_T c6_r;
  boolean_T c6_b_b;
  boolean_T c6_guard1 = false;
  real_T c6_m_x;
  boolean_T c6_rEQ0;
  real_T c6_n_x;
  real_T c6_o_x;
  real_T c6_p_x;
  real_T c6_q_x;
  real_T c6_r_x;
  real_T c6_s_x;
  real_T c6_t_x;
  boolean_T c6_c_b;
  real_T c6_u_x;
  real_T c6_v_x;
  real_T c6_w_x;
  real_T c6_b_r;
  boolean_T c6_d_b;
  boolean_T c6_e_b;
  real_T c6_x_x;
  real_T c6_c_r;
  boolean_T c6_f_b;
  boolean_T c6_b_rEQ0;
  boolean_T c6_c_rEQ0;
  (void)chartInstance;
  c6_cDaysMonthWise[0] = 0.0;
  c6_cDaysMonthWise[1] = 31.0;
  c6_cDaysMonthWise[2] = 59.0;
  c6_cDaysMonthWise[3] = 90.0;
  c6_cDaysMonthWise[4] = 120.0;
  c6_cDaysMonthWise[5] = 151.0;
  c6_cDaysMonthWise[6] = 181.0;
  c6_cDaysMonthWise[7] = 212.0;
  c6_cDaysMonthWise[8] = 243.0;
  c6_cDaysMonthWise[9] = 273.0;
  c6_cDaysMonthWise[10] = 304.0;
  c6_cDaysMonthWise[11] = 334.0;
  time(&c6_rawtime);
  c6_timeinfo = *localtime(&c6_rawtime);
  c6_timeinfo.tm_year += 1900;
  c6_timeinfo.tm_mon++;
  c6_timeinfoDouble.tm_min = (real_T)c6_timeinfo.tm_min;
  c6_timeinfoDouble.tm_sec = (real_T)c6_timeinfo.tm_sec;
  c6_timeinfoDouble.tm_hour = (real_T)c6_timeinfo.tm_hour;
  c6_timeinfoDouble.tm_mday = (real_T)c6_timeinfo.tm_mday;
  c6_timeinfoDouble.tm_mon = (real_T)c6_timeinfo.tm_mon;
  c6_timeinfoDouble.tm_year = (real_T)c6_timeinfo.tm_year;
  c6_x = c6_timeinfoDouble.tm_year / 4.0;
  c6_b_x = c6_x;
  c6_b_x = muDoubleScalarCeil(c6_b_x);
  c6_c_x = c6_timeinfoDouble.tm_year / 100.0;
  c6_d_x = c6_c_x;
  c6_d_x = muDoubleScalarCeil(c6_d_x);
  c6_e_x = c6_timeinfoDouble.tm_year / 400.0;
  c6_f_x = c6_e_x;
  c6_f_x = muDoubleScalarCeil(c6_f_x);
  c6_dDateNum = ((((365.0 * c6_timeinfoDouble.tm_year + c6_b_x) - c6_d_x) +
                  c6_f_x) + c6_cDaysMonthWise[(int32_T)c6_timeinfoDouble.tm_mon
                 - 1]) + c6_timeinfoDouble.tm_mday;
  if (c6_timeinfoDouble.tm_mon > 2.0) {
    c6_g_x = c6_timeinfoDouble.tm_year;
    c6_h_x = c6_g_x;
    c6_i_x = c6_h_x;
    c6_j_x = c6_i_x;
    c6_k_x = c6_j_x;
    c6_b = muDoubleScalarIsNaN(c6_k_x);
    if (c6_b) {
      c6_r = rtNaN;
    } else {
      c6_l_x = c6_j_x;
      c6_b_b = muDoubleScalarIsInf(c6_l_x);
      if (c6_b_b) {
        c6_r = rtNaN;
      } else if (c6_j_x == 0.0) {
        c6_r = 0.0;
      } else {
        c6_r = muDoubleScalarRem(c6_j_x, 4.0);
        c6_rEQ0 = (c6_r == 0.0);
        if (c6_rEQ0) {
          c6_r = 0.0;
        } else {
          if (c6_j_x < 0.0) {
            c6_r += 4.0;
          }
        }
      }
    }

    c6_guard1 = false;
    if (c6_r == 0.0) {
      c6_m_x = c6_timeinfoDouble.tm_year;
      c6_n_x = c6_m_x;
      c6_o_x = c6_n_x;
      c6_q_x = c6_o_x;
      c6_s_x = c6_q_x;
      c6_c_b = muDoubleScalarIsNaN(c6_s_x);
      if (c6_c_b) {
        c6_b_r = rtNaN;
      } else {
        c6_w_x = c6_q_x;
        c6_e_b = muDoubleScalarIsInf(c6_w_x);
        if (c6_e_b) {
          c6_b_r = rtNaN;
        } else if (c6_q_x == 0.0) {
          c6_b_r = 0.0;
        } else {
          c6_b_r = muDoubleScalarRem(c6_q_x, 100.0);
          c6_b_rEQ0 = (c6_b_r == 0.0);
          if (c6_b_rEQ0) {
            c6_b_r = 0.0;
          } else {
            if (c6_q_x < 0.0) {
              c6_b_r += 100.0;
            }
          }
        }
      }

      if (c6_b_r == 0.0) {
        c6_dDateNum++;
      } else {
        c6_guard1 = true;
      }
    } else {
      c6_guard1 = true;
    }

    if (c6_guard1) {
      c6_p_x = c6_timeinfoDouble.tm_year;
      c6_r_x = c6_p_x;
      c6_t_x = c6_r_x;
      c6_u_x = c6_t_x;
      c6_v_x = c6_u_x;
      c6_d_b = muDoubleScalarIsNaN(c6_v_x);
      if (c6_d_b) {
        c6_c_r = rtNaN;
      } else {
        c6_x_x = c6_u_x;
        c6_f_b = muDoubleScalarIsInf(c6_x_x);
        if (c6_f_b) {
          c6_c_r = rtNaN;
        } else if (c6_u_x == 0.0) {
          c6_c_r = 0.0;
        } else {
          c6_c_r = muDoubleScalarRem(c6_u_x, 400.0);
          c6_c_rEQ0 = (c6_c_r == 0.0);
          if (c6_c_rEQ0) {
            c6_c_r = 0.0;
          } else {
            if (c6_u_x < 0.0) {
              c6_c_r += 400.0;
            }
          }
        }
      }

      if (c6_c_r == 0.0) {
        c6_dDateNum++;
      }
    }
  }

  c6_dDateNum += ((c6_timeinfoDouble.tm_hour * 3600.0 + c6_timeinfoDouble.tm_min
                   * 60.0) + c6_timeinfoDouble.tm_sec) / 86400.0;
  return c6_dDateNum;
}

static real_T c6_mod(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance,
                     real_T c6_x)
{
  real_T c6_r;
  real_T c6_b_x;
  real_T c6_c_x;
  real_T c6_d_x;
  real_T c6_e_x;
  boolean_T c6_b;
  real_T c6_f_x;
  boolean_T c6_b_b;
  boolean_T c6_rEQ0;
  (void)chartInstance;
  c6_b_x = c6_x;
  c6_c_x = c6_b_x;
  c6_d_x = c6_c_x;
  c6_e_x = c6_d_x;
  c6_b = muDoubleScalarIsNaN(c6_e_x);
  if (c6_b) {
    c6_r = rtNaN;
  } else {
    c6_f_x = c6_d_x;
    c6_b_b = muDoubleScalarIsInf(c6_f_x);
    if (c6_b_b) {
      c6_r = rtNaN;
    } else if (c6_d_x == 0.0) {
      c6_r = 0.0;
    } else {
      c6_r = muDoubleScalarRem(c6_d_x, 2.147483647E+9);
      c6_rEQ0 = (c6_r == 0.0);
      if (c6_rEQ0) {
        c6_r = 0.0;
      } else {
        if (c6_d_x < 0.0) {
          c6_r += 2.147483647E+9;
        }
      }
    }
  }

  return c6_r;
}

static void c6_twister_state_vector(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, uint32_T c6_mt[625], uint32_T c6_b_seed, uint32_T c6_b_mt[625])
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 625; c6_i++) {
    c6_b_mt[c6_i] = c6_mt[c6_i];
  }

  c6_b_twister_state_vector(chartInstance, c6_b_mt, c6_b_seed);
}

static void c6_rand(SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, const
                    emlrtStack *c6_sp, real_T c6_r[6])
{
  emlrtStack c6_st;
  emlrtStack c6_b_st;
  emlrtStack c6_c_st;
  int32_T c6_i;
  int32_T c6_k;
  int32_T c6_b_k;
  int32_T c6_i1;
  int32_T c6_c_k;
  real_T c6_d_k;
  real_T c6_e_k;
  real_T c6_f_k;
  uint32_T c6_d_state;
  uint32_T c6_icng;
  uint32_T c6_e_state;
  real_T c6_d;
  uint32_T c6_jsr;
  uint32_T c6_s;
  uint32_T c6_u;
  uint32_T c6_hi;
  uint32_T c6_u1;
  uint32_T c6_lo;
  uint32_T c6_test1;
  uint32_T c6_test2;
  uint32_T c6_a;
  uint32_T c6_b;
  uint32_T c6_ui;
  uint32_T c6_f_state;
  real_T c6_b_r;
  real_T c6_c_r;
  real_T c6_d1;
  real_T c6_d2;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_s_emlrtRSI;
  c6_b_st.prev = &c6_st;
  c6_b_st.tls = c6_st.tls;
  c6_c_st.prev = &c6_b_st;
  c6_c_st.tls = c6_b_st.tls;
  if (!chartInstance->c6_method_not_empty) {
    chartInstance->c6_method = 7U;
    chartInstance->c6_method_not_empty = true;
  }

  if (chartInstance->c6_method == 4U) {
    c6_b_st.site = &c6_t_emlrtRSI;
    if (!chartInstance->c6_c_state_not_empty) {
      chartInstance->c6_c_state = 1144108930U;
      chartInstance->c6_c_state_not_empty = true;
    }

    for (c6_k = 0; c6_k < 6; c6_k++) {
      c6_d_k = 1.0 + (real_T)c6_k;
      c6_d_state = chartInstance->c6_c_state;
      c6_e_state = c6_d_state;
      c6_s = c6_e_state;
      c6_hi = c6_s / 127773U;
      c6_lo = c6_s - c6_hi * 127773U;
      c6_test1 = 16807U * c6_lo;
      c6_test2 = 2836U * c6_hi;
      c6_a = c6_test1;
      c6_b = c6_test2;
      if (c6_a < c6_b) {
        c6_f_state = c6_b - c6_a;
        c6_f_state = ~c6_f_state;
        c6_f_state &= 2147483647U;
      } else {
        c6_f_state = c6_a - c6_b;
      }

      c6_c_r = (real_T)c6_f_state * 4.6566128752457969E-10;
      c6_e_state = c6_f_state;
      c6_d2 = c6_c_r;
      chartInstance->c6_c_state = c6_e_state;
      c6_r[(int32_T)c6_d_k - 1] = c6_d2;
    }
  } else if (chartInstance->c6_method == 5U) {
    c6_b_st.site = &c6_u_emlrtRSI;
    if (!chartInstance->c6_b_state_not_empty) {
      for (c6_i = 0; c6_i < 2; c6_i++) {
        chartInstance->c6_b_state[c6_i] = 362436069U + 158852560U * (uint32_T)
          c6_i;
      }

      chartInstance->c6_b_state_not_empty = true;
    }

    for (c6_c_k = 0; c6_c_k < 6; c6_c_k++) {
      c6_f_k = 1.0 + (real_T)c6_c_k;
      c6_icng = chartInstance->c6_b_state[0];
      c6_jsr = chartInstance->c6_b_state[1];
      c6_u = c6_jsr;
      c6_u1 = c6_icng;
      c6_u1 = 69069U * c6_u1 + 1234567U;
      c6_u ^= c6_u << 13;
      c6_u ^= c6_u >> 17;
      c6_u ^= c6_u << 5;
      c6_ui = c6_u1 + c6_u;
      chartInstance->c6_b_state[0] = c6_u1;
      chartInstance->c6_b_state[1] = c6_u;
      c6_b_r = (real_T)c6_ui * 2.328306436538696E-10;
      c6_d1 = c6_b_r;
      c6_r[(int32_T)c6_f_k - 1] = c6_d1;
    }
  } else {
    c6_b_st.site = &c6_v_emlrtRSI;
    if (!chartInstance->c6_state_not_empty) {
      c6_c_st.site = &c6_m_emlrtRSI;
      for (c6_i1 = 0; c6_i1 < 625; c6_i1++) {
        chartInstance->c6_state[c6_i1] = 0U;
      }

      c6_b_twister_state_vector(chartInstance, chartInstance->c6_state, 5489U);
      chartInstance->c6_state_not_empty = true;
    }

    for (c6_b_k = 0; c6_b_k < 6; c6_b_k++) {
      c6_e_k = 1.0 + (real_T)c6_b_k;
      c6_c_st.site = &c6_ab_emlrtRSI;
      c6_d = c6_b_eml_rand_mt19937ar(chartInstance, &c6_c_st,
        chartInstance->c6_state);
      c6_r[(int32_T)c6_e_k - 1] = c6_d;
    }
  }
}

static void c6_eml_rand_mt19937ar(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, uint32_T c6_d_state[625], uint32_T
  c6_e_state[625], real_T *c6_r)
{
  int32_T c6_i;
  for (c6_i = 0; c6_i < 625; c6_i++) {
    c6_e_state[c6_i] = c6_d_state[c6_i];
  }

  *c6_r = c6_b_eml_rand_mt19937ar(chartInstance, c6_sp, c6_e_state);
}

static real_T c6_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_vxc, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_vxc), &c6_thisId);
  sf_mex_destroy(&c6_b_vxc);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static uint32_T c6_c_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_method, const char_T *c6_identifier,
  boolean_T *c6_svPtr)
{
  uint32_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_method),
    &c6_thisId, c6_svPtr);
  sf_mex_destroy(&c6_b_method);
  return c6_y;
}

static uint32_T c6_d_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr)
{
  uint32_T c6_y;
  uint32_T c6_b_u;
  (void)chartInstance;
  if (mxIsEmpty(c6_u)) {
    *c6_svPtr = false;
  } else {
    *c6_svPtr = true;
    sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 7, 0U, 0, 0U, 0);
    c6_y = c6_b_u;
  }

  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_e_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_d_state, const char_T *c6_identifier,
  boolean_T *c6_svPtr, uint32_T c6_y[625])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_d_state), &c6_thisId,
                        c6_svPtr, c6_y);
  sf_mex_destroy(&c6_d_state);
}

static void c6_f_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr, uint32_T c6_y[625])
{
  uint32_T c6_uv[625];
  int32_T c6_i;
  (void)chartInstance;
  if (mxIsEmpty(c6_u)) {
    *c6_svPtr = false;
  } else {
    *c6_svPtr = true;
    sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_uv, 1, 7, 0U, 1, 0U, 1, 625);
    for (c6_i = 0; c6_i < 625; c6_i++) {
      c6_y[c6_i] = c6_uv[c6_i];
    }
  }

  sf_mex_destroy(&c6_u);
}

static void c6_g_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_d_state, const char_T *c6_identifier,
  boolean_T *c6_svPtr, uint32_T c6_y[2])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_d_state), &c6_thisId,
                        c6_svPtr, c6_y);
  sf_mex_destroy(&c6_d_state);
}

static void c6_h_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId,
  boolean_T *c6_svPtr, uint32_T c6_y[2])
{
  uint32_T c6_uv[2];
  int32_T c6_i;
  (void)chartInstance;
  if (mxIsEmpty(c6_u)) {
    *c6_svPtr = false;
  } else {
    *c6_svPtr = true;
    sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c6_i = 0; c6_i < 2; c6_i++) {
      c6_y[c6_i] = c6_uv[c6_i];
    }
  }

  sf_mex_destroy(&c6_u);
}

static uint8_T c6_i_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_b_is_active_c6_iso_calc_temp_ver4, const
  char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = (const char *)c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_is_active_c6_iso_calc_temp_ver4), &c6_thisId);
  sf_mex_destroy(&c6_b_is_active_c6_iso_calc_temp_ver4);
  return c6_y;
}

static uint8_T c6_j_emlrt_marshallIn(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_b_u;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b_u, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_b_u;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *c6_chart_data_browse_helper
  (SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance, int32_T c6_ssIdNumber)
{
  const mxArray *c6_mxData = NULL;
  real_T c6_d;
  real_T c6_d1;
  real_T c6_d2;
  real_T c6_d3;
  real_T c6_d4;
  real_T c6_d5;
  int32_T c6_i;
  c6_mxData = NULL;
  switch (c6_ssIdNumber) {
   case 5U:
    c6_d = *chartInstance->c6_xc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 11U:
    c6_d1 = *chartInstance->c6_yc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 12U:
    c6_d2 = *chartInstance->c6_zc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 13U:
    c6_d3 = *chartInstance->c6_vxc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 14U:
    c6_d4 = *chartInstance->c6_vyc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 15U:
    c6_d5 = *chartInstance->c6_vzc;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 16U:
    c6_i = *chartInstance->c6_cond;
    sf_mex_assign(&c6_mxData, sf_mex_create("mxData", &c6_i, 6, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c6_mxData;
}

static void c6_b_twister_state_vector(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, uint32_T c6_mt[625], uint32_T c6_b_seed)
{
  uint32_T c6_r;
  int32_T c6_mti;
  real_T c6_b_mti;
  real_T c6_d;
  uint32_T c6_u;
  c6_r = c6_b_seed;
  c6_mt[0] = c6_b_seed;
  for (c6_mti = 0; c6_mti < 623; c6_mti++) {
    c6_b_mti = 2.0 + (real_T)c6_mti;
    c6_d = muDoubleScalarRound(c6_b_mti - 1.0);
    if (c6_d < 4.294967296E+9) {
      if (c6_d >= 0.0) {
        c6_u = (uint32_T)c6_d;
      } else {
        c6_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c6_d >= 4.294967296E+9) {
      c6_u = MAX_uint32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c6_u = 0U;
    }

    c6_r = (c6_r ^ c6_r >> 30U) * 1812433253U + c6_u;
    c6_mt[(int32_T)c6_b_mti - 1] = c6_r;
  }

  c6_mt[624] = 624U;
}

static real_T c6_b_eml_rand_mt19937ar(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance, const emlrtStack *c6_sp, uint32_T c6_d_state[625])
{
  emlrtStack c6_st;
  int32_T c6_exitg1;
  int32_T c6_j;
  uint32_T c6_u[2];
  real_T c6_b_j;
  uint32_T c6_mti;
  real_T c6_b_r;
  int32_T c6_kk;
  uint32_T c6_y;
  boolean_T c6_isvalid;
  int32_T c6_b_kk;
  real_T c6_c_kk;
  boolean_T c6_b_isvalid;
  uint32_T c6_b_y;
  uint32_T c6_c_y;
  uint32_T c6_d_y;
  uint32_T c6_e_y;
  uint32_T c6_f_y;
  int32_T c6_k;
  uint32_T c6_g_y;
  const mxArray *c6_h_y = NULL;
  boolean_T c6_exitg2;
  static char_T c6_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  const mxArray *c6_i_y = NULL;
  int32_T c6_a;
  (void)chartInstance;
  c6_st.prev = c6_sp;
  c6_st.tls = c6_sp->tls;
  c6_st.site = &c6_bb_emlrtRSI;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    c6_exitg1 = 0;
    for (c6_j = 0; c6_j < 2; c6_j++) {
      c6_b_j = 1.0 + (real_T)c6_j;
      c6_mti = c6_d_state[624] + 1U;
      if ((real_T)c6_mti >= 625.0) {
        for (c6_kk = 0; c6_kk < 227; c6_kk++) {
          c6_c_kk = 1.0 + (real_T)c6_kk;
          c6_y = (c6_d_state[(int32_T)c6_c_kk - 1] & 2147483648U) | (c6_d_state
            [(int32_T)(c6_c_kk + 1.0) - 1] & 2147483647U);
          c6_b_y = c6_y;
          c6_d_y = c6_b_y;
          if ((c6_d_y & 1U) == 0U) {
            c6_d_y >>= 1U;
          } else {
            c6_d_y = c6_d_y >> 1U ^ 2567483615U;
          }

          c6_d_state[(int32_T)c6_c_kk - 1] = c6_d_state[(int32_T)(c6_c_kk +
            397.0) - 1] ^ c6_d_y;
        }

        for (c6_b_kk = 0; c6_b_kk < 396; c6_b_kk++) {
          c6_c_kk = 228.0 + (real_T)c6_b_kk;
          c6_y = (c6_d_state[(int32_T)c6_c_kk - 1] & 2147483648U) | (c6_d_state
            [(int32_T)(c6_c_kk + 1.0) - 1] & 2147483647U);
          c6_f_y = c6_y;
          c6_g_y = c6_f_y;
          if ((c6_g_y & 1U) == 0U) {
            c6_g_y >>= 1U;
          } else {
            c6_g_y = c6_g_y >> 1U ^ 2567483615U;
          }

          c6_d_state[(int32_T)c6_c_kk - 1] = c6_d_state[(int32_T)((c6_c_kk + 1.0)
            - 228.0) - 1] ^ c6_g_y;
        }

        c6_y = (c6_d_state[623] & 2147483648U) | (c6_d_state[0] & 2147483647U);
        c6_c_y = c6_y;
        c6_e_y = c6_c_y;
        if ((c6_e_y & 1U) == 0U) {
          c6_e_y >>= 1U;
        } else {
          c6_e_y = c6_e_y >> 1U ^ 2567483615U;
        }

        c6_d_state[623] = c6_d_state[396] ^ c6_e_y;
        c6_mti = 1U;
      }

      c6_y = c6_d_state[(int32_T)c6_mti - 1];
      c6_d_state[624] = c6_mti;
      c6_y ^= c6_y >> 11U;
      c6_y ^= c6_y << 7U & 2636928640U;
      c6_y ^= c6_y << 15U & 4022730752U;
      c6_y ^= c6_y >> 18U;
      c6_u[(int32_T)c6_b_j - 1] = c6_y;
    }

    c6_u[0] >>= 5U;
    c6_u[1] >>= 6U;
    c6_b_r = 1.1102230246251565E-16 * ((real_T)c6_u[0] * 6.7108864E+7 + (real_T)
      c6_u[1]);
    if (c6_b_r == 0.0) {
      if (((real_T)c6_d_state[624] >= 1.0) && ((real_T)c6_d_state[624] < 625.0))
      {
        c6_isvalid = true;
      } else {
        c6_isvalid = false;
      }

      c6_b_isvalid = c6_isvalid;
      if (c6_isvalid) {
        c6_b_isvalid = false;
        c6_k = 0;
        c6_exitg2 = false;
        while ((!c6_exitg2) && (c6_k + 1 < 625)) {
          if ((real_T)c6_d_state[c6_k] == 0.0) {
            c6_a = c6_k + 1;
            c6_k = c6_a;
          } else {
            c6_b_isvalid = true;
            c6_exitg2 = true;
          }
        }
      }

      if (!c6_b_isvalid) {
        c6_h_y = NULL;
        sf_mex_assign(&c6_h_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        c6_i_y = NULL;
        sf_mex_assign(&c6_i_y, sf_mex_create("y", c6_cv, 10, 0U, 1U, 0U, 2, 1,
          37), false);
        sf_mex_call(&c6_st, &c6_b_emlrtMCI, "error", 0U, 2U, 14, c6_h_y, 14,
                    sf_mex_call(&c6_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c6_st, NULL, "message", 1U, 1U, 14, c6_i_y)));
      }
    } else {
      c6_exitg1 = 1;
    }
  } while (c6_exitg1 == 0);

  return c6_b_r;
}

static void init_dsm_address_info(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_iso_calc_temp_ver4InstanceStruct
  *chartInstance)
{
  chartInstance->c6_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c6_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c6_xc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_yc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_zc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_vxc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_vyc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c6_vzc = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c6_cond = (int32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c6_iso_calc_temp_ver4_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3836074378U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4062931359U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2553671749U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3452745770U);
}

mxArray *sf_c6_iso_calc_temp_ver4_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_iso_calc_temp_ver4_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("time");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c6_iso_calc_temp_ver4_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c6_iso_calc_temp_ver4(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtls+L2kAUxyepyhaW4qH3elqWUsTVom4vjRVKhQpS9tDDwHQyGTWQSWQyinry2KPHHvun9M/"
    "Z4x577OSH2ziVpmh2TcGBYXgvvJfvfPnwGKD1+kCuZ3KPywCU5Hkmtw6iVYxjTe7z+Izyhft8RW"
    "6xmNAg73PSs+TpYhbGeDrvuUMv7N8Gv/uXdvTXEv2fxvlo3b09rP6lEdTXEvWFHfVPEvVlGc3mJ"
    "NS98ed4+l/tp3+RF/3V/fQv86L/+T/p17f060DikxP9F3vpX+RG/+Ve+peZ6S8bh9X/+f9d+ktb"
    "+qOYUTH2rKh+oP19PmvKfNYTfR1gg0msw0i5h67co7y5xOeVEZ5fV0YWPKxS/BgofgRx9w0ccG/"
    "EMau8tx3qw37n5mPnHfxUr9VrGArPc0xvDilzoGObkGHhYBNy7FrDqQsn3J5hQYPPKMhVWR64SO"
    "O6sOVDAfiUWkHdh2PzcLuOePi5zoSHeYoPXYWH7sE8cHdUZf/NfCgq9w9iX0ieN++3Y/Pw3Yp4M"
    "GgmPHxL8cNU/DAznw+IkdFVs11rodDn4dSJcTnxkgUvP2JevjwOL0TxgzwAL+Lq+rrRwlwF5sTL"
    "ab7s4MUf8wbx3FHG86WSCS+DFH9eKP4Ese0jTIQ9o4g0ke17iGCHIEHZBM0of33/Hv8F7g0ReQ="
    "="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_iso_calc_temp_ver4_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sHfcLuhDjnnrLcMKYCj6kgH";
}

static void sf_opaque_initialize_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  initialize_params_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
  initialize_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  enable_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  disable_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  sf_gateway_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_iso_calc_temp_ver4(SimStruct* S)
{
  return get_sim_state_c6_iso_calc_temp_ver4
    ((SFc6_iso_calc_temp_ver4InstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_iso_calc_temp_ver4(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c6_iso_calc_temp_ver4(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_iso_calc_temp_ver4InstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_iso_calc_temp_ver4_optimization_info();
    }

    mdl_cleanup_runtime_resources_c6_iso_calc_temp_ver4
      ((SFc6_iso_calc_temp_ver4InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  mdl_start_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c6_iso_calc_temp_ver4(void *chartInstanceVar)
{
  mdl_terminate_c6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_iso_calc_temp_ver4(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_iso_calc_temp_ver4
      ((SFc6_iso_calc_temp_ver4InstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc6_iso_calc_temp_ver4((SFc6_iso_calc_temp_ver4InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c6_iso_calc_temp_ver4_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [23] = {
    "eNrtWUFvG0UUXrtJRKRSGQSCA1IiIUGFUJSmKG05UCfrWLGwiVWnBSRLZjz77J16dmaZmXWccok",
    "4ceyRGz3yMzjxGypu3DhyrMSF2fU6sde73sR2EyOy0mYz3u+9/d57374Zj41MqWLo45Y+X60Zxo",
    "q+vqHPrNE/lsNxZujsf75kfByOH2oj5jlVJJAjjYkHQw48AsmppwhnJdbisTDCWiCAYY11uVBJ3",
    "iRxPEpYp+gx7PuTX9sE2zWbe9Ta1bbIOmD0WHtzPVXVfgpEAFZFAEvZgnttu0hR+5SxUEemDbgj",
    "PWdSCBJUzXN9WrLiUUVcCns9wCUmFdKM5Rm3mkIKTNVLDNOPVNYGQO64lCAWG62NZA1cnWAFj11",
    "L/z3wlA4qCsM2EmoXbNQFWSadwCdnEPVJpL7RJAwpLgiiew41fcNxblWq+VS4BXRCQjS3XQGo43",
    "LCVHL9a0Ud6R5DTQoFaHrtZG81+N7zi/+EwBGIxLy1TN4FgdpwwBIfGiRkrxdU61Ql4zBFHHiCx",
    "A7W9ZNgJapXK0fWkK4THGqLJBgEQZbkoSBdnd5Eb55T8pWZ9sp4Tr/YMg0WeNvrwqQqnHorYmYi",
    "SmUi7JC7ZegCDbwWkEKTYX2v8TgpiXXIdYJ9eSe/DR4juvAhzOTMIrHl6kYAQd/5SjeWUST2pOK",
    "OqcVbKJfHb4/DSkyBaCEMcV1AICJB5yxIb7I3i0i/9hqoWamAXhy4r5A0lCFbHisccdHROZnQRM",
    "5C8CuaCHRkW9dSvwmPpX5pJsH8WqbhMMI2WH6DIRQq+rXR2JicSL+17ej3rkvUcQEkFsSNq6o//",
    "2waZ/PPzXPMPwO76PX2kJ9MjB9j6Bp97mp28nOz+r9MaJcfsnsz8pyliJ2Py+nzhz//+PCflz++",
    "/e7vW+zX3ItfZnn++29dbL6+FY4/GDTGU6F3x/TlY/eHeC3F+H9vyH8uHMv9Fi57duEpY6KMK19",
    "+az7d7rT3A392bjLfmxG+g8/X/Q597Ab9VgpcssKFhD9GXn969f3fH+K7kpKP1fDz/vH3w9nsP8",
    "lH6xiXrxsj+bphdHt4RLdXx//T6fgfLwr/jen4P1sU/u+ci392hH/W0PJZEP4fTcX/eGH4356K/",
    "7O58c/lZ7Mff34c/5VIv/bHDiibW337auZi80l2yC81iOHGzIsrKXlcDbkExzcn+eD600l+Hno4",
    "SclHNZIPf2x+Xq8K3tYryvWiXtjIemXnsLyzW3+0tbm1ieqKc9rkvTo4tE5Js+4gRVGzLhCz9Fq",
    "t7uoVv17v+Lcb/mcbziLoIk3XSyN5WNLfcMEK5v+r1sNfz/t6ePV8LnropeTBjOjBnFkPgrU3nP",
    "9Mf1iOxL88WL+H9vZV6+GF1ddDHuaih59T8tGM5KM59/7QcHD7zvb9zXuNIM8tj4ZyudbLPPTyW",
    "6iX7y5HLziSD/wa9KLuPHhw9x4SUcFc6+W6v8ToRdriLuasPef+sj4XvVRT8rMWyc9asO/bQP5u",
    "EjTwdoNI3sCI4oYCx210QXw2sh6fdl/lonbGtd1C2GX+h/GdZ590WruVGfdlL8tu1vguul+8aPh",
    "J3++MCD63wHHMuo//uvEvjYutTwbz1xenP4GZNqFWzK8h4e0yoFbc3UuI71/D5ZFZ",
    ""
  };

  static char newstr [1641] = "";
  newstr[0] = '\0';
  for (i = 0; i < 23; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c6_iso_calc_temp_ver4(SimStruct *S)
{
  const char* newstr = sf_c6_iso_calc_temp_ver4_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(601547131U));
  ssSetChecksum1(S,(310565115U));
  ssSetChecksum2(S,(1848821269U));
  ssSetChecksum3(S,(2678067368U));
}

static void mdlRTW_c6_iso_calc_temp_ver4(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c6_iso_calc_temp_ver4(SimStruct *S)
{
  SFc6_iso_calc_temp_ver4InstanceStruct *chartInstance;
  chartInstance = (SFc6_iso_calc_temp_ver4InstanceStruct *)utMalloc(sizeof
    (SFc6_iso_calc_temp_ver4InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_iso_calc_temp_ver4InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_iso_calc_temp_ver4;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c6_JITStateAnimation,
    chartInstance->c6_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c6_iso_calc_temp_ver4(chartInstance);
}

void c6_iso_calc_temp_ver4_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c6_iso_calc_temp_ver4(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_iso_calc_temp_ver4(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_iso_calc_temp_ver4(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_iso_calc_temp_ver4_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
