// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/ops/CLASS/lie_group_ops.cc.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./lie_group_ops.h"

#include <cmath>

#include <sym/double_sphere_camera_cal.h>

namespace sym {

template <typename Scalar>
sym::DoubleSphereCameraCal<Scalar> LieGroupOps<DoubleSphereCameraCal<Scalar>>::FromTangent(
    const TangentVec& vec, const Scalar epsilon) {
  // Total ops: 0

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res[0] = vec(0, 0);
  _res[1] = vec(1, 0);
  _res[2] = vec(2, 0);
  _res[3] = vec(3, 0);
  _res[4] = vec(4, 0);
  _res[5] = vec(5, 0);

  return sym::DoubleSphereCameraCal<Scalar>(_res);
}

template <typename Scalar>
typename LieGroupOps<DoubleSphereCameraCal<Scalar>>::TangentVec
LieGroupOps<DoubleSphereCameraCal<Scalar>>::ToTangent(const sym::DoubleSphereCameraCal<Scalar>& a,
                                                      const Scalar epsilon) {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 6, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _a[0];
  _res(1, 0) = _a[1];
  _res(2, 0) = _a[2];
  _res(3, 0) = _a[3];
  _res(4, 0) = _a[4];
  _res(5, 0) = _a[5];

  return _res;
}

template <typename Scalar>
sym::DoubleSphereCameraCal<Scalar> LieGroupOps<DoubleSphereCameraCal<Scalar>>::Retract(
    const sym::DoubleSphereCameraCal<Scalar>& a, const TangentVec& vec, const Scalar epsilon) {
  // Total ops: 6

  // Input arrays
  const Eigen::Matrix<Scalar, 6, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res[0] = _a[0] + vec(0, 0);
  _res[1] = _a[1] + vec(1, 0);
  _res[2] = _a[2] + vec(2, 0);
  _res[3] = _a[3] + vec(3, 0);
  _res[4] = _a[4] + vec(4, 0);
  _res[5] = _a[5] + vec(5, 0);

  return sym::DoubleSphereCameraCal<Scalar>(_res);
}

template <typename Scalar>
typename LieGroupOps<DoubleSphereCameraCal<Scalar>>::TangentVec
LieGroupOps<DoubleSphereCameraCal<Scalar>>::LocalCoordinates(
    const sym::DoubleSphereCameraCal<Scalar>& a, const sym::DoubleSphereCameraCal<Scalar>& b,
    const Scalar epsilon) {
  // Total ops: 12

  // Input arrays
  const Eigen::Matrix<Scalar, 6, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 6, 1>& _b = b.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = -_a[0] + _b[0];
  _res(1, 0) = -_a[1] + _b[1];
  _res(2, 0) = -_a[2] + _b[2];
  _res(3, 0) = -_a[3] + _b[3];
  _res(4, 0) = -_a[4] + _b[4];
  _res(5, 0) = -_a[5] + _b[5];

  return _res;
}

}  // namespace sym

// Explicit instantiation
template struct sym::LieGroupOps<sym::DoubleSphereCameraCal<double>>;
template struct sym::LieGroupOps<sym::DoubleSphereCameraCal<float>>;
