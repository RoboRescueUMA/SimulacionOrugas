/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ModeloFinal/Configuración/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"

void ModeloFinal_1349f7f3_1_computeRuntimeParameters(real_T *in, real_T *out)
{
  (void) in;
  (void) out;
}

void ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

void ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}
