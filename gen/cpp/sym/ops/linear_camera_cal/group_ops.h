// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     ops/CLASS/group_ops.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/linear_camera_cal.h>

#include "../group_ops.h"
#include "./lie_group_ops.h"

// Forward declare class, without including header
// We could include the class header here, but we forward declare to be consistent
// with "./group_ops.h", which must forward declare. See that file for an explanation.
namespace sym {
template <typename ScalarType>
class LinearCameraCal;
}  // namespace sym

namespace sym {

/**
 * C++ GroupOps implementation for <class 'symforce.cam.linear_camera_cal.LinearCameraCal'>.
 */
template <typename Scalar>
struct GroupOps<LinearCameraCal<Scalar>> {
  using T = LinearCameraCal<Scalar>;
  using SelfJacobian =
      Eigen::Matrix<Scalar, LieGroupOps<T>::TangentDim(), LieGroupOps<T>::TangentDim()>;

  static T Identity();
  static T Inverse(const T& a);
  static T Compose(const T& a, const T& b);
  static T Between(const T& a, const T& b);
  static T InverseWithJacobian(const T& a, SelfJacobian* const res_D_a = nullptr);
  static T ComposeWithJacobians(const T& a, const T& b, SelfJacobian* const res_D_a = nullptr,
                                SelfJacobian* const res_D_b = nullptr);
  static T BetweenWithJacobians(const T& a, const T& b, SelfJacobian* const res_D_a = nullptr,
                                SelfJacobian* const res_D_b = nullptr);
};

}  // namespace sym

// Explicit instantiation
extern template struct sym::GroupOps<sym::LinearCameraCal<double>>;
extern template struct sym::GroupOps<sym::LinearCameraCal<float>>;
