/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ModeloFinal/Configuración/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "ModeloFinal_1349f7f3_1.h"
#include "ModeloFinal_1349f7f3_1_gateway.h"

void ModeloFinal_1349f7f3_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 1, 0.001, 0.001, 0.001, 1, 0,
    (NeModifyAbsTol) 0, 0.001, 0, 0, 0, 0, (SscLoggingSetting) 0, 621201365, 0,
    0, 0, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 0.001, 1e-09, 0, 0,
    100, 0, 1, (NeConsistencySolver) 2, (NeIndexReductionMethod) 1, 0, 1e-09,
    (NeToleranceSource) 1, 0.001, 0.001, 0.001, 0, (NeLocalSolverChoice) 0, 1, 1,
    0.001, 0, 3, 2, 0, 2, (NeLinearAlgebraChoice) 0, 0,
    (NeEquationFormulationChoice) 0, 1024, 1, 0.001, (NePartitionStorageMethod)
    0, 1024, (NePartitionMethod) 0, 0, (NeMultibodyLocalSolverChoice) 0, 0.001,
  };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int* rtpDaes = NULL;
  int rtwLogDaes[1] = { 0 };

  int* solverHitDaes = NULL;
  ModeloFinal_1349f7f3_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group(
    "ModeloFinal/Configuraci\\x00F3n/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    0,
    rtpDaes,
    1,
    rtwLogDaes,
    0,
    solverHitDaes);
}
