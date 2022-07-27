// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     ops/CLASS/lie_group_ops.cc.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./lie_group_ops.h"

#include <cmath>

#include <sym/linear_camera_cal.h>

namespace sym {

template <typename Scalar>
sym::LinearCameraCal<Scalar> LieGroupOps<LinearCameraCal<Scalar>>::FromTangent(
    const TangentVec& vec, const Scalar epsilon) {
  // Total ops: 0

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res[0] = vec(0, 0);
  _res[1] = vec(1, 0);
  _res[2] = vec(2, 0);
  _res[3] = vec(3, 0);

  return sym::LinearCameraCal<Scalar>(_res);
}

template <typename Scalar>
typename LieGroupOps<LinearCameraCal<Scalar>>::TangentVec
LieGroupOps<LinearCameraCal<Scalar>>::ToTangent(const sym::LinearCameraCal<Scalar>& a,
                                                const Scalar epsilon) {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = _a[0];
  _res(1, 0) = _a[1];
  _res(2, 0) = _a[2];
  _res(3, 0) = _a[3];

  return _res;
}

template <typename Scalar>
sym::LinearCameraCal<Scalar> LieGroupOps<LinearCameraCal<Scalar>>::Retract(
    const sym::LinearCameraCal<Scalar>& a, const TangentVec& vec, const Scalar epsilon) {
  // Total ops: 4

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res[0] = _a[0] + vec(0, 0);
  _res[1] = _a[1] + vec(1, 0);
  _res[2] = _a[2] + vec(2, 0);
  _res[3] = _a[3] + vec(3, 0);

  return sym::LinearCameraCal<Scalar>(_res);
}

template <typename Scalar>
typename LieGroupOps<LinearCameraCal<Scalar>>::TangentVec
LieGroupOps<LinearCameraCal<Scalar>>::LocalCoordinates(const sym::LinearCameraCal<Scalar>& a,
                                                       const sym::LinearCameraCal<Scalar>& b,
                                                       const Scalar epsilon) {
  // Total ops: 4

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 4, 1> _res;

  _res(0, 0) = -_a[0] + _b[0];
  _res(1, 0) = -_a[1] + _b[1];
  _res(2, 0) = -_a[2] + _b[2];
  _res(3, 0) = -_a[3] + _b[3];

  return _res;
}

}  // namespace sym

// Explicit instantiation
template struct sym::LieGroupOps<sym::LinearCameraCal<double>>;
template struct sym::LieGroupOps<sym::LinearCameraCal<float>>;
