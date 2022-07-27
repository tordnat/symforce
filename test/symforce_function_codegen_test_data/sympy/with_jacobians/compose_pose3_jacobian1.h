// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include <sym/pose3.h>

namespace sym {

/**
 * Composition of two elements in the group.
 *
 * Returns:
 *     res_D_b: (6x6) jacobian of res (6) wrt arg b (6)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 6> ComposePose3Jacobian1(const sym::Pose3<Scalar>& a,
                                                  const sym::Pose3<Scalar>& b) {
  // Total ops: 172

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();

  // Intermediate terms (39)
  const Scalar _tmp0 = _a[3] * _b[2];
  const Scalar _tmp1 = _a[0] * _b[1];
  const Scalar _tmp2 = _a[1] * _b[0];
  const Scalar _tmp3 = _a[2] * _b[3];
  const Scalar _tmp4 = (Scalar(1) / Scalar(2)) * _tmp0 + (Scalar(1) / Scalar(2)) * _tmp1 -
                       Scalar(1) / Scalar(2) * _tmp2 + (Scalar(1) / Scalar(2)) * _tmp3;
  const Scalar _tmp5 = 2 * _tmp0 + 2 * _tmp1 - 2 * _tmp2 + 2 * _tmp3;
  const Scalar _tmp6 = _a[3] * _b[0];
  const Scalar _tmp7 = _a[0] * _b[3];
  const Scalar _tmp8 = _a[1] * _b[2];
  const Scalar _tmp9 = -2 * _a[2] * _b[1] + 2 * _tmp6 + 2 * _tmp7 + 2 * _tmp8;
  const Scalar _tmp10 = -_tmp9;
  const Scalar _tmp11 = -Scalar(1) / Scalar(2) * _a[2] * _b[1] + (Scalar(1) / Scalar(2)) * _tmp6 +
                        (Scalar(1) / Scalar(2)) * _tmp7 + (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp12 = -_tmp11;
  const Scalar _tmp13 = _tmp10 * _tmp12;
  const Scalar _tmp14 = _a[0] * _b[0];
  const Scalar _tmp15 = _a[1] * _b[1];
  const Scalar _tmp16 = _a[2] * _b[2];
  const Scalar _tmp17 = (Scalar(1) / Scalar(2)) * _a[3] * _b[3] - Scalar(1) / Scalar(2) * _tmp14 -
                        Scalar(1) / Scalar(2) * _tmp15 - Scalar(1) / Scalar(2) * _tmp16;
  const Scalar _tmp18 = 2 * _a[3] * _b[3] - 2 * _tmp14 - 2 * _tmp15 - 2 * _tmp16;
  const Scalar _tmp19 = _tmp17 * _tmp18;
  const Scalar _tmp20 = _a[3] * _b[1];
  const Scalar _tmp21 = _a[1] * _b[3];
  const Scalar _tmp22 = _a[2] * _b[0];
  const Scalar _tmp23 = -2 * _a[0] * _b[2] + 2 * _tmp20 + 2 * _tmp21 + 2 * _tmp22;
  const Scalar _tmp24 = -_tmp23;
  const Scalar _tmp25 = -Scalar(1) / Scalar(2) * _a[0] * _b[2] + (Scalar(1) / Scalar(2)) * _tmp20 +
                        (Scalar(1) / Scalar(2)) * _tmp21 + (Scalar(1) / Scalar(2)) * _tmp22;
  const Scalar _tmp26 = -_tmp25;
  const Scalar _tmp27 = _tmp19 + _tmp24 * _tmp26;
  const Scalar _tmp28 = -_tmp5;
  const Scalar _tmp29 = -_tmp4;
  const Scalar _tmp30 = _tmp28 * _tmp29;
  const Scalar _tmp31 = 2 * std::pow(_a[1], Scalar(2));
  const Scalar _tmp32 = 2 * std::pow(_a[2], Scalar(2)) - 1;
  const Scalar _tmp33 = 2 * _a[3];
  const Scalar _tmp34 = _a[2] * _tmp33;
  const Scalar _tmp35 = 2 * _a[0];
  const Scalar _tmp36 = _a[1] * _tmp33;
  const Scalar _tmp37 = 2 * std::pow(_a[0], Scalar(2));
  const Scalar _tmp38 = _a[0] * _tmp33;

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 6> _res_D_b;

  _res_D_b(0, 0) = _tmp13 + _tmp27 + _tmp4 * _tmp5;
  _res_D_b(1, 0) = _tmp12 * _tmp24 + _tmp17 * _tmp28 + _tmp18 * _tmp4 + _tmp26 * _tmp9;
  _res_D_b(2, 0) = _tmp10 * _tmp4 + _tmp12 * _tmp28 + _tmp17 * _tmp23 + _tmp18 * _tmp26;
  _res_D_b(3, 0) = 0;
  _res_D_b(4, 0) = 0;
  _res_D_b(5, 0) = 0;
  _res_D_b(0, 1) = _tmp10 * _tmp26 + _tmp11 * _tmp24 + _tmp17 * _tmp5 + _tmp18 * _tmp29;
  _res_D_b(1, 1) = _tmp11 * _tmp9 + _tmp27 + _tmp30;
  _res_D_b(2, 1) = _tmp10 * _tmp17 + _tmp11 * _tmp18 + _tmp23 * _tmp29 + _tmp26 * _tmp28;
  _res_D_b(3, 1) = 0;
  _res_D_b(4, 1) = 0;
  _res_D_b(5, 1) = 0;
  _res_D_b(0, 2) = _tmp10 * _tmp29 + _tmp12 * _tmp5 + _tmp17 * _tmp24 + _tmp18 * _tmp25;
  _res_D_b(1, 2) = _tmp12 * _tmp18 + _tmp17 * _tmp9 + _tmp24 * _tmp29 + _tmp25 * _tmp28;
  _res_D_b(2, 2) = _tmp13 + _tmp19 + _tmp23 * _tmp25 + _tmp30;
  _res_D_b(3, 2) = 0;
  _res_D_b(4, 2) = 0;
  _res_D_b(5, 2) = 0;
  _res_D_b(0, 3) = 0;
  _res_D_b(1, 3) = 0;
  _res_D_b(2, 3) = 0;
  _res_D_b(3, 3) = -_tmp31 - _tmp32;
  _res_D_b(4, 3) = _a[1] * _tmp35 + _tmp34;
  _res_D_b(5, 3) = 2 * _a[0] * _a[2] - _tmp36;
  _res_D_b(0, 4) = 0;
  _res_D_b(1, 4) = 0;
  _res_D_b(2, 4) = 0;
  _res_D_b(3, 4) = 2 * _a[0] * _a[1] - _tmp34;
  _res_D_b(4, 4) = -_tmp32 - _tmp37;
  _res_D_b(5, 4) = 2 * _a[1] * _a[2] + _tmp38;
  _res_D_b(0, 5) = 0;
  _res_D_b(1, 5) = 0;
  _res_D_b(2, 5) = 0;
  _res_D_b(3, 5) = _a[2] * _tmp35 + _tmp36;
  _res_D_b(4, 5) = 2 * _a[1] * _a[2] - _tmp38;
  _res_D_b(5, 5) = -_tmp31 - _tmp37 + 1;

  return _res_D_b;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
