// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     ops/CLASS/lie_group_ops.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include "../lie_group_ops.h"

// Forward declare class, without including header
// Note(brad): We can't include the class header here because the class header
// includes "./group_ops.h", which requires the template specialization definition
// of TangentDim(), which is defined below. If you try, you'll get used before definition
// errors.
namespace sym {
template <typename ScalarType>
class LinearCameraCal;
}  // namespace sym

namespace sym {

/**
 * C++ LieGroupOps implementation for <class 'symforce.cam.linear_camera_cal.LinearCameraCal'>.
 */
template <typename Scalar>
struct LieGroupOps<LinearCameraCal<Scalar>>
    : public internal::LieGroupOpsBase<LinearCameraCal<Scalar>, Scalar> {
  using T = LinearCameraCal<Scalar>;

  static constexpr int32_t TangentDim() {
    return 4;
  }

  using TangentVec = Eigen::Matrix<Scalar, TangentDim(), 1>;

  static T FromTangent(const TangentVec& vec, const Scalar epsilon);
  static TangentVec ToTangent(const T& a, const Scalar epsilon);
  static T Retract(const T& a, const TangentVec& vec, const Scalar epsilon);
  static TangentVec LocalCoordinates(const T& a, const T& b, const Scalar epsilon);
};

}  // namespace sym

// Explicit instantiation
extern template struct sym::LieGroupOps<sym::LinearCameraCal<double>>;
extern template struct sym::LieGroupOps<sym::LinearCameraCal<float>>;
