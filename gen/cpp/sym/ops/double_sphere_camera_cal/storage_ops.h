// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/ops/CLASS/storage_ops.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <lcmtypes/sym/type_t.hpp>

#include "../storage_ops.h"

// Forward declare class, without including header
// We could include the class header here, but we forward declare to be consistent
// with "./group_ops.h", which must forward declare. See that file for an explanation.
namespace sym {
template <typename ScalarType>
class DoubleSphereCameraCal;
}  // namespace sym

namespace sym {

/**
 * C++ StorageOps implementation for <class
 * 'symforce.cam.double_sphere_camera_cal.DoubleSphereCameraCal'>.
 */
template <typename ScalarType>
struct StorageOps<DoubleSphereCameraCal<ScalarType>> {
  using T = DoubleSphereCameraCal<ScalarType>;
  using Scalar = ScalarType;

  static constexpr int32_t StorageDim() {
    return 6;
  }

  static void ToStorage(const T& a, ScalarType* out);
  static T FromStorage(const ScalarType* data);

  static constexpr type_t TypeEnum() {
    return type_t::DOUBLE_SPHERE_CAMERA_CAL;
  }
};

}  // namespace sym

// Explicit instantiation
extern template struct sym::StorageOps<sym::DoubleSphereCameraCal<double>>;
extern template struct sym::StorageOps<sym::DoubleSphereCameraCal<float>>;
