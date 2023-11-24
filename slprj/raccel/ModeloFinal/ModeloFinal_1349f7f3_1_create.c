/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'ModeloFinal/Configuración/Solver Configuration'.
 */

#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"

PmfMessageId sm_ssci_recordRunTimeError(
  const char *errorId, const char *errorMsg, NeuDiagnosticManager* mgr);

#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))

PmIntVector *pm_create_int_vector(size_t, PmAllocator *);
int_T pm_create_int_vector_fields (PmIntVector *, size_t, PmAllocator *);
int_T pm_create_real_vector_fields(PmRealVector *, size_t, PmAllocator *);
int_T pm_create_char_vector_fields(PmCharVector *, size_t, PmAllocator *);
int_T pm_create_bool_vector_fields(PmBoolVector *, size_t, PmAllocator *);
void pm_rv_equals_rv(const PmRealVector *, const PmRealVector *);
extern const NeAssertData ModeloFinal_1349f7f3_1_assertData[];
extern const NeZCData ModeloFinal_1349f7f3_1_ZCData[];
void ModeloFinal_1349f7f3_1_computeRuntimeParameters(
  const double *runtimeRootVariables,
  double *runtimeParameters);
void ModeloFinal_1349f7f3_1_validateRuntimeParameters(
  const double *runtimeParameters,
  int32_T *assertSatisfactionFlags);
void ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
void ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValues(
  const double *runtimeParameters,
  RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
void ModeloFinal_1349f7f3_1_initializeGeometries(
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle);
PmfMessageId ModeloFinal_1349f7f3_1_compDerivs(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_numJacPerturbLoBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_numJacPerturbHiBounds(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_checkDynamics(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  const int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_compOutputsDyn(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_compOutputsKin(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_compOutputs (
  const RuntimeDerivedValuesBundle *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_computeAsmModeVector(
  const double *, const double *, const double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_computeSimModeVector(
  const double *, const double *, const double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_computeZeroCrossings(
  const RuntimeDerivedValuesBundle *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId ModeloFinal_1349f7f3_1_recordLog(
  const RuntimeDerivedValuesBundle *,
  const int *,
  const double *,
  const int *,
  const double *, const double *, const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
void ModeloFinal_1349f7f3_1_setTargets(
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  CTarget *targets);
void ModeloFinal_1349f7f3_1_resetAsmStateVector(const void *mech, double
  *stateVector);
void ModeloFinal_1349f7f3_1_resetSimStateVector(const void *mech, double
  *stateVector);
void ModeloFinal_1349f7f3_1_initializeTrackedAngleState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *modeVector,
  const double *motionData,
  double *stateVector);
void ModeloFinal_1349f7f3_1_computeDiscreteState(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  double *stateVector);
void ModeloFinal_1349f7f3_1_adjustPosition(
  const void *mech,
  const double *dofDeltas,
  double *stateVector);
void ModeloFinal_1349f7f3_1_perturbAsmJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void ModeloFinal_1349f7f3_1_perturbSimJointPrimitiveState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void ModeloFinal_1349f7f3_1_perturbFlexibleBodyState(
  const void *mech,
  size_t stageIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void ModeloFinal_1349f7f3_1_computePosDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void ModeloFinal_1349f7f3_1_computeVelDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void ModeloFinal_1349f7f3_1_projectPartiallyTargetedPos(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *origStateVector,
  int partialType,
  double *stateVector);
void ModeloFinal_1349f7f3_1_propagateMotion(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  double *motionData);
size_t ModeloFinal_1349f7f3_1_computeAssemblyError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const int *modeVector,
  const double *motionData,
  double *error);
size_t ModeloFinal_1349f7f3_1_computeAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  boolean_T forVelocitySatisfaction,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
size_t ModeloFinal_1349f7f3_1_computeFullAssemblyJacobian(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  const double *motionData,
  double *J);
boolean_T ModeloFinal_1349f7f3_1_isInKinematicSingularity(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  size_t constraintIdx,
  const int *modeVector,
  const double *motionData);
void ModeloFinal_1349f7f3_1_convertStateVector(
  const void *asmMech,
  const RuntimeDerivedValuesBundle *asmRuntimeDerivedValuesBundle,
  const void *simMech,
  const double *asmStateVector,
  const int *asmModeVector,
  const int *simModeVector,
  double *simStateVector);
void ModeloFinal_1349f7f3_1_constructStateVector(
  const void *mech,
  const double *solverStateVector,
  const double *u,
  const double *uDot,
  const double *discreteStateVector,
  double *fullStateVector);
void ModeloFinal_1349f7f3_1_extractSolverStateVector(
  const void *mech,
  const double *fullStateVector,
  double *solverStateVector);
boolean_T ModeloFinal_1349f7f3_1_isPositionViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
boolean_T ModeloFinal_1349f7f3_1_isVelocityViolation(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const double *stateVector,
  const int *modeVector);
PmfMessageId ModeloFinal_1349f7f3_1_projectStateSim(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const int *modeVector,
  double *stateVector,
  void *neDiagMgr);
void ModeloFinal_1349f7f3_1_computeConstraintError(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const double *stateVector,
  const int *modeVector,
  double *error);
void ModeloFinal_1349f7f3_1_resetModeVector(const void *mech, int *modeVector);
boolean_T ModeloFinal_1349f7f3_1_hasJointDisToNormModeChange(
  const void *mech,
  const int *prevModeVector,
  const int *modeVector);
PmfMessageId ModeloFinal_1349f7f3_1_performJointDisToNormModeChange(
  const void *mech,
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle,
  const int *constraintEqnEnableFlags,
  const int *prevModeVector,
  const int *modeVector,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
void ModeloFinal_1349f7f3_1_onModeChangedCutJoints(
  const void *mech,
  const int *prevModeVector,
  const int *modeVector,
  double *stateVector);
PmfMessageId ModeloFinal_1349f7f3_1_assemble(const double *u, double *udot,
  double *x,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) x;
  (void) u;
  (void) udot;
  (void) neDiagMgr;
  return NULL;
}

static
  void dae_cg_setParameters_function(const NeDae *dae,
  const NeParameterBundle *paramBundle)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeRootVariables = paramBundle->mRealParameters.mX;
  if (smData->mRuntimeParameterScalars.mN == 0)
    return;
  ModeloFinal_1349f7f3_1_computeRuntimeParameters(
    runtimeRootVariables,
    smData->mRuntimeParameterScalars.mX);
  ModeloFinal_1349f7f3_1_computeAsmRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mAsmRuntimeDerivedValuesBundle);
  ModeloFinal_1349f7f3_1_computeSimRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    &dae->mPrivateData->mSimRuntimeDerivedValuesBundle);
  ModeloFinal_1349f7f3_1_initializeGeometries
    (&smData->mSimRuntimeDerivedValuesBundle);
  sm_core_computeRedundantConstraintEquations(
    &dae->mPrivateData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle);

#if 0

  {
    size_t i;
    const size_t n = smData->mSimulationDelegate.mRunTimeEnabledEquations.mSize;
    pmf_printf("\nRuntime Enabled Equations (%lu)\n", n);
    for (i = 0; i < n; ++i)
      pmf_printf("  %2lu:  %d\n", i,
                 smData->mSimulationDelegate.mRunTimeEnabledEquations.mValues[i]);
  }

#endif

}

static
  PmfMessageId dae_cg_pAssert_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeParams = smData->mRuntimeParameterScalars.mX;
  int32_T *assertSatisfactionFlags = daeMethodOutput->mPASSERT.mX;
  (void) systemInput;
  (void) neDiagMgr;
  ModeloFinal_1349f7f3_1_validateRuntimeParameters(
    runtimeParams, assertSatisfactionFlags);
  return NULL;
}

static
  PmfMessageId dae_cg_deriv_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  if (smData->mCachedDerivativesAvailable)
    memcpy(daeMethodOutput->mXP0.mX, smData->mCachedDerivatives.mX,
           440 * sizeof(real_T));
  else
    errorId = ModeloFinal_1349f7f3_1_compDerivs(
      &smData->mSimRuntimeDerivedValuesBundle,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mV.mX + 0,
      systemInput->mD.mX,
      daeMethodOutput->mXP0.mX,
      &errorResult,
      neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbLoBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = ModeloFinal_1349f7f3_1_numJacPerturbLoBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mV.mX + 0,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_LO.mX,
    &errorResult,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_numJacPerturbHiBounds_method(
  const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = ModeloFinal_1349f7f3_1_numJacPerturbHiBounds(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mV.mX + 0,
    systemInput->mD.mX,
    daeMethodOutput->mNUMJAC_DX_HI.mX,
    &errorResult,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_compOutputs_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  PmfMessageId errorId = NULL;
  (void) dae;
  (void) systemInput;
  (void) daeMethodOutput;
  (void) neDiagMgr;
  return errorId;
}

static
  PmfMessageId dae_cg_mode_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  errorId = ModeloFinal_1349f7f3_1_computeSimModeVector(
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mV.mX + 0,
    daeMethodOutput->mMODE.mX,
    &errorResult,
    neDiagMgr);
  memcpy(smData->mCachedModeVector.mX, daeMethodOutput->mMODE.mX,
         0 * sizeof(int32_T));
  return errorId;
}

static
  PmfMessageId dae_cg_zeroCrossing_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  double errorResult = 0.0;
  return
    ModeloFinal_1349f7f3_1_computeZeroCrossings(
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mV.mX + 0,
    systemInput->mD.mX,
    daeMethodOutput->mZC.mX,
    &errorResult,
    neDiagMgr);
}

static
  void dae_cg_setupLoggerFcn(const NeDae *dae,
  NeLoggerBuilder *neLoggerBuilder)
{
  (void) dae;
  (void) neLoggerBuilder;
}

static
  PmfMessageId dae_cg_recordLog_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  PmRealVector *output,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  double *fullStateVector = smData->mSimulationFullStateVector.mX;
  ModeloFinal_1349f7f3_1_constructStateVector(
    NULL,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mD.mX,
    fullStateVector);
  errorId = ModeloFinal_1349f7f3_1_recordLog(
    &smData->mSimRuntimeDerivedValuesBundle,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    fullStateVector,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mV.mX + 0,
    output->mX,
    &errorResult,
    neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_project_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    false,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_check_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mNumConstraintEqns > 0)
    errorId = sm_core_projectState(
      false,
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mM.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL) {
    double result = 0.0;
    errorId = ModeloFinal_1349f7f3_1_checkDynamics(
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mV.mX + 0,
      systemInput->mD.mX,
      systemInput->mM.mX,
      &result, neDiagMgr);
  }

  return errorId;
}

static
  PmfMessageId dae_cg_CIC_MODE_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  const size_t mvSize = smData->mModeVectorSize;
  boolean_T modeChanged = false;
  if (mvSize > 0) {
    errorId = ModeloFinal_1349f7f3_1_computeSimModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mV.mX + 0,
      systemInput->mM.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;

    {
      size_t i;
      for (i = 0; i < mvSize; ++i)
        if (systemInput->mM.mX[i] != smData->mCachedModeVector.mX[i]) {
          modeChanged = true;
          break;
        }
    }
  }

  if (modeChanged) {
    errorId = sm_core_onModeChanged(
      &smData->mSimulationDelegate,
      &smData->mSimRuntimeDerivedValuesBundle,
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mD.mX,
      smData->mCachedModeVector.mX,
      systemInput->mM.mX,
      systemInput->mX.mX,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  errorId =
    sm_core_projectState(
    true,
    &smData->mSimulationDelegate,
    &smData->mSimRuntimeDerivedValuesBundle,
    systemInput->mM.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 0,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_assemble_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  const SmMechanismDelegate *delegate = &smData->mAssemblyDelegate;
  const RuntimeDerivedValuesBundle *runtimeDerivedValuesBundle =
    &smData->mAsmRuntimeDerivedValuesBundle;
  PmfMessageId errorId = NULL;
  size_t i;
  double errorResult = 0.0;
  const size_t numTargets = 440;
  unsigned int asmStatus = 0;
  double *assemblyFullStateVector = smData->mAssemblyFullStateVector.mX;
  double *simulationFullStateVector = smData->mSimulationFullStateVector.mX;
  (*delegate->mSetTargets)(runtimeDerivedValuesBundle, smData->mTargets);

  {
    const double *u = systemInput->mU.mX;
    const double *uDot = u + smData->mInputVectorSize;
    CTarget *target = smData->mTargets + smData->mNumInternalTargets;
    for (i = 0; i < smData->mNumInputMotionPrimitives; ++i) {
      const size_t inputOffset = smData->mMotionInputOffsets.mX[i];
      (target++)->mValue[0] = u [inputOffset];
      (target++)->mValue[0] = uDot[inputOffset];
    }
  }

  if (smData->mAssemblyModeVector.mN > 0) {
    errorId = ModeloFinal_1349f7f3_1_computeAsmModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mV.mX + 0,
      smData->mAssemblyModeVector.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
  }

  sm_core_computeStateVector(
    delegate, runtimeDerivedValuesBundle, smData->mAssemblyModeVector.mX,
    numTargets, smData->mTargets, assemblyFullStateVector);
  asmStatus = sm_core_checkAssembly(
    delegate, runtimeDerivedValuesBundle, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX,
    NULL, NULL, NULL);
  if (asmStatus != 1) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:ssci:core:dae:dae:assemblyFailure",
      asmStatus == 2 ?
      "Model not assembled. The following violation occurred: Position Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
      :
      (asmStatus == 3 ?
       "Model not assembled. The following violation occurred: Velocity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
       :
       "Model not assembled. The following violation occurred: Singularity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."),
      neDiagMgr);
  }

#if 0

  ModeloFinal_1349f7f3_1_checkTargets(
    &smData->mSimRuntimeDerivedValuesBundle,
    assemblyFullStateVector);

#endif

  if (smData->mModeVectorSize > 0) {
    errorId = ModeloFinal_1349f7f3_1_computeSimModeVector(
      systemInput->mU.mX,
      systemInput->mU.mX + 0,
      systemInput->mV.mX + 0,
      systemInput->mM.mX,
      &errorResult,
      neDiagMgr);
    if (errorId != NULL)
      return errorId;
    memcpy(smData->mCachedModeVector.mX, systemInput->mM.mX,
           0 * sizeof(int32_T));
  }

  (*delegate->mConvertStateVector)(
    NULL, runtimeDerivedValuesBundle, NULL, assemblyFullStateVector,
    smData->mAssemblyModeVector.mX, systemInput->mM.mX,
    simulationFullStateVector);
  for (i = 0; i < smData->mStateVectorSize; ++i)
    systemInput->mX.mX[i] = simulationFullStateVector[smData->
      mStateVectorMap.mX[i]];
  memcpy(systemInput->mD.mX,
         simulationFullStateVector +
         smData->mFullStateVectorSize - smData->mDiscreteStateSize,
         smData->mDiscreteStateSize * sizeof(double));
  return errorId;
}

typedef struct {
  size_t first;
  size_t second;
} SizePair;

static void checkMemAllocStatus(int_T status)
{
  (void) status;
}

static
  PmCharVector cStringToCharVector(const char *src)
{
  const size_t n = strlen(src);
  PmCharVector charVect;
  const int_T status =
    pm_create_char_vector_fields(&charVect, n + 1, pm_default_allocator());
  checkMemAllocStatus(status);
  strcpy(charVect.mX, src);
  return charVect;
}

static
  void initBasicAttributes(NeDaePrivateData *smData)
{
  size_t i;
  smData->mStateVectorSize = 440;
  smData->mFullStateVectorSize = 440;
  smData->mDiscreteStateSize = 0;
  smData->mModeVectorSize = 0;
  smData->mNumZeroCrossings = 0;
  smData->mInputVectorSize = 0;
  smData->mOutputVectorSize = 0;
  smData->mNumConstraintEqns = 12;
  smData->mFundamentalSampleTime = +0.000000000000000000e+00;
  for (i = 0; i < 4; ++i)
    smData->mChecksum[i] = 0;
}

static
  void initStateVector(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T stateVectorMap[440] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
    100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
    110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
    130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
    140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
    160, 161, 162, 163, 164, 165, 166, 167, 168, 169,
    170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
    190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
    200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
    220, 221, 222, 223, 224, 225, 226, 227, 228, 229,
    230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
    250, 251, 252, 253, 254, 255, 256, 257, 258, 259,
    260, 261, 262, 263, 264, 265, 266, 267, 268, 269,
    270, 271, 272, 273, 274, 275, 276, 277, 278, 279,
    280, 281, 282, 283, 284, 285, 286, 287, 288, 289,
    290, 291, 292, 293, 294, 295, 296, 297, 298, 299,
    300, 301, 302, 303, 304, 305, 306, 307, 308, 309,
    310, 311, 312, 313, 314, 315, 316, 317, 318, 319,
    320, 321, 322, 323, 324, 325, 326, 327, 328, 329,
    330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
    340, 341, 342, 343, 344, 345, 346, 347, 348, 349,
    350, 351, 352, 353, 354, 355, 356, 357, 358, 359,
    360, 361, 362, 363, 364, 365, 366, 367, 368, 369,
    370, 371, 372, 373, 374, 375, 376, 377, 378, 379,
    380, 381, 382, 383, 384, 385, 386, 387, 388, 389,
    390, 391, 392, 393, 394, 395, 396, 397, 398, 399,
    400, 401, 402, 403, 404, 405, 406, 407, 408, 409,
    410, 411, 412, 413, 414, 415, 416, 417, 418, 419,
    420, 421, 422, 423, 424, 425, 426, 427, 428, 429,
    430, 431, 432, 433, 434, 435, 436, 437, 438, 439
  };

  const CTarget targets[440] = {
    { 0, 2071, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.800900745043618856e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2071, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2072, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2072, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2073, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2073, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2074, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2074, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2075, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2075, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2076, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2076, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2077, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.013827643603647910e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2077, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2078, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.290873341111567929e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2078, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2079, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.430782194195978740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2079, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2080, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.435215731014365836e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2080, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2081, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.283589534649052344e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2081, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2082, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.521302508417585631e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2082, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2083, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2083, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2084, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.263052560500645516e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2084, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2085, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.613109503223039587e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2085, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2086, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.845501307182417082e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2086, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2087, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551066815778008989e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2087, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2088, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775478152224085336e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2088, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2089, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.163376047013737723e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2089, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2090, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.387858851864740192e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2090, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2091, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -4.367513634279988004e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2091, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2092, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.326756064494418166e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2092, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2093, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551181959319276987e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2093, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2094, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2094, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2095, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775718365473971660e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2095, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2096, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +5.550904026633458553e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2096, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2097, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.804092695030076114e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2097, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2098, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.248937242883359027e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2098, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2099, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.800900745050010965e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2099, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2100, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991501295e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2100, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2101, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2101, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2102, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2102, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2103, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2103, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2104, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2104, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2105, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2105, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2106, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991494078e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2106, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2107, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991363627e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2107, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2108, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991504625e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2108, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2109, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991497964e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2109, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2110, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2110, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2111, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2111, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2112, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2112, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2113, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2113, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2114, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.016438249416033862e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2114, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2115, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2115, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2116, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2116, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2117, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2117, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2118, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2118, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2119, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2119, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 1, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 1, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 2, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2275, 2, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2326, 0, false, 0, 2, "mm", false, false, +1.000000000000000000e+00,
      false, 1, { +4.000000000000000083e-03, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2326, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2391, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.570796326794895892e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2391, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2392, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 2392, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4732, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.800900745043618856e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4732, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4733, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4733, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4734, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4734, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4735, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4735, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4736, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4736, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4737, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4737, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4738, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.013827643603647910e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4738, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4739, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.290873341111567929e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4739, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4740, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.430782194195978740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4740, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4741, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.435215731014365836e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4741, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4742, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.283589534649052344e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4742, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4743, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.521302508417585631e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4743, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4744, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4744, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4745, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.263052560500645516e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4745, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4746, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.613109503223039587e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4746, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4747, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.845501307182417082e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4747, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4748, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551066815778008989e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4748, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4749, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775478152224085336e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4749, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4750, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.163376047013737723e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4750, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4751, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.387858851864740192e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4751, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4752, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -4.367513634279988004e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4752, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4753, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.326756064494418166e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4753, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4754, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551181959319276987e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4754, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4755, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4755, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4756, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775718365473971660e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4756, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4757, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +5.550904026633458553e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4757, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4758, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.804092695030076114e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4758, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4759, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.248937242883359027e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4759, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4760, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.800900745050010965e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4760, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4761, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991501295e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4761, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4762, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4762, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4763, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4763, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4764, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4764, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4765, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4765, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4766, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4766, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4767, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991494078e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4767, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4768, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991363627e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4768, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4769, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991504625e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4769, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4770, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991497964e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4770, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4771, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4771, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4772, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4772, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4773, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4773, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4774, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4774, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4775, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.016438249416033862e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4775, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4776, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4776, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4777, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4777, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4778, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4778, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4779, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4779, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4780, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4780, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 1, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 1, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 2, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4936, 2, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4987, 0, false, 0, 2, "mm", false, false, +1.000000000000000000e+00,
      false, 1, { +4.000000000000000083e-03, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 4987, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 5054, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.570796326794895892e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 5054, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 5055, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 5055, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7396, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.800900745043618856e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7396, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7397, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7397, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7398, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7398, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7399, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7399, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7400, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7400, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7401, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7401, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7402, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.013827643603647910e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7402, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7403, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.290873341111567929e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7403, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7404, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.430782194195978740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7404, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7405, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.435215731014365836e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7405, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7406, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.283589534649052344e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7406, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7407, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.521302508417585631e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7407, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7408, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7408, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7409, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.263052560500645516e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7409, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7410, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.613109503223039587e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7410, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7411, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.845501307182417082e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7411, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7412, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551066815778008989e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7412, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7413, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775478152224085336e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7413, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7414, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.163376047013737723e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7414, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7415, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.387858851864740192e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7415, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7416, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -4.367513634279988004e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7416, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7417, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.326756064494418166e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7417, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7418, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551181959319276987e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7418, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7419, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7419, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7420, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775718365473971660e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7420, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7421, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +5.550904026633458553e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7421, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7422, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.804092695030076114e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7422, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7423, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.248937242883359027e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7423, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7424, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.800900745050010965e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7424, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7425, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991501295e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7425, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7426, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7426, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7427, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7427, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7428, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7428, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7429, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7429, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7430, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7430, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7431, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991494078e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7431, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7432, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991363627e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7432, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7433, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991504625e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7433, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7434, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991497964e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7434, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7435, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7435, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7436, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7436, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7437, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7437, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7438, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7438, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7439, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.016438249416033862e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7439, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7440, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7440, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7441, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7441, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7442, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7442, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7443, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7443, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7444, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7444, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 1, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 1, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 2, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7600, 2, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7651, 0, false, 0, 2, "mm", false, false, +1.000000000000000000e+00,
      false, 1, { +4.000000000000000083e-03, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7651, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7718, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.570796326794895892e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7718, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7719, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 7719, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, false,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10059, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.800900745043618856e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10059, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10060, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10060, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10061, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10061, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10062, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10062, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10063, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10063, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10064, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10064, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10065, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.013827643603647910e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10065, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10066, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.290873341111567929e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10066, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10067, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.430782194195978740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10067, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10068, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.435215731014365836e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10068, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10069, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.283589534649052344e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10069, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10070, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.521302508417585631e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10070, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10071, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10071, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10072, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +3.263052560500645516e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10072, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10073, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.613109503223039587e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10073, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10074, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.845501307182417082e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10074, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10075, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551066815778008989e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10075, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10076, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775478152224085336e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10076, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10077, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +4.163376047013737723e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10077, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10078, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.387858851864740192e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10078, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10079, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -4.367513634279988004e-22, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10079, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10080, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +8.326756064494418166e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10080, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10081, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -5.551181959319276987e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10081, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10082, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10082, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10083, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +2.775718365473971660e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10083, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10084, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +5.550904026633458553e-17, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10084, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10085, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -1.804092695030076114e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10085, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10086, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.248937242883359027e-16, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10086, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10087, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -8.800900745050010965e-02, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10087, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10088, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991501295e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10088, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10089, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10089, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10090, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10090, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10091, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10091, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10092, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10092, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10093, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10093, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10094, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991494078e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10094, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10095, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991363627e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10095, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10096, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991504625e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10096, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10097, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991497964e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10097, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10098, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10098, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10099, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991498519e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10099, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10100, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { -2.617993877991500740e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10100, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10101, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10101, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10102, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.016438249416033862e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10102, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10103, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10103, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10104, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10104, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10105, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10105, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10106, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10106, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10107, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10107, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 1, false, 0, 0, "1", false, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 1, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 2, false, 0, 0, "1", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10263, 2, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10314, 0, false, 0, 2, "mm", false, false, +1.000000000000000000e+00,
      false, 1, { +4.000000000000000083e-03, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10314, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10379, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +1.570796326794895892e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10379, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10380, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 10380, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00,
      false, 1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } }
  };

  const size_t numTargets = 440;
  int_T status;
  size_t i;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 440, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 440, alloc);
  checkMemAllocStatus(status);
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 440;
  smData->mNumInputMotionPrimitives = 0;
  PM_ALLOCATE_ARRAY(smData->mTargets, CTarget, numTargets, alloc);
  for (i = 0; i < numTargets; ++i)
    sm_compiler_CTarget_copy(targets + i, smData->mTargets + i);
}

static void initAsserts(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mNumParamAsserts = 0;
  smData->mParamAssertObjects = NULL;
  smData->mParamAssertPaths = NULL;
  smData->mParamAssertDescriptors = NULL;
  smData->mParamAssertMessages = NULL;
  smData->mParamAssertMessageIds = NULL;
  status = pm_create_bool_vector_fields(
    &smData->mParamAssertIsWarnings, smData->mNumParamAsserts, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumParamAsserts > 0) {
    const NeAssertData *ad = ModeloFinal_1349f7f3_1_assertData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mParamAssertObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertDescriptors,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessages,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessageIds,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumParamAsserts; ++i, ++ad) {
      smData->mParamAssertObjects [i] = cStringToCharVector(ad->mObject );
      smData->mParamAssertPaths [i] = cStringToCharVector(ad->mPath );
      smData->mParamAssertDescriptors[i] = cStringToCharVector(ad->mDescriptor);
      smData->mParamAssertMessages [i] = cStringToCharVector(ad->mMessage );
      smData->mParamAssertMessageIds [i] = cStringToCharVector(ad->mMessageID );
      smData->mParamAssertIsWarnings.mX[i] = ad->mIsWarn;
    }
  }
}

static
  void initModeVector(NeDaePrivateData *smData)
{
  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mAssemblyModeVector, 0,
      pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mAssemblyModeVector.mN; ++i)
      smData->mAssemblyModeVector.mX[i] = 0;
  }

  {
    size_t i;
    const int_T status = pm_create_int_vector_fields(
      &smData->mCachedModeVector, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mModeVectorSize; ++i)
      smData->mCachedModeVector.mX[i] = 0;
  }
}

static void initZeroCrossings(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mZeroCrossingObjects = NULL;
  smData->mZeroCrossingPaths = NULL;
  smData->mZeroCrossingDescriptors = NULL;
  status = pm_create_int_vector_fields(
    &smData->mZeroCrossingTypes, 0, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumZeroCrossings > 0) {
    const NeZCData *zcd = ModeloFinal_1349f7f3_1_ZCData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mZeroCrossingDescriptors,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumZeroCrossings; ++i, ++zcd) {
      smData->mZeroCrossingObjects [i] = cStringToCharVector(zcd->mObject);
      smData->mZeroCrossingPaths [i] = cStringToCharVector(zcd->mPath );
      smData->mZeroCrossingDescriptors[i] = cStringToCharVector(zcd->mDescriptor);
      smData->mZeroCrossingTypes.mX[i] = zcd->mType;
    }
  }
}

static
  void initVariables(NeDaePrivateData *smData)
{
  const char *varFullPaths[440] = {
    "Subsystem1.Planar_Joint.Px.p",
    "Subsystem1.Planar_Joint.Py.p",
    "Subsystem1.Planar_Joint.Rz.q",
    "Subsystem1.Planar_Joint.Px.v",
    "Subsystem1.Planar_Joint.Py.v",
    "Subsystem1.Planar_Joint.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint46.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint46.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint45.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint45.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint44.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint44.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint43.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint43.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint42.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint42.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint41.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint41.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint40.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint40.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint39.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint39.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint38.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint38.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint37.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint37.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint36.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint36.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint35.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint35.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint34.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint34.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint33.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint33.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint32.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint32.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint31.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint31.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint30.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint30.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint29.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint29.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint28.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint28.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint27.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint27.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint26.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint26.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint25.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint25.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint24.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint24.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint23.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint23.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint1.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint1.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint2.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint2.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint3.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint3.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint4.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint4.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint5.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint5.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint6.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint6.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint7.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint7.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint8.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint8.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint9.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint9.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint10.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint10.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint11.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint11.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint12.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint12.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint13.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint13.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint48.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint48.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint15.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint15.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint16.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint16.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint17.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint17.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint18.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint18.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint19.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint19.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint20.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint20.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint21.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint21.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint14.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint14.Rz.w",
    "Subsystem1.Cadena.Revolute_Joint22.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint22.Rz.w",
    "Subsystem1.Revolute1.Rz.q",
    "Subsystem1.Revolute1.Rz.w",
    "Subsystem1.Revolute.Rz.q",
    "Subsystem1.Revolute.Rz.w",
    "Subsystem1.Polea_Pasiva.Tensor.Pz.p",
    "Subsystem1.Polea_Pasiva.Tensor.Pz.v",
    "Subsystem2.Planar_Joint.Px.p",
    "Subsystem2.Planar_Joint.Py.p",
    "Subsystem2.Planar_Joint.Rz.q",
    "Subsystem2.Planar_Joint.Px.v",
    "Subsystem2.Planar_Joint.Py.v",
    "Subsystem2.Planar_Joint.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint46.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint46.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint45.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint45.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint44.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint44.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint43.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint43.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint42.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint42.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint41.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint41.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint40.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint40.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint39.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint39.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint38.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint38.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint37.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint37.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint36.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint36.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint35.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint35.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint34.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint34.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint33.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint33.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint32.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint32.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint31.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint31.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint30.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint30.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint29.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint29.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint28.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint28.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint27.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint27.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint26.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint26.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint25.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint25.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint24.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint24.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint23.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint23.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint1.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint1.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint2.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint2.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint3.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint3.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint4.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint4.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint5.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint5.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint6.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint6.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint7.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint7.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint8.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint8.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint9.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint9.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint10.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint10.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint11.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint11.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint12.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint12.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint13.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint13.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint48.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint48.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint15.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint15.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint16.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint16.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint17.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint17.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint18.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint18.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint19.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint19.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint20.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint20.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint21.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint21.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint14.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint14.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint22.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint22.Rz.w",
    "Subsystem2.Revolute1.Rz.q",
    "Subsystem2.Revolute1.Rz.w",
    "Subsystem2.Revolute.Rz.q",
    "Subsystem2.Revolute.Rz.w",
    "Subsystem2.Polea_Pasiva.Tensor.Pz.p",
    "Subsystem2.Polea_Pasiva.Tensor.Pz.v",
    "Subsystem3.Planar_Joint.Px.p",
    "Subsystem3.Planar_Joint.Py.p",
    "Subsystem3.Planar_Joint.Rz.q",
    "Subsystem3.Planar_Joint.Px.v",
    "Subsystem3.Planar_Joint.Py.v",
    "Subsystem3.Planar_Joint.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint46.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint46.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint45.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint45.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint44.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint44.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint43.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint43.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint42.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint42.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint41.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint41.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint40.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint40.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint39.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint39.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint38.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint38.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint37.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint37.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint36.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint36.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint35.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint35.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint34.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint34.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint33.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint33.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint32.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint32.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint31.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint31.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint30.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint30.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint29.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint29.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint28.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint28.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint27.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint27.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint26.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint26.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint25.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint25.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint24.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint24.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint23.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint23.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint1.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint1.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint2.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint2.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint3.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint3.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint4.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint4.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint5.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint5.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint6.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint6.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint7.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint7.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint8.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint8.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint9.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint9.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint10.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint10.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint11.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint11.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint12.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint12.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint13.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint13.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint48.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint48.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint15.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint15.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint16.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint16.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint17.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint17.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint18.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint18.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint19.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint19.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint20.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint20.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint21.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint21.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint14.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint14.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint22.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint22.Rz.w",
    "Subsystem3.Revolute1.Rz.q",
    "Subsystem3.Revolute1.Rz.w",
    "Subsystem3.Revolute.Rz.q",
    "Subsystem3.Revolute.Rz.w",
    "Subsystem3.Polea_Pasiva.Tensor.Pz.p",
    "Subsystem3.Polea_Pasiva.Tensor.Pz.v",
    "Subsystem4.Planar_Joint.Px.p",
    "Subsystem4.Planar_Joint.Py.p",
    "Subsystem4.Planar_Joint.Rz.q",
    "Subsystem4.Planar_Joint.Px.v",
    "Subsystem4.Planar_Joint.Py.v",
    "Subsystem4.Planar_Joint.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint46.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint46.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint45.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint45.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint44.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint44.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint43.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint43.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint42.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint42.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint41.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint41.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint40.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint40.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint39.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint39.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint38.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint38.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint37.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint37.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint36.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint36.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint35.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint35.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint34.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint34.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint33.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint33.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint32.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint32.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint31.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint31.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint30.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint30.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint29.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint29.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint28.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint28.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint27.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint27.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint26.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint26.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint25.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint25.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint24.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint24.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint23.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint23.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint1.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint1.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint2.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint2.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint3.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint3.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint4.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint4.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint5.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint5.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint6.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint6.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint7.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint7.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint8.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint8.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint9.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint9.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint10.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint10.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint11.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint11.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint12.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint12.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint13.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint13.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint48.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint48.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint15.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint15.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint16.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint16.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint17.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint17.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint18.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint18.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint19.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint19.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint20.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint20.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint21.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint21.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint14.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint14.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint22.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint22.Rz.w",
    "Subsystem4.Revolute1.Rz.q",
    "Subsystem4.Revolute1.Rz.w",
    "Subsystem4.Revolute.Rz.q",
    "Subsystem4.Revolute.Rz.w",
    "Subsystem4.Polea_Pasiva.Tensor.Pz.p",
    "Subsystem4.Polea_Pasiva.Tensor.Pz.v",
    "Subsystem1.Cadena.Revolute_Joint47.Rz.q",
    "Subsystem1.Cadena.Revolute_Joint47.Rz.w",
    "Subsystem2.Cadena.Revolute_Joint47.Rz.q",
    "Subsystem2.Cadena.Revolute_Joint47.Rz.w",
    "Subsystem3.Cadena.Revolute_Joint47.Rz.q",
    "Subsystem3.Cadena.Revolute_Joint47.Rz.w",
    "Subsystem4.Cadena.Revolute_Joint47.Rz.q",
    "Subsystem4.Cadena.Revolute_Joint47.Rz.w"
  };

  const char *varObjects[440] = {
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Planar Joint",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem1/Revolute1",
    "ModeloFinal/Subsystem1/Revolute1",
    "ModeloFinal/Subsystem1/Revolute",
    "ModeloFinal/Subsystem1/Revolute",
    "ModeloFinal/Subsystem1/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem1/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Planar Joint",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem2/Revolute1",
    "ModeloFinal/Subsystem2/Revolute1",
    "ModeloFinal/Subsystem2/Revolute",
    "ModeloFinal/Subsystem2/Revolute",
    "ModeloFinal/Subsystem2/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem2/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Planar Joint",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem3/Revolute1",
    "ModeloFinal/Subsystem3/Revolute1",
    "ModeloFinal/Subsystem3/Revolute",
    "ModeloFinal/Subsystem3/Revolute",
    "ModeloFinal/Subsystem3/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem3/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Planar Joint",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint46",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint45",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint44",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint43",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint42",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint41",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint40",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint39",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint38",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint37",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint36",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint35",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint34",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint33",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint32",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint31",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint30",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint29",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint28",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint27",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint26",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint25",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint24",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint23",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint1",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint2",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint3",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint4",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint5",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint6",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint7",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint8",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint9",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint10",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint11",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint12",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint13",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint48",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint15",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint16",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint17",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint18",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint19",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint20",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint21",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint14",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint22",
    "ModeloFinal/Subsystem4/Revolute1",
    "ModeloFinal/Subsystem4/Revolute1",
    "ModeloFinal/Subsystem4/Revolute",
    "ModeloFinal/Subsystem4/Revolute",
    "ModeloFinal/Subsystem4/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem4/Polea Pasiva/Tensor",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem1/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem2/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem3/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint47",
    "ModeloFinal/Subsystem4/Cadena/Revolute Joint47"
  };

  smData->mNumVarScalars = 440;
  smData->mVarFullPaths = NULL;
  smData->mVarObjects = NULL;
  if (smData->mNumVarScalars > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(smData->mVarFullPaths, PmCharVector, 440, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarObjects, PmCharVector, 440, alloc);
    for (s = 0; s < smData->mNumVarScalars; ++s) {
      smData->mVarFullPaths[s] = cStringToCharVector(varFullPaths[s]);
      smData->mVarObjects[s] = cStringToCharVector(varObjects[s]);
    }
  }
}

static
  void initRuntimeParameters(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  size_t i = 0;
  const int32_T *rtpRootVarRows = NULL;
  const int32_T *rtpRootVarCols = NULL;
  const char **rtpFullPaths = NULL;
  smData->mNumRtpRootVars = 0;
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarRows, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarRows.mX, rtpRootVarRows,
         smData->mNumRtpRootVars * sizeof(int32_T));
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarCols, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarCols.mX, rtpRootVarCols,
         smData->mNumRtpRootVars * sizeof(int32_T));
  smData->mRtpFullPaths = NULL;
  if (smData->mNumRtpRootVars > 0) {
    size_t v;
    PM_ALLOCATE_ARRAY(smData->mRtpFullPaths, PmCharVector, 0, alloc);
    for (v = 0; v < smData->mNumRtpRootVars; ++v) {
      smData->mRtpFullPaths[v] = cStringToCharVector(rtpFullPaths[v]);
    }
  }

  smData->mNumRuntimeRootVarScalars = 0;
  status = pm_create_real_vector_fields(
    &smData->mRuntimeParameterScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mRuntimeParameterScalars.mN; ++i)
    smData->mRuntimeParameterScalars.mX[i] = 0.0;
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mAsmRuntimeDerivedValuesBundle,
    0,
    0);
  sm_core_RuntimeDerivedValuesBundle_create(
    &smData->mSimRuntimeDerivedValuesBundle,
    0,
    0);
}

