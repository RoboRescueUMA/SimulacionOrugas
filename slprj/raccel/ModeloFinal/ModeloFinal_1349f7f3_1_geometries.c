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

const sm_core_compiler_Brick *ModeloFinal_1349f7f3_1_geometry_0(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const sm_core_compiler_Brick brick = { 4.500000000000001e-3,
    4.500000000000001e-3, 0.013 };

  (void) rtdv;
  return &brick;
}

const sm_core_compiler_Brick *ModeloFinal_1349f7f3_1_geometry_1(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const sm_core_compiler_Brick brick = { 0.02, 7.0e-3, 0.05 };

  (void) rtdv;
  return &brick;
}

const sm_core_compiler_Cylinder *ModeloFinal_1349f7f3_1_geometry_2(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const sm_core_compiler_Cylinder cylinder = { 0.0765, 0.05 };

  (void) rtdv;
  return &cylinder;
}

const sm_core_compiler_PointCloud *ModeloFinal_1349f7f3_1_geometry_3(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const real_T offsets[144] = {
    7.5e-3,
    0.07490000000000001,
    3.79e-3,
    7.5e-3,
    -0.07490000000000001,
    3.79e-3,
    7.5e-3,
    0.07490000000000001,
    -3.79e-3,
    7.5e-3,
    -0.07490000000000001,
    -3.79e-3,
    7.5e-3,
    0.07333000000000001,
    0.01573,
    7.5e-3,
    -0.07333000000000001,
    0.01573,
    7.5e-3,
    0.07333000000000001,
    -0.01573,
    7.5e-3,
    -0.07333000000000001,
    -0.01573,
    7.5e-3,
    0.07137,
    0.02305,
    7.5e-3,
    -0.07137,
    0.02305,
    7.5e-3,
    0.07137,
    -0.02305,
    7.5e-3,
    -0.07137,
    -0.02305,
    7.5e-3,
    0.06676,
    0.03417,
    7.5e-3,
    -0.06676,
    0.03417,
    7.5e-3,
    0.06676,
    -0.03417,
    7.5e-3,
    -0.06676,
    -0.03417,
    7.5e-3,
    0.06297,
    0.04073,
    7.5e-3,
    -0.06297,
    0.04073,
    7.5e-3,
    0.06297,
    -0.04073,
    7.5e-3,
    -0.06297,
    -0.04073,
    7.5e-3,
    0.05565,
    0.05028000000000001,
    7.5e-3,
    -0.05565,
    0.05028000000000001,
    7.5e-3,
    0.05565,
    -0.05028000000000001,
    7.5e-3,
    -0.05565,
    -0.05028000000000001,
    7.5e-3,
    0.05028000000000001,
    0.05565,
    7.5e-3,
    -0.05028000000000001,
    0.05565,
    7.5e-3,
    0.05028000000000001,
    -0.05565,
    7.5e-3,
    -0.05028000000000001,
    -0.05565,
    7.5e-3,
    0.04073,
    0.06297,
    7.5e-3,
    -0.04073,
    0.06297,
    7.5e-3,
    0.04073,
    -0.06297,
    7.5e-3,
    -0.04073,
    -0.06297,
    7.5e-3,
    0.03417,
    0.06676,
    7.5e-3,
    -0.03417,
    0.06676,
    7.5e-3,
    0.03417,
    -0.06676,
    7.5e-3,
    -0.03417,
    -0.06676,
    7.5e-3,
    0.02305,
    0.07137,
    7.5e-3,
    -0.02305,
    0.07137,
    7.5e-3,
    0.02305,
    -0.07137,
    7.5e-3,
    -0.02305,
    -0.07137,
    7.5e-3,
    0.01573,
    0.07333000000000001,
    7.5e-3,
    -0.01573,
    0.07333000000000001,
    7.5e-3,
    0.01573,
    -0.07333000000000001,
    7.5e-3,
    -0.01573,
    -0.07333000000000001,
    7.5e-3,
    3.79e-3,
    0.07490000000000001,
    7.5e-3,
    -3.79e-3,
    0.07490000000000001,
    7.5e-3,
    3.79e-3,
    -0.07490000000000001,
    7.5e-3,
    -3.79e-3,
    -0.07490000000000001,
  };

  static const sm_core_compiler_SphereTree sphereTree = { 0, NULL, NULL, NULL,
    NULL, NULL, NULL };

  static const sm_core_compiler_PointCloud pointCloud = { 48, 3, offsets, (const
    sm_core_compiler_SphereTree*)(&sphereTree) };

  (void) rtdv;
  return &pointCloud;
}

const sm_core_compiler_Cylinder *ModeloFinal_1349f7f3_1_geometry_4(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const sm_core_compiler_Cylinder cylinder = { 0.05, 0.05 };

  (void) rtdv;
  return &cylinder;
}

const sm_core_compiler_Brick *ModeloFinal_1349f7f3_1_geometry_5(const
  RuntimeDerivedValuesBundle *rtdv)
{
  static const sm_core_compiler_Brick brick = { 0.02, 5.0e-3, 0.05 };

  (void) rtdv;
  return &brick;
}

void ModeloFinal_1349f7f3_1_initializeGeometries(const struct
  RuntimeDerivedValuesBundleTag *rtdv)
{
  ModeloFinal_1349f7f3_1_geometry_0(rtdv);
  ModeloFinal_1349f7f3_1_geometry_1(rtdv);
  ModeloFinal_1349f7f3_1_geometry_2(rtdv);
  ModeloFinal_1349f7f3_1_geometry_3(rtdv);
  ModeloFinal_1349f7f3_1_geometry_4(rtdv);
  ModeloFinal_1349f7f3_1_geometry_5(rtdv);
}
