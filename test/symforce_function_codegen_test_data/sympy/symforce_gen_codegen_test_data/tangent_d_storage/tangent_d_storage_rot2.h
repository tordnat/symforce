// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/rot2.h>

namespace sym {

/**
 * Computes the jacobian of the tangent space around an element with respect to the storage space of
 * that element.
 *
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 2> TangentDStorage(const sym::Rot2<Scalar>& a, const Scalar epsilon) {
  // Total ops: 1

  // Input arrays
  const Eigen::Matrix<Scalar, 2, 1>& _a = a.Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 1, 2> _res;

  _res(0, 0) = -_a[1];
  _res(0, 1) = _a[0];

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