static
  void initIoInfoHelper(
  size_t n,
  const char *portPathsSource[],
  const char *unitsSource[],
  const SizePair dimensions[],
  boolean_T doInputs,
  NeDaePrivateData *smData)
{
  PmCharVector *portPaths = NULL;
  PmCharVector *units = NULL;
  SscIoInfo *infos = NULL;
  if (n > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(portPaths, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(units, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(infos, SscIoInfo, n, alloc);
    for (s = 0; s < n; ++s) {
      portPaths[s] = cStringToCharVector(portPathsSource[s]);
      units[s] = cStringToCharVector(unitsSource[s]);

      {
        SscIoInfo *info = infos + s;
        info->mName = info->mIdentifier = portPaths[s].mX;
        ssc_array_size_set_scalar(&info->mSize);
        ssc_array_size_set_dim(&info->mSize, 0, dimensions[s].first);
        ssc_array_size_set_dim(&info->mSize, 1, dimensions[s].second);
        info->mUnit = units[s].mX;
      }
    }
  }

  if (doInputs) {
    smData->mNumInputs = n;
    smData->mInputPortPaths = portPaths;
    smData->mInputUnits = units;
    smData->mInputInfos = infos;
  } else {
    smData->mNumOutputs = n;
    smData->mOutputPortPaths = portPaths;
    smData->mOutputUnits = units;
    smData->mOutputInfos = infos;
  }
}

static
  void initIoInfo(NeDaePrivateData *smData)
{
  const char **inputPortPaths = NULL;
  const char **inputUnits = NULL;
  const SizePair *inputDimensions = NULL;
  const char **outputPortPaths = NULL;
  const char **outputUnits = NULL;
  const SizePair *outputDimensions = NULL;
  initIoInfoHelper(0, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(0, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  const int32_T *numInputDerivs = NULL;
  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         0 * sizeof(int32_T));
  smData->mInputOrder = 1;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  const boolean_T *directFeedthroughVector = NULL;
  const boolean_T *directFeedthroughMatrix = NULL;
  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 0, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           0 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 0, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           0 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T *outputFunctionMap = NULL;
  smData->mOutputFunctionMap = pm_create_int_vector(0, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         0 * sizeof(int32_T));
  smData->mNumOutputClasses = 0;
  smData->mHasKinematicOutputs = false;
  smData->mHasDynamicOutputs = false;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mCachedDerivatives.mN; ++i)
      smData->mCachedDerivatives.mX[i] = 0.0;
  }
}

#if 0

static void initializeSizePairVector(const SmSizePair *data,
  SmSizePairVector *vector)
{
  const size_t n = sm_core_SmSizePairVector_size(vector);
  size_t i;
  for (i = 0; i < n; ++i, ++data)
    sm_core_SmSizePairVector_setValue(vector, i, data++);
}

#endif

static
  void initAssemblyDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[208] = {
    { 2071, 25 }, { 2072, 26 }, { 2073, 35 }, { 2074, 36 }, { 2075, 37 }, { 2076,
      38 },

    { 2077, 47 }, { 2078, 40 }, { 2079, 41 }, { 2080, 42 }, { 2081, 43 }, { 2082,
      44 },

    { 2083, 27 }, { 2084, 45 }, { 2085, 46 }, { 2086, 48 }, { 2087, 24 }, { 2088,
      23 },

    { 2089, 22 }, { 2090, 21 }, { 2091, 20 }, { 2092, 19 }, { 2093, 18 }, { 2094,
      28 },

    { 2095, 17 }, { 2096, 16 }, { 2097, 15 }, { 2098, 14 }, { 2099, 13 }, { 2100,
      12 },

    { 2101, 11 }, { 2102, 10 }, { 2103, 9 }, { 2104, 8 }, { 2105, 29 }, { 2106,
      7 },

    { 2107, 6 }, { 2108, 5 }, { 2109, 4 }, { 2110, 3 }, { 2111, 2 }, { 2112, 1 },

    { 2114, 39 }, { 2115, 30 }, { 2116, 31 }, { 2117, 32 }, { 2118, 33 }, { 2119,
      34 },

    { 2275, 0 }, { 2326, 51 }, { 2391, 50 }, { 2392, 49 }, { 4732, 77 }, { 4733,
      78 },

    { 4734, 87 }, { 4735, 88 }, { 4736, 89 }, { 4737, 90 }, { 4738, 99 }, { 4739,
      92 },

    { 4740, 93 }, { 4741, 94 }, { 4742, 95 }, { 4743, 96 }, { 4744, 79 }, { 4745,
      97 },

    { 4746, 98 }, { 4747, 100 }, { 4748, 76 }, { 4749, 75 }, { 4750, 74 }, {
      4751, 73 },

    { 4752, 72 }, { 4753, 71 }, { 4754, 70 }, { 4755, 80 }, { 4756, 69 }, { 4757,
      68 },

    { 4758, 67 }, { 4759, 66 }, { 4760, 65 }, { 4761, 64 }, { 4762, 63 }, { 4763,
      62 },

    { 4764, 61 }, { 4765, 60 }, { 4766, 81 }, { 4767, 59 }, { 4768, 58 }, { 4769,
      57 },

    { 4770, 56 }, { 4771, 55 }, { 4772, 54 }, { 4773, 53 }, { 4775, 91 }, { 4776,
      82 },

    { 4777, 83 }, { 4778, 84 }, { 4779, 85 }, { 4780, 86 }, { 4936, 52 }, { 4987,
      103 },

    { 5054, 102 }, { 5055, 101 }, { 7396, 129 }, { 7397, 130 }, { 7398, 139 }, {
      7399, 140 },

    { 7400, 141 }, { 7401, 142 }, { 7402, 151 }, { 7403, 144 }, { 7404, 145 }, {
      7405, 146 },

    { 7406, 147 }, { 7407, 148 }, { 7408, 131 }, { 7409, 149 }, { 7410, 150 }, {
      7411, 152 },

    { 7412, 128 }, { 7413, 127 }, { 7414, 126 }, { 7415, 125 }, { 7416, 124 }, {
      7417, 123 },

    { 7418, 122 }, { 7419, 132 }, { 7420, 121 }, { 7421, 120 }, { 7422, 119 }, {
      7423, 118 },

    { 7424, 117 }, { 7425, 116 }, { 7426, 115 }, { 7427, 114 }, { 7428, 113 }, {
      7429, 112 },

    { 7430, 133 }, { 7431, 111 }, { 7432, 110 }, { 7433, 109 }, { 7434, 108 }, {
      7435, 107 },

    { 7436, 106 }, { 7437, 105 }, { 7439, 143 }, { 7440, 134 }, { 7441, 135 }, {
      7442, 136 },

    { 7443, 137 }, { 7444, 138 }, { 7600, 104 }, { 7651, 155 }, { 7718, 154 }, {
      7719, 153 },

    { 10059, 181 }, { 10060, 182 }, { 10061, 191 }, { 10062, 192 }, { 10063, 193
    }, { 10064, 194 },

    { 10065, 203 }, { 10066, 196 }, { 10067, 197 }, { 10068, 198 }, { 10069, 199
    }, { 10070, 200 },

    { 10071, 183 }, { 10072, 201 }, { 10073, 202 }, { 10074, 204 }, { 10075, 180
    }, { 10076, 179 },

    { 10077, 178 }, { 10078, 177 }, { 10079, 176 }, { 10080, 175 }, { 10081, 174
    }, { 10082, 184 },

    { 10083, 173 }, { 10084, 172 }, { 10085, 171 }, { 10086, 170 }, { 10087, 169
    }, { 10088, 168 },

    { 10089, 167 }, { 10090, 166 }, { 10091, 165 }, { 10092, 164 }, { 10093, 185
    }, { 10094, 163 },

    { 10095, 162 }, { 10096, 161 }, { 10097, 160 }, { 10098, 159 }, { 10099, 158
    }, { 10100, 157 },

    { 10102, 195 }, { 10103, 186 }, { 10104, 187 }, { 10105, 188 }, { 10106, 189
    }, { 10107, 190 },

    { 10263, 156 }, { 10314, 207 }, { 10379, 206 }, { 10380, 205 }
  };

  const size_t primitiveIndices[208 + 1] = {
    0, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
    42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
    74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 91, 92, 93,
    94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 111, 112, 113, 114, 115,
    116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
    126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
    146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
    156, 157, 158, 159, 160, 161, 162, 165, 166, 167,
    168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
    178, 179, 180, 181, 182, 183, 184, 185, 186, 187,
    188, 189, 190, 191, 192, 193, 194, 195, 196, 197,
    198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216
  };

  const SmSizePair stateOffsets[216] = {
    { 0, 3 }, { 1, 4 }, { 2, 5 }, { 6, 7 }, { 8, 9 }, { 10, 11 },

    { 12, 13 }, { 14, 15 }, { 16, 17 }, { 18, 19 }, { 20, 21 }, { 22, 23 },

    { 24, 25 }, { 26, 27 }, { 28, 29 }, { 30, 31 }, { 32, 33 }, { 34, 35 },

    { 36, 37 }, { 38, 39 }, { 40, 41 }, { 42, 43 }, { 44, 45 }, { 46, 47 },

    { 48, 49 }, { 50, 51 }, { 52, 53 }, { 54, 55 }, { 56, 57 }, { 58, 59 },

    { 60, 61 }, { 62, 63 }, { 64, 65 }, { 66, 67 }, { 68, 69 }, { 70, 71 },

    { 72, 73 }, { 74, 75 }, { 76, 77 }, { 78, 79 }, { 80, 81 }, { 82, 83 },

    { 84, 85 }, { 86, 87 }, { 88, 89 }, { 90, 91 }, { 92, 93 }, { 94, 95 },

    { 96, 97 }, { 98, 99 }, { 100, 101 }, { 102, 103 }, { 104, 105 }, { 106, 107
    },

    { 108, 111 }, { 109, 112 }, { 110, 113 }, { 114, 115 }, { 116, 117 }, { 118,
      119 },

    { 120, 121 }, { 122, 123 }, { 124, 125 }, { 126, 127 }, { 128, 129 }, { 130,
      131 },

    { 132, 133 }, { 134, 135 }, { 136, 137 }, { 138, 139 }, { 140, 141 }, { 142,
      143 },

    { 144, 145 }, { 146, 147 }, { 148, 149 }, { 150, 151 }, { 152, 153 }, { 154,
      155 },

    { 156, 157 }, { 158, 159 }, { 160, 161 }, { 162, 163 }, { 164, 165 }, { 166,
      167 },

    { 168, 169 }, { 170, 171 }, { 172, 173 }, { 174, 175 }, { 176, 177 }, { 178,
      179 },

    { 180, 181 }, { 182, 183 }, { 184, 185 }, { 186, 187 }, { 188, 189 }, { 190,
      191 },

    { 192, 193 }, { 194, 195 }, { 196, 197 }, { 198, 199 }, { 200, 201 }, { 202,
      203 },

    { 204, 205 }, { 206, 207 }, { 208, 209 }, { 210, 211 }, { 212, 213 }, { 214,
      215 },

    { 216, 219 }, { 217, 220 }, { 218, 221 }, { 222, 223 }, { 224, 225 }, { 226,
      227 },

    { 228, 229 }, { 230, 231 }, { 232, 233 }, { 234, 235 }, { 236, 237 }, { 238,
      239 },

    { 240, 241 }, { 242, 243 }, { 244, 245 }, { 246, 247 }, { 248, 249 }, { 250,
      251 },

    { 252, 253 }, { 254, 255 }, { 256, 257 }, { 258, 259 }, { 260, 261 }, { 262,
      263 },

    { 264, 265 }, { 266, 267 }, { 268, 269 }, { 270, 271 }, { 272, 273 }, { 274,
      275 },

    { 276, 277 }, { 278, 279 }, { 280, 281 }, { 282, 283 }, { 284, 285 }, { 286,
      287 },

    { 288, 289 }, { 290, 291 }, { 292, 293 }, { 294, 295 }, { 296, 297 }, { 298,
      299 },

    { 300, 301 }, { 302, 303 }, { 304, 305 }, { 306, 307 }, { 308, 309 }, { 310,
      311 },

    { 312, 313 }, { 314, 315 }, { 316, 317 }, { 318, 319 }, { 320, 321 }, { 322,
      323 },

    { 324, 327 }, { 325, 328 }, { 326, 329 }, { 330, 331 }, { 332, 333 }, { 334,
      335 },

    { 336, 337 }, { 338, 339 }, { 340, 341 }, { 342, 343 }, { 344, 345 }, { 346,
      347 },

    { 348, 349 }, { 350, 351 }, { 352, 353 }, { 354, 355 }, { 356, 357 }, { 358,
      359 },

    { 360, 361 }, { 362, 363 }, { 364, 365 }, { 366, 367 }, { 368, 369 }, { 370,
      371 },

    { 372, 373 }, { 374, 375 }, { 376, 377 }, { 378, 379 }, { 380, 381 }, { 382,
      383 },

    { 384, 385 }, { 386, 387 }, { 388, 389 }, { 390, 391 }, { 392, 393 }, { 394,
      395 },

    { 396, 397 }, { 398, 399 }, { 400, 401 }, { 402, 403 }, { 404, 405 }, { 406,
      407 },

    { 408, 409 }, { 410, 411 }, { 412, 413 }, { 414, 415 }, { 416, 417 }, { 418,
      419 },

    { 420, 421 }, { 422, 423 }, { 424, 425 }, { 426, 427 }, { 428, 429 }, { 430,
      431 }
  };

  const SmSizePair dofOffsets[216] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 },

    { 12, 13 }, { 13, 14 }, { 14, 15 }, { 15, 16 }, { 16, 17 }, { 17, 18 },

    { 18, 19 }, { 19, 20 }, { 20, 21 }, { 21, 22 }, { 22, 23 }, { 23, 24 },

    { 24, 25 }, { 25, 26 }, { 26, 27 }, { 27, 28 }, { 28, 29 }, { 29, 30 },

    { 30, 31 }, { 31, 32 }, { 32, 33 }, { 33, 34 }, { 34, 35 }, { 35, 36 },

    { 36, 37 }, { 37, 38 }, { 38, 39 }, { 39, 40 }, { 40, 41 }, { 41, 42 },

    { 42, 43 }, { 43, 44 }, { 44, 45 }, { 45, 46 }, { 46, 47 }, { 47, 48 },

    { 48, 49 }, { 49, 50 }, { 50, 51 }, { 51, 52 }, { 52, 53 }, { 53, 54 },

    { 54, 55 }, { 55, 56 }, { 56, 57 }, { 57, 58 }, { 58, 59 }, { 59, 60 },

    { 60, 61 }, { 61, 62 }, { 62, 63 }, { 63, 64 }, { 64, 65 }, { 65, 66 },

    { 66, 67 }, { 67, 68 }, { 68, 69 }, { 69, 70 }, { 70, 71 }, { 71, 72 },

    { 72, 73 }, { 73, 74 }, { 74, 75 }, { 75, 76 }, { 76, 77 }, { 77, 78 },

    { 78, 79 }, { 79, 80 }, { 80, 81 }, { 81, 82 }, { 82, 83 }, { 83, 84 },

    { 84, 85 }, { 85, 86 }, { 86, 87 }, { 87, 88 }, { 88, 89 }, { 89, 90 },

    { 90, 91 }, { 91, 92 }, { 92, 93 }, { 93, 94 }, { 94, 95 }, { 95, 96 },

    { 96, 97 }, { 97, 98 }, { 98, 99 }, { 99, 100 }, { 100, 101 }, { 101, 102 },

    { 102, 103 }, { 103, 104 }, { 104, 105 }, { 105, 106 }, { 106, 107 }, { 107,
      108 },

    { 108, 109 }, { 109, 110 }, { 110, 111 }, { 111, 112 }, { 112, 113 }, { 113,
      114 },

    { 114, 115 }, { 115, 116 }, { 116, 117 }, { 117, 118 }, { 118, 119 }, { 119,
      120 },

    { 120, 121 }, { 121, 122 }, { 122, 123 }, { 123, 124 }, { 124, 125 }, { 125,
      126 },

    { 126, 127 }, { 127, 128 }, { 128, 129 }, { 129, 130 }, { 130, 131 }, { 131,
      132 },

    { 132, 133 }, { 133, 134 }, { 134, 135 }, { 135, 136 }, { 136, 137 }, { 137,
      138 },

    { 138, 139 }, { 139, 140 }, { 140, 141 }, { 141, 142 }, { 142, 143 }, { 143,
      144 },

    { 144, 145 }, { 145, 146 }, { 146, 147 }, { 147, 148 }, { 148, 149 }, { 149,
      150 },

    { 150, 151 }, { 151, 152 }, { 152, 153 }, { 153, 154 }, { 154, 155 }, { 155,
      156 },

    { 156, 157 }, { 157, 158 }, { 158, 159 }, { 159, 160 }, { 160, 161 }, { 161,
      162 },

    { 162, 163 }, { 163, 164 }, { 164, 165 }, { 165, 166 }, { 166, 167 }, { 167,
      168 },

    { 168, 169 }, { 169, 170 }, { 170, 171 }, { 171, 172 }, { 172, 173 }, { 173,
      174 },

    { 174, 175 }, { 175, 176 }, { 176, 177 }, { 177, 178 }, { 178, 179 }, { 179,
      180 },

    { 180, 181 }, { 181, 182 }, { 182, 183 }, { 183, 184 }, { 184, 185 }, { 185,
      186 },

    { 186, 187 }, { 187, 188 }, { 188, 189 }, { 189, 190 }, { 190, 191 }, { 191,
      192 },

    { 192, 193 }, { 193, 194 }, { 194, 195 }, { 195, 196 }, { 196, 197 }, { 197,
      198 },

    { 198, 199 }, { 199, 200 }, { 200, 201 }, { 201, 202 }, { 202, 203 }, { 203,
      204 },

    { 204, 205 }, { 205, 206 }, { 206, 207 }, { 207, 208 }, { 208, 209 }, { 209,
      210 },

    { 210, 211 }, { 211, 212 }, { 212, 213 }, { 213, 214 }, { 214, 215 }, { 215,
      216 }
  };

  const size_t *flexibleStages = NULL;
  const size_t remodIndices[204] = {
    2, 6, 8, 10, 12, 14, 16, 18, 20, 22,
    24, 26, 28, 30, 32, 34, 36, 38, 40, 42,
    44, 46, 48, 50, 52, 54, 56, 58, 60, 62,
    64, 66, 68, 70, 72, 74, 76, 78, 80, 82,
    84, 86, 88, 90, 92, 94, 96, 98, 100, 102,
    104, 110, 114, 116, 118, 120, 122, 124, 126, 128,
    130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
    150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
    170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
    190, 192, 194, 196, 198, 200, 202, 204, 206, 208,
    210, 212, 218, 222, 224, 226, 228, 230, 232, 234,
    236, 238, 240, 242, 244, 246, 248, 250, 252, 254,
    256, 258, 260, 262, 264, 266, 268, 270, 272, 274,
    276, 278, 280, 282, 284, 286, 288, 290, 292, 294,
    296, 298, 300, 302, 304, 306, 308, 310, 312, 314,
    316, 318, 320, 326, 330, 332, 334, 336, 338, 340,
    342, 344, 346, 348, 350, 352, 354, 356, 358, 360,
    362, 364, 366, 368, 370, 372, 374, 376, 378, 380,
    382, 384, 386, 388, 390, 392, 394, 396, 398, 400,
    402, 404, 406, 408, 410, 412, 414, 416, 418, 420,
    422, 424, 426, 428
  };

  const size_t equationsPerConstraint[4] = {
    5, 5, 5, 5
  };

  const int32_T hasAllVelocityDisabledEquations[4] = {
    0, 0, 0, 0
  };

  const int32_T runtimeEnabledEquations[20] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  };

  const size_t dofToVelSlot[216] = {
    3, 4, 5, 7, 9, 11, 13, 15, 17, 19,
    21, 23, 25, 27, 29, 31, 33, 35, 37, 39,
    41, 43, 45, 47, 49, 51, 53, 55, 57, 59,
    61, 63, 65, 67, 69, 71, 73, 75, 77, 79,
    81, 83, 85, 87, 89, 91, 93, 95, 97, 99,
    101, 103, 105, 107, 111, 112, 113, 115, 117, 119,
    121, 123, 125, 127, 129, 131, 133, 135, 137, 139,
    141, 143, 145, 147, 149, 151, 153, 155, 157, 159,
    161, 163, 165, 167, 169, 171, 173, 175, 177, 179,
    181, 183, 185, 187, 189, 191, 193, 195, 197, 199,
    201, 203, 205, 207, 209, 211, 213, 215, 219, 220,
    221, 223, 225, 227, 229, 231, 233, 235, 237, 239,
    241, 243, 245, 247, 249, 251, 253, 255, 257, 259,
    261, 263, 265, 267, 269, 271, 273, 275, 277, 279,
    281, 283, 285, 287, 289, 291, 293, 295, 297, 299,
    301, 303, 305, 307, 309, 311, 313, 315, 317, 319,
    321, 323, 327, 328, 329, 331, 333, 335, 337, 339,
    341, 343, 345, 347, 349, 351, 353, 355, 357, 359,
    361, 363, 365, 367, 369, 371, 373, 375, 377, 379,
    381, 383, 385, 387, 389, 391, 393, 395, 397, 399,
    401, 403, 405, 407, 409, 411, 413, 415, 417, 419,
    421, 423, 425, 427, 429, 431
  };

  const size_t constraintDofs[192] = {
    27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
    47, 48, 49, 50, 3, 4, 5, 6, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 81, 82,
    83, 84, 85, 86, 87, 88, 89, 90, 91, 92,
    93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
    103, 104, 57, 58, 59, 60, 61, 62, 63, 64,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
    75, 76, 77, 78, 79, 80, 135, 136, 137, 138,
    139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130,
    131, 132, 133, 134, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204,
    205, 206, 207, 208, 209, 210, 211, 212, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 176,
    177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
    187, 188
  };

  const size_t constraintDofOffsets[4 + 1] = {
    0, 48, 96, 144, 192
  };

  const size_t Jm = 20;
  const size_t Jn = 216;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 216;
  delegate->mDof = 216;
  delegate->mStateSize = 440;
  delegate->mContinuousStateSize = 440;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 208;
  delegate->mNumConstraints = 4;
  delegate->mNumAllConstraintEquations = 20;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 208, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 208 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 216, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 216 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 216, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 216 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 204, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 204 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mHasAllVelocityDisabledEquations, delegate->mNumConstraints, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues
         (&delegate->mHasAllVelocityDisabledEquations),
         hasAllVelocityDisabledEquations, delegate->mNumConstraints * sizeof
         (int32_T));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues(&delegate->mRunTimeEnabledEquations),
         runtimeEnabledEquations, delegate->mNumAllConstraintEquations *
         sizeof(int32_T));
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 192, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 192 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 4);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    4, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 216, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 216, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 216, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 216, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmSizePairVector_create(&scratchpad->mCvQuaternionVelOffsets,
    0,
    &zeroSizePair);
  sm_core_SmRealVector_create(&scratchpad->mCvQuaternionAzimuthValues,
    0, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 440, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 56209, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 216, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 216, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 6624, 0.0);
  delegate->mSetTargets = ModeloFinal_1349f7f3_1_setTargets;
  delegate->mResetStateVector = ModeloFinal_1349f7f3_1_resetAsmStateVector;
  delegate->mInitializeTrackedAngleState =
    ModeloFinal_1349f7f3_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState = ModeloFinal_1349f7f3_1_computeDiscreteState;
  delegate->mAdjustPosition = ModeloFinal_1349f7f3_1_adjustPosition;
  delegate->mPerturbJointPrimitiveState =
    ModeloFinal_1349f7f3_1_perturbAsmJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState = NULL;
  delegate->mComputePosDofBlendMatrix =
    ModeloFinal_1349f7f3_1_computePosDofBlendMatrix;
  delegate->mComputeVelDofBlendMatrix =
    ModeloFinal_1349f7f3_1_computeVelDofBlendMatrix;
  delegate->mProjectPartiallyTargetedPos =
    ModeloFinal_1349f7f3_1_projectPartiallyTargetedPos;
  delegate->mPropagateMotion = ModeloFinal_1349f7f3_1_propagateMotion;
  delegate->mComputeAssemblyError = ModeloFinal_1349f7f3_1_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    ModeloFinal_1349f7f3_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    ModeloFinal_1349f7f3_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    ModeloFinal_1349f7f3_1_isInKinematicSingularity;
  delegate->mConvertStateVector = ModeloFinal_1349f7f3_1_convertStateVector;
  delegate->mConstructStateVector = NULL;
  delegate->mExtractSolverStateVector = NULL;
  delegate->mIsPositionViolation = NULL;
  delegate->mIsVelocityViolation = NULL;
  delegate->mProjectStateSim = NULL;
  delegate->mComputeConstraintError = NULL;
  delegate->mResetModeVector = NULL;
  delegate->mHasJointDisToNormModeChange = NULL;
  delegate->mPerformJointDisToNormModeChange = NULL;
  delegate->mOnModeChangedCutJoints = NULL;
  delegate->mMech = NULL;
}

