#ifndef __c6_iso_calc_temp_ver4_h__
#define __c6_iso_calc_temp_ver4_h__

/* Type Definitions */
#ifdef __has_include
#if __has_include(<time.h>)
#include <time.h>
#else
#error Cannot find header file <time.h> for imported type time_t.\
 Supply the missing header file or turn on Simulation Target -> Generate typedefs\
 for imported bus and enumeration types.
#endif

#else
#include <time.h>
#endif

#ifndef struct_tag_sxaDueAh1f53T9ESYg9Uc4E
#define struct_tag_sxaDueAh1f53T9ESYg9Uc4E

struct tag_sxaDueAh1f53T9ESYg9Uc4E
{
  real_T tm_min;
  real_T tm_sec;
  real_T tm_hour;
  real_T tm_mday;
  real_T tm_mon;
  real_T tm_year;
};

#endif                                 /*struct_tag_sxaDueAh1f53T9ESYg9Uc4E*/

#ifndef typedef_c6_sxaDueAh1f53T9ESYg9Uc4E
#define typedef_c6_sxaDueAh1f53T9ESYg9Uc4E

typedef struct tag_sxaDueAh1f53T9ESYg9Uc4E c6_sxaDueAh1f53T9ESYg9Uc4E;

#endif                                 /*typedef_c6_sxaDueAh1f53T9ESYg9Uc4E*/

#ifndef struct_tag_xQ7ImSrjFZtLpZbFpF9dME
#define struct_tag_xQ7ImSrjFZtLpZbFpF9dME

struct tag_xQ7ImSrjFZtLpZbFpF9dME
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[7];
  char_T f4[7];
  char_T f5[6];
  char_T f6[7];
};

#endif                                 /*struct_tag_xQ7ImSrjFZtLpZbFpF9dME*/

#ifndef typedef_c6_cell_0
#define typedef_c6_cell_0

typedef struct tag_xQ7ImSrjFZtLpZbFpF9dME c6_cell_0;

#endif                                 /*typedef_c6_cell_0*/

#ifndef struct_tag_97nDGEZFuFqSdHXPbOPdO
#define struct_tag_97nDGEZFuFqSdHXPbOPdO

struct tag_97nDGEZFuFqSdHXPbOPdO
{
  c6_cell_0 _data;
};

#endif                                 /*struct_tag_97nDGEZFuFqSdHXPbOPdO*/

#ifndef typedef_c6_s_97nDGEZFuFqSdHXPbOPdO
#define typedef_c6_s_97nDGEZFuFqSdHXPbOPdO

typedef struct tag_97nDGEZFuFqSdHXPbOPdO c6_s_97nDGEZFuFqSdHXPbOPdO;

#endif                                 /*typedef_c6_s_97nDGEZFuFqSdHXPbOPdO*/

#ifndef typedef_SFc6_iso_calc_temp_ver4InstanceStruct
#define typedef_SFc6_iso_calc_temp_ver4InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c6_sfEvent;
  boolean_T c6_doneDoubleBufferReInit;
  uint8_T c6_is_active_c6_iso_calc_temp_ver4;
  uint8_T c6_JITStateAnimation[1];
  uint8_T c6_JITTransitionAnimation[1];
  int32_T c6_IsDebuggerActive;
  int32_T c6_IsSequenceViewerPresent;
  int32_T c6_SequenceViewerOptimization;
  void *c6_RuntimeVar;
  uint32_T c6_seed;
  boolean_T c6_seed_not_empty;
  uint32_T c6_method;
  boolean_T c6_method_not_empty;
  uint32_T c6_state[625];
  boolean_T c6_state_not_empty;
  uint32_T c6_b_state[2];
  boolean_T c6_b_state_not_empty;
  uint32_T c6_c_state;
  boolean_T c6_c_state_not_empty;
  uint32_T c6_mlFcnLineNumber;
  void *c6_fcnDataPtrs[8];
  char_T *c6_dataNames[8];
  uint32_T c6_numFcnVars;
  uint32_T c6_ssIds[8];
  uint32_T c6_statuses[8];
  void *c6_outMexFcns[8];
  void *c6_inMexFcns[8];
  CovrtStateflowInstance *c6_covrtInstance;
  void *c6_fEmlrtCtx;
  real_T *c6_xc;
  real_T *c6_yc;
  real_T *c6_zc;
  real_T *c6_vxc;
  real_T *c6_vyc;
  real_T *c6_vzc;
  int32_T *c6_cond;
} SFc6_iso_calc_temp_ver4InstanceStruct;

#endif                                 /*typedef_SFc6_iso_calc_temp_ver4InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_iso_calc_temp_ver4_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c6_iso_calc_temp_ver4_get_check_sum(mxArray *plhs[]);
extern void c6_iso_calc_temp_ver4_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
