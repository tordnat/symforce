// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

namespace sym {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: cross_and_distance
 *
 * Args:
 *     a: Matrix31
 *     b: Matrix31
 *     epsilon: Scalar
 *
 * Outputs:
 *     cross: Matrix31
 *     distance: Scalar
 *     distance_D_a: (1x3) jacobian of distance (1) wrt arg a (3)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 3, 1> CrossAndDistanceSecondWithJacobian0(
    const Eigen::Matrix<Scalar, 3, 1>& a, const Eigen::Matrix<Scalar, 3, 1>& b,
    const Scalar epsilon, Scalar* const distance = nullptr,
    Eigen::Matrix<Scalar, 1, 3>* const distance_D_a = nullptr) {
  // Total ops: 23

  // Input arrays

  // Intermediate terms (5)
  const Scalar _tmp0 = a(0, 0) - b(0, 0);
  const Scalar _tmp1 = a(1, 0) - b(1, 0);
  const Scalar _tmp2 = a(2, 0) - b(2, 0);
  const Scalar _tmp3 = std::sqrt(Scalar(std::pow(_tmp0, Scalar(2)) + std::pow(_tmp1, Scalar(2)) +
                                        std::pow(_tmp2, Scalar(2)) + epsilon));
  const Scalar _tmp4 = Scalar(1.0) / (_tmp3);

  // Output terms (3)
  Eigen::Matrix<Scalar, 3, 1> _cross;

  _cross(0, 0) = a(1, 0) * b(2, 0) - a(2, 0) * b(1, 0);
  _cross(1, 0) = -a(0, 0) * b(2, 0) + a(2, 0) * b(0, 0);
  _cross(2, 0) = a(0, 0) * b(1, 0) - a(1, 0) * b(0, 0);

  if (distance != nullptr) {
    Scalar& _distance = (*distance);

    _distance = _tmp3;
  }

  if (distance_D_a != nullptr) {
    Eigen::Matrix<Scalar, 1, 3>& _distance_D_a = (*distance_D_a);

    _distance_D_a(0, 0) = _tmp0 * _tmp4;
    _distance_D_a(0, 1) = _tmp1 * _tmp4;
    _distance_D_a(0, 2) = _tmp2 * _tmp4;
  }

  return _cross;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