static
  void initSimulationDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[208] = {
    { 2071, 25 }, { 2072, 26 }, { 2073, 35 }, { 2074, 36 }, { 2075, 37 }, { 2076,
      38 },

    { 2077, 47 }, { 2078, 40 }, { 2079, 41 }, { 2080, 42 }, { 2081, 43 }, { 2082,
      44 },

    { 2083, 27 }, { 2084, 45 }, { 2085, 46 }, { 2086, 48 }, { 2087, 24 }, { 2088,
      23 },

    { 2089, 22 }, { 2090, 21 }, { 2091, 20 }, { 2092, 19 }, { 2093, 18 }, { 2094,
      28 },

    { 2095, 17 }, { 2096, 16 }, { 2097, 15 }, { 2098, 14 }, { 2099, 13 }, { 2100,
      12 },

    { 2101, 11 }, { 2102, 10 }, { 2103, 9 }, { 2104, 8 }, { 2105, 29 }, { 2106,
      7 },

    { 2107, 6 }, { 2108, 5 }, { 2109, 4 }, { 2110, 3 }, { 2111, 2 }, { 2112, 1 },

    { 2114, 39 }, { 2115, 30 }, { 2116, 31 }, { 2117, 32 }, { 2118, 33 }, { 2119,
      34 },

    { 2275, 0 }, { 2326, 51 }, { 2391, 50 }, { 2392, 49 }, { 4732, 77 }, { 4733,
      78 },

    { 4734, 87 }, { 4735, 88 }, { 4736, 89 }, { 4737, 90 }, { 4738, 99 }, { 4739,
      92 },

    { 4740, 93 }, { 4741, 94 }, { 4742, 95 }, { 4743, 96 }, { 4744, 79 }, { 4745,
      97 },

    { 4746, 98 }, { 4747, 100 }, { 4748, 76 }, { 4749, 75 }, { 4750, 74 }, {
      4751, 73 },

    { 4752, 72 }, { 4753, 71 }, { 4754, 70 }, { 4755, 80 }, { 4756, 69 }, { 4757,
      68 },

    { 4758, 67 }, { 4759, 66 }, { 4760, 65 }, { 4761, 64 }, { 4762, 63 }, { 4763,
      62 },

    { 4764, 61 }, { 4765, 60 }, { 4766, 81 }, { 4767, 59 }, { 4768, 58 }, { 4769,
      57 },

    { 4770, 56 }, { 4771, 55 }, { 4772, 54 }, { 4773, 53 }, { 4775, 91 }, { 4776,
      82 },

    { 4777, 83 }, { 4778, 84 }, { 4779, 85 }, { 4780, 86 }, { 4936, 52 }, { 4987,
      103 },

    { 5054, 102 }, { 5055, 101 }, { 7396, 129 }, { 7397, 130 }, { 7398, 139 }, {
      7399, 140 },

    { 7400, 141 }, { 7401, 142 }, { 7402, 151 }, { 7403, 144 }, { 7404, 145 }, {
      7405, 146 },

    { 7406, 147 }, { 7407, 148 }, { 7408, 131 }, { 7409, 149 }, { 7410, 150 }, {
      7411, 152 },

    { 7412, 128 }, { 7413, 127 }, { 7414, 126 }, { 7415, 125 }, { 7416, 124 }, {
      7417, 123 },

    { 7418, 122 }, { 7419, 132 }, { 7420, 121 }, { 7421, 120 }, { 7422, 119 }, {
      7423, 118 },

    { 7424, 117 }, { 7425, 116 }, { 7426, 115 }, { 7427, 114 }, { 7428, 113 }, {
      7429, 112 },

    { 7430, 133 }, { 7431, 111 }, { 7432, 110 }, { 7433, 109 }, { 7434, 108 }, {
      7435, 107 },

    { 7436, 106 }, { 7437, 105 }, { 7439, 143 }, { 7440, 134 }, { 7441, 135 }, {
      7442, 136 },

    { 7443, 137 }, { 7444, 138 }, { 7600, 104 }, { 7651, 155 }, { 7718, 154 }, {
      7719, 153 },

    { 10059, 181 }, { 10060, 182 }, { 10061, 191 }, { 10062, 192 }, { 10063, 193
    }, { 10064, 194 },

    { 10065, 203 }, { 10066, 196 }, { 10067, 197 }, { 10068, 198 }, { 10069, 199
    }, { 10070, 200 },

    { 10071, 183 }, { 10072, 201 }, { 10073, 202 }, { 10074, 204 }, { 10075, 180
    }, { 10076, 179 },

    { 10077, 178 }, { 10078, 177 }, { 10079, 176 }, { 10080, 175 }, { 10081, 174
    }, { 10082, 184 },

    { 10083, 173 }, { 10084, 172 }, { 10085, 171 }, { 10086, 170 }, { 10087, 169
    }, { 10088, 168 },

    { 10089, 167 }, { 10090, 166 }, { 10091, 165 }, { 10092, 164 }, { 10093, 185
    }, { 10094, 163 },

    { 10095, 162 }, { 10096, 161 }, { 10097, 160 }, { 10098, 159 }, { 10099, 158
    }, { 10100, 157 },

    { 10102, 195 }, { 10103, 186 }, { 10104, 187 }, { 10105, 188 }, { 10106, 189
    }, { 10107, 190 },

    { 10263, 156 }, { 10314, 207 }, { 10379, 206 }, { 10380, 205 }
  };

  const size_t primitiveIndices[208 + 1] = {
    0, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
    42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
    74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 91, 92, 93,
    94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 111, 112, 113, 114, 115,
    116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
    126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145,
    146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
    156, 157, 158, 159, 160, 161, 162, 165, 166, 167,
    168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
    178, 179, 180, 181, 182, 183, 184, 185, 186, 187,
    188, 189, 190, 191, 192, 193, 194, 195, 196, 197,
    198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216
  };

  const SmSizePair stateOffsets[216] = {
    { 0, 3 }, { 1, 4 }, { 2, 5 }, { 6, 7 }, { 8, 9 }, { 10, 11 },

    { 12, 13 }, { 14, 15 }, { 16, 17 }, { 18, 19 }, { 20, 21 }, { 22, 23 },

    { 24, 25 }, { 26, 27 }, { 28, 29 }, { 30, 31 }, { 32, 33 }, { 34, 35 },

    { 36, 37 }, { 38, 39 }, { 40, 41 }, { 42, 43 }, { 44, 45 }, { 46, 47 },

    { 48, 49 }, { 50, 51 }, { 52, 53 }, { 54, 55 }, { 56, 57 }, { 58, 59 },

    { 60, 61 }, { 62, 63 }, { 64, 65 }, { 66, 67 }, { 68, 69 }, { 70, 71 },

    { 72, 73 }, { 74, 75 }, { 76, 77 }, { 78, 79 }, { 80, 81 }, { 82, 83 },

    { 84, 85 }, { 86, 87 }, { 88, 89 }, { 90, 91 }, { 92, 93 }, { 94, 95 },

    { 96, 97 }, { 98, 99 }, { 100, 101 }, { 102, 103 }, { 104, 105 }, { 106, 107
    },

    { 108, 111 }, { 109, 112 }, { 110, 113 }, { 114, 115 }, { 116, 117 }, { 118,
      119 },

    { 120, 121 }, { 122, 123 }, { 124, 125 }, { 126, 127 }, { 128, 129 }, { 130,
      131 },

    { 132, 133 }, { 134, 135 }, { 136, 137 }, { 138, 139 }, { 140, 141 }, { 142,
      143 },

    { 144, 145 }, { 146, 147 }, { 148, 149 }, { 150, 151 }, { 152, 153 }, { 154,
      155 },

    { 156, 157 }, { 158, 159 }, { 160, 161 }, { 162, 163 }, { 164, 165 }, { 166,
      167 },

    { 168, 169 }, { 170, 171 }, { 172, 173 }, { 174, 175 }, { 176, 177 }, { 178,
      179 },

    { 180, 181 }, { 182, 183 }, { 184, 185 }, { 186, 187 }, { 188, 189 }, { 190,
      191 },

    { 192, 193 }, { 194, 195 }, { 196, 197 }, { 198, 199 }, { 200, 201 }, { 202,
      203 },

    { 204, 205 }, { 206, 207 }, { 208, 209 }, { 210, 211 }, { 212, 213 }, { 214,
      215 },

    { 216, 219 }, { 217, 220 }, { 218, 221 }, { 222, 223 }, { 224, 225 }, { 226,
      227 },

    { 228, 229 }, { 230, 231 }, { 232, 233 }, { 234, 235 }, { 236, 237 }, { 238,
      239 },

    { 240, 241 }, { 242, 243 }, { 244, 245 }, { 246, 247 }, { 248, 249 }, { 250,
      251 },

    { 252, 253 }, { 254, 255 }, { 256, 257 }, { 258, 259 }, { 260, 261 }, { 262,
      263 },

    { 264, 265 }, { 266, 267 }, { 268, 269 }, { 270, 271 }, { 272, 273 }, { 274,
      275 },

    { 276, 277 }, { 278, 279 }, { 280, 281 }, { 282, 283 }, { 284, 285 }, { 286,
      287 },

    { 288, 289 }, { 290, 291 }, { 292, 293 }, { 294, 295 }, { 296, 297 }, { 298,
      299 },

    { 300, 301 }, { 302, 303 }, { 304, 305 }, { 306, 307 }, { 308, 309 }, { 310,
      311 },

    { 312, 313 }, { 314, 315 }, { 316, 317 }, { 318, 319 }, { 320, 321 }, { 322,
      323 },

    { 324, 327 }, { 325, 328 }, { 326, 329 }, { 330, 331 }, { 332, 333 }, { 334,
      335 },

    { 336, 337 }, { 338, 339 }, { 340, 341 }, { 342, 343 }, { 344, 345 }, { 346,
      347 },

    { 348, 349 }, { 350, 351 }, { 352, 353 }, { 354, 355 }, { 356, 357 }, { 358,
      359 },

    { 360, 361 }, { 362, 363 }, { 364, 365 }, { 366, 367 }, { 368, 369 }, { 370,
      371 },

    { 372, 373 }, { 374, 375 }, { 376, 377 }, { 378, 379 }, { 380, 381 }, { 382,
      383 },

    { 384, 385 }, { 386, 387 }, { 388, 389 }, { 390, 391 }, { 392, 393 }, { 394,
      395 },

    { 396, 397 }, { 398, 399 }, { 400, 401 }, { 402, 403 }, { 404, 405 }, { 406,
      407 },

    { 408, 409 }, { 410, 411 }, { 412, 413 }, { 414, 415 }, { 416, 417 }, { 418,
      419 },

    { 420, 421 }, { 422, 423 }, { 424, 425 }, { 426, 427 }, { 428, 429 }, { 430,
      431 }
  };

  const SmSizePair dofOffsets[216] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 9 }, { 9, 10 }, { 10, 11 }, { 11, 12 },

    { 12, 13 }, { 13, 14 }, { 14, 15 }, { 15, 16 }, { 16, 17 }, { 17, 18 },

    { 18, 19 }, { 19, 20 }, { 20, 21 }, { 21, 22 }, { 22, 23 }, { 23, 24 },

    { 24, 25 }, { 25, 26 }, { 26, 27 }, { 27, 28 }, { 28, 29 }, { 29, 30 },

    { 30, 31 }, { 31, 32 }, { 32, 33 }, { 33, 34 }, { 34, 35 }, { 35, 36 },

    { 36, 37 }, { 37, 38 }, { 38, 39 }, { 39, 40 }, { 40, 41 }, { 41, 42 },

    { 42, 43 }, { 43, 44 }, { 44, 45 }, { 45, 46 }, { 46, 47 }, { 47, 48 },

    { 48, 49 }, { 49, 50 }, { 50, 51 }, { 51, 52 }, { 52, 53 }, { 53, 54 },

    { 54, 55 }, { 55, 56 }, { 56, 57 }, { 57, 58 }, { 58, 59 }, { 59, 60 },

    { 60, 61 }, { 61, 62 }, { 62, 63 }, { 63, 64 }, { 64, 65 }, { 65, 66 },

    { 66, 67 }, { 67, 68 }, { 68, 69 }, { 69, 70 }, { 70, 71 }, { 71, 72 },

    { 72, 73 }, { 73, 74 }, { 74, 75 }, { 75, 76 }, { 76, 77 }, { 77, 78 },

    { 78, 79 }, { 79, 80 }, { 80, 81 }, { 81, 82 }, { 82, 83 }, { 83, 84 },

    { 84, 85 }, { 85, 86 }, { 86, 87 }, { 87, 88 }, { 88, 89 }, { 89, 90 },

    { 90, 91 }, { 91, 92 }, { 92, 93 }, { 93, 94 }, { 94, 95 }, { 95, 96 },

    { 96, 97 }, { 97, 98 }, { 98, 99 }, { 99, 100 }, { 100, 101 }, { 101, 102 },

    { 102, 103 }, { 103, 104 }, { 104, 105 }, { 105, 106 }, { 106, 107 }, { 107,
      108 },

    { 108, 109 }, { 109, 110 }, { 110, 111 }, { 111, 112 }, { 112, 113 }, { 113,
      114 },

    { 114, 115 }, { 115, 116 }, { 116, 117 }, { 117, 118 }, { 118, 119 }, { 119,
      120 },

    { 120, 121 }, { 121, 122 }, { 122, 123 }, { 123, 124 }, { 124, 125 }, { 125,
      126 },

    { 126, 127 }, { 127, 128 }, { 128, 129 }, { 129, 130 }, { 130, 131 }, { 131,
      132 },

    { 132, 133 }, { 133, 134 }, { 134, 135 }, { 135, 136 }, { 136, 137 }, { 137,
      138 },

    { 138, 139 }, { 139, 140 }, { 140, 141 }, { 141, 142 }, { 142, 143 }, { 143,
      144 },

    { 144, 145 }, { 145, 146 }, { 146, 147 }, { 147, 148 }, { 148, 149 }, { 149,
      150 },

    { 150, 151 }, { 151, 152 }, { 152, 153 }, { 153, 154 }, { 154, 155 }, { 155,
      156 },

    { 156, 157 }, { 157, 158 }, { 158, 159 }, { 159, 160 }, { 160, 161 }, { 161,
      162 },

    { 162, 163 }, { 163, 164 }, { 164, 165 }, { 165, 166 }, { 166, 167 }, { 167,
      168 },

    { 168, 169 }, { 169, 170 }, { 170, 171 }, { 171, 172 }, { 172, 173 }, { 173,
      174 },

    { 174, 175 }, { 175, 176 }, { 176, 177 }, { 177, 178 }, { 178, 179 }, { 179,
      180 },

    { 180, 181 }, { 181, 182 }, { 182, 183 }, { 183, 184 }, { 184, 185 }, { 185,
      186 },

    { 186, 187 }, { 187, 188 }, { 188, 189 }, { 189, 190 }, { 190, 191 }, { 191,
      192 },

    { 192, 193 }, { 193, 194 }, { 194, 195 }, { 195, 196 }, { 196, 197 }, { 197,
      198 },

    { 198, 199 }, { 199, 200 }, { 200, 201 }, { 201, 202 }, { 202, 203 }, { 203,
      204 },

    { 204, 205 }, { 205, 206 }, { 206, 207 }, { 207, 208 }, { 208, 209 }, { 209,
      210 },

    { 210, 211 }, { 211, 212 }, { 212, 213 }, { 213, 214 }, { 214, 215 }, { 215,
      216 }
  };

  const size_t *flexibleStages = NULL;
  const size_t remodIndices[204] = {
    2, 6, 8, 10, 12, 14, 16, 18, 20, 22,
    24, 26, 28, 30, 32, 34, 36, 38, 40, 42,
    44, 46, 48, 50, 52, 54, 56, 58, 60, 62,
    64, 66, 68, 70, 72, 74, 76, 78, 80, 82,
    84, 86, 88, 90, 92, 94, 96, 98, 100, 102,
    104, 110, 114, 116, 118, 120, 122, 124, 126, 128,
    130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
    150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
    170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
    190, 192, 194, 196, 198, 200, 202, 204, 206, 208,
    210, 212, 218, 222, 224, 226, 228, 230, 232, 234,
    236, 238, 240, 242, 244, 246, 248, 250, 252, 254,
    256, 258, 260, 262, 264, 266, 268, 270, 272, 274,
    276, 278, 280, 282, 284, 286, 288, 290, 292, 294,
    296, 298, 300, 302, 304, 306, 308, 310, 312, 314,
    316, 318, 320, 326, 330, 332, 334, 336, 338, 340,
    342, 344, 346, 348, 350, 352, 354, 356, 358, 360,
    362, 364, 366, 368, 370, 372, 374, 376, 378, 380,
    382, 384, 386, 388, 390, 392, 394, 396, 398, 400,
    402, 404, 406, 408, 410, 412, 414, 416, 418, 420,
    422, 424, 426, 428
  };

  const size_t equationsPerConstraint[4] = {
    3, 3, 3, 3
  };

  const int32_T hasAllVelocityDisabledEquations[4] = {
    0, 0, 0, 0
  };

  const int32_T runtimeEnabledEquations[12] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1
  };

  const size_t dofToVelSlot[216] = {
    3, 4, 5, 7, 9, 11, 13, 15, 17, 19,
    21, 23, 25, 27, 29, 31, 33, 35, 37, 39,
    41, 43, 45, 47, 49, 51, 53, 55, 57, 59,
    61, 63, 65, 67, 69, 71, 73, 75, 77, 79,
    81, 83, 85, 87, 89, 91, 93, 95, 97, 99,
    101, 103, 105, 107, 111, 112, 113, 115, 117, 119,
    121, 123, 125, 127, 129, 131, 133, 135, 137, 139,
    141, 143, 145, 147, 149, 151, 153, 155, 157, 159,
    161, 163, 165, 167, 169, 171, 173, 175, 177, 179,
    181, 183, 185, 187, 189, 191, 193, 195, 197, 199,
    201, 203, 205, 207, 209, 211, 213, 215, 219, 220,
    221, 223, 225, 227, 229, 231, 233, 235, 237, 239,
    241, 243, 245, 247, 249, 251, 253, 255, 257, 259,
    261, 263, 265, 267, 269, 271, 273, 275, 277, 279,
    281, 283, 285, 287, 289, 291, 293, 295, 297, 299,
    301, 303, 305, 307, 309, 311, 313, 315, 317, 319,
    321, 323, 327, 328, 329, 331, 333, 335, 337, 339,
    341, 343, 345, 347, 349, 351, 353, 355, 357, 359,
    361, 363, 365, 367, 369, 371, 373, 375, 377, 379,
    381, 383, 385, 387, 389, 391, 393, 395, 397, 399,
    401, 403, 405, 407, 409, 411, 413, 415, 417, 419,
    421, 423, 425, 427, 429, 431
  };

  const size_t constraintDofs[192] = {
    27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
    47, 48, 49, 50, 3, 4, 5, 6, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 81, 82,
    83, 84, 85, 86, 87, 88, 89, 90, 91, 92,
    93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
    103, 104, 57, 58, 59, 60, 61, 62, 63, 64,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
    75, 76, 77, 78, 79, 80, 135, 136, 137, 138,
    139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130,
    131, 132, 133, 134, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204,
    205, 206, 207, 208, 209, 210, 211, 212, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 176,
    177, 178, 179, 180, 181, 182, 183, 184, 185, 186,
    187, 188
  };

  const size_t constraintDofOffsets[4 + 1] = {
    0, 48, 96, 144, 192
  };

  const size_t Jm = 12;
  const size_t Jn = 216;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mTreeJointDof = 216;
  delegate->mDof = 216;
  delegate->mStateSize = 440;
  delegate->mContinuousStateSize = 440;
  delegate->mModeVectorSize = 0;
  delegate->mNumStages = 208;
  delegate->mNumConstraints = 4;
  delegate->mNumAllConstraintEquations = 12;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, 208, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 208 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 216, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 216 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 216, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 216 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mFlexibleStages, 0, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mFlexibleStages),
         flexibleStages, 0 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 204, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 204 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mHasAllVelocityDisabledEquations, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmIntVector_nonConstValues
         (&delegate->mHasAllVelocityDisabledEquations),
         hasAllVelocityDisabledEquations, delegate->mNumConstraints * sizeof
         (int32_T));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 0);
  memcpy(
         sm_core_SmIntVector_nonConstValues(&delegate->mRunTimeEnabledEquations),
         runtimeEnabledEquations, delegate->mNumAllConstraintEquations *
         sizeof(int32_T));
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 192, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 192 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 4);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 216);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 4);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    4, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 216, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 216, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 216, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 216, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 216, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 0, &zeroSizePair);
  sm_core_SmSizePairVector_create(&scratchpad->mCvQuaternionVelOffsets,
    0,
    &zeroSizePair);
  sm_core_SmRealVector_create(&scratchpad->mCvQuaternionAzimuthValues,
    0, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 440, 0.0);
  sm_core_SmIntVector_create(&scratchpad->mModeVector, 0, 0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 52465, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 216, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 440, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 216, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 6624, 0.0);
  delegate->mSetTargets = NULL;
  delegate->mResetStateVector = ModeloFinal_1349f7f3_1_resetSimStateVector;
  delegate->mInitializeTrackedAngleState = NULL;
  delegate->mComputeDiscreteState = NULL;
  delegate->mAdjustPosition = NULL;
  delegate->mPerturbJointPrimitiveState =
    ModeloFinal_1349f7f3_1_perturbSimJointPrimitiveState;
  delegate->mPerturbFlexibleBodyState =
    ModeloFinal_1349f7f3_1_perturbFlexibleBodyState;
  delegate->mComputePosDofBlendMatrix = NULL;
  delegate->mComputeVelDofBlendMatrix = NULL;
  delegate->mProjectPartiallyTargetedPos = NULL;
  delegate->mPropagateMotion = NULL;
  delegate->mComputeAssemblyError = NULL;
  delegate->mComputeAssemblyJacobian = NULL;
  delegate->mComputeFullAssemblyJacobian = NULL;
  delegate->mIsInKinematicSingularity = NULL;
  delegate->mConvertStateVector = NULL;
  delegate->mConstructStateVector = ModeloFinal_1349f7f3_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    ModeloFinal_1349f7f3_1_extractSolverStateVector;
  delegate->mIsPositionViolation = ModeloFinal_1349f7f3_1_isPositionViolation;
  delegate->mIsVelocityViolation = ModeloFinal_1349f7f3_1_isVelocityViolation;
  delegate->mProjectStateSim = ModeloFinal_1349f7f3_1_projectStateSim;
  delegate->mComputeConstraintError =
    ModeloFinal_1349f7f3_1_computeConstraintError;
  delegate->mResetModeVector = ModeloFinal_1349f7f3_1_resetModeVector;
  delegate->mHasJointDisToNormModeChange =
    ModeloFinal_1349f7f3_1_hasJointDisToNormModeChange;
  delegate->mPerformJointDisToNormModeChange =
    ModeloFinal_1349f7f3_1_performJointDisToNormModeChange;
  delegate->mOnModeChangedCutJoints =
    ModeloFinal_1349f7f3_1_onModeChangedCutJoints;
  delegate->mMech = NULL;
}

