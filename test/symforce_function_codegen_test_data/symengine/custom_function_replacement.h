// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include "custom_function_replacement_header.h"  // User-defined extra import

namespace cpp_code_printer_test {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: test_expression
 *
 * Args:
 *     x: Scalar
 *
 * Outputs:
 *     res: Scalar
 */
template <typename Scalar>
Scalar TestExpression(const Scalar x) {
  // Total ops: 1

  // Input arrays

  // Intermediate terms (0)

  // Output terms (1)
  Scalar _res;

  _res = fast_math::sin(x);

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace cpp_code_printer_test