static
  void initMechanismDelegates(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T *motionInputOffsets = NULL;
  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_int_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumInputMotionPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         0 * sizeof(int32_T));
}

static
  void initComputationFcnPtrs(NeDaePrivateData *smData)
{
  smData->mSetParametersFcn = dae_cg_setParameters_function;
  smData->mPAssertFcn = dae_cg_pAssert_method;
  smData->mDerivativeFcn = dae_cg_deriv_method;
  smData->mNumJacPerturbLoBoundsFcn = dae_cg_numJacPerturbLoBounds_method;
  smData->mNumJacPerturbHiBoundsFcn = dae_cg_numJacPerturbHiBounds_method;
  smData->mOutputFcn = dae_cg_compOutputs_method;
  smData->mModeFcn = dae_cg_mode_method;
  smData->mZeroCrossingFcn = dae_cg_zeroCrossing_method;
  smData->mProjectionFcn = dae_cg_project_solve;
  smData->mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve;
  smData->mCheckFcn =
    (smData->mStateVectorSize == 0) ? dae_cg_check_solve : NULL;
  smData->mAssemblyFcn = dae_cg_assemble_solve;
  smData->mSetupLoggerFcn = dae_cg_setupLoggerFcn;
  smData->mLogFcn = dae_cg_recordLog_method;
  smData->mResidualsFcn = NULL;
  smData->mLinearizeFcn = NULL;
  smData->mGenerateFcn = NULL;
}

static
  void initLiveLinkToSm(NeDaePrivateData *smData)
{
  smData->mLiveSmLink = NULL;
  smData->mLiveSmLink_destroy = NULL;
  smData->mLiveSmLink_copy = NULL;
}

void ModeloFinal_1349f7f3_1_NeDaePrivateData_create(NeDaePrivateData *smData)
{
  initBasicAttributes (smData);
  initStateVector (smData);
  initAsserts (smData);
  initModeVector (smData);
  initZeroCrossings (smData);
  initVariables (smData);
  initRuntimeParameters (smData);
  initIoInfo (smData);
  initInputDerivs (smData);
  initDirectFeedthrough (smData);
  initOutputDerivProc (smData);
  initMechanismDelegates (smData);
  initComputationFcnPtrs (smData);
  initLiveLinkToSm (smData);
}
