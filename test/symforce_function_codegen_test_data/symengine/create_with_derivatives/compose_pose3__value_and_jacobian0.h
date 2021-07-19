// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <sym/pose3.h>

namespace sym {

/**
 * Composition of two elements in the group.
 *
 * Returns:
 *     Element: a @ b
 *     res_D_a: (6x6) jacobian of res (6) wrt arg a (6)
 */
template <typename Scalar>
sym::Pose3<Scalar> ComposePose3_ValueAndJacobian0(
    const sym::Pose3<Scalar>& a, const sym::Pose3<Scalar>& b,
    Eigen::Matrix<Scalar, 6, 6>* const res_D_a = nullptr) {
  // Total ops: 361

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();

  // Intermediate terms (88)
  const Scalar _tmp0 = _a[0] * _b[3] + _a[1] * _b[2] - _a[2] * _b[1] + _a[3] * _b[0];
  const Scalar _tmp1 = -_a[0] * _b[2] + _a[1] * _b[3] + _a[2] * _b[0] + _a[3] * _b[1];
  const Scalar _tmp2 = _a[0] * _b[1] - _a[1] * _b[0] + _a[2] * _b[3] + _a[3] * _b[2];
  const Scalar _tmp3 = -_a[0] * _b[0] - _a[1] * _b[1] - _a[2] * _b[2] + _a[3] * _b[3];
  const Scalar _tmp4 = -2 * std::pow<Scalar>(_a[1], 2);
  const Scalar _tmp5 = 1 - 2 * std::pow<Scalar>(_a[2], 2);
  const Scalar _tmp6 = 2 * _a[1];
  const Scalar _tmp7 = _a[0] * _tmp6;
  const Scalar _tmp8 = 2 * _a[3];
  const Scalar _tmp9 = _a[2] * _tmp8;
  const Scalar _tmp10 = _a[3] * _tmp6;
  const Scalar _tmp11 = 2 * _a[2];
  const Scalar _tmp12 = _a[0] * _tmp11;
  const Scalar _tmp13 = -2 * std::pow<Scalar>(_a[0], 2);
  const Scalar _tmp14 = _a[0] * _tmp8;
  const Scalar _tmp15 = _a[2] * _tmp6;
  const Scalar _tmp16 = 2 * _tmp2;
  const Scalar _tmp17 = _b[0] * _tmp16;
  const Scalar _tmp18 = 2 * _tmp3;
  const Scalar _tmp19 = _b[1] * _tmp18;
  const Scalar _tmp20 = 2 * _tmp1;
  const Scalar _tmp21 = _b[3] * _tmp20;
  const Scalar _tmp22 = 2 * _tmp0;
  const Scalar _tmp23 = _b[2] * _tmp22;
  const Scalar _tmp24 = -_tmp21 + _tmp23;
  const Scalar _tmp25 = _tmp17 - _tmp19 + _tmp24;
  const Scalar _tmp26 = (Scalar(1) / Scalar(2)) * _a[1];
  const Scalar _tmp27 = _b[2] * _tmp20;
  const Scalar _tmp28 = _b[3] * _tmp22;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _b[1] * _tmp16;
  const Scalar _tmp31 = _b[0] * _tmp18;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = -_tmp27 + _tmp29 + _tmp32;
  const Scalar _tmp34 = (Scalar(1) / Scalar(2)) * _a[0];
  const Scalar _tmp35 = _b[1] * _tmp20;
  const Scalar _tmp36 = -_tmp35;
  const Scalar _tmp37 = _b[0] * _tmp22;
  const Scalar _tmp38 = _b[2] * _tmp16;
  const Scalar _tmp39 = _b[3] * _tmp18;
  const Scalar _tmp40 = -_tmp38 + _tmp39;
  const Scalar _tmp41 = _tmp36 + _tmp37 + _tmp40;
  const Scalar _tmp42 = (Scalar(1) / Scalar(2)) * _a[3];
  const Scalar _tmp43 = _b[3] * _tmp16;
  const Scalar _tmp44 = _b[2] * _tmp18;
  const Scalar _tmp45 = _b[0] * _tmp20;
  const Scalar _tmp46 = _b[1] * _tmp22;
  const Scalar _tmp47 = _tmp45 + _tmp46;
  const Scalar _tmp48 = _tmp43 + _tmp44 + _tmp47;
  const Scalar _tmp49 = (Scalar(1) / Scalar(2)) * _a[2];
  const Scalar _tmp50 = -_tmp17 + _tmp19 + _tmp24;
  const Scalar _tmp51 = _tmp27 + _tmp28 + _tmp32;
  const Scalar _tmp52 = -_tmp37;
  const Scalar _tmp53 = _tmp35 + _tmp40 + _tmp52;
  const Scalar _tmp54 = -_tmp43;
  const Scalar _tmp55 = -_tmp44 + _tmp47 + _tmp54;
  const Scalar _tmp56 = _tmp17 + _tmp19 + _tmp21 + _tmp23;
  const Scalar _tmp57 = _tmp27 + _tmp29 + _tmp30 - _tmp31;
  const Scalar _tmp58 = _tmp36 + _tmp38 + _tmp39 + _tmp52;
  const Scalar _tmp59 = _tmp44 + _tmp45 - _tmp46 + _tmp54;
  const Scalar _tmp60 = _b[6] * _tmp6;
  const Scalar _tmp61 = _b[5] * _tmp11;
  const Scalar _tmp62 = _tmp60 - _tmp61;
  const Scalar _tmp63 = _b[5] * _tmp6;
  const Scalar _tmp64 = _b[6] * _tmp11;
  const Scalar _tmp65 = _tmp63 + _tmp64;
  const Scalar _tmp66 = 2 * _a[0];
  const Scalar _tmp67 = _b[6] * _tmp66;
  const Scalar _tmp68 = _b[5] * _tmp8;
  const Scalar _tmp69 = 4 * _a[2];
  const Scalar _tmp70 = -_b[4] * _tmp69 + _tmp67 - _tmp68;
  const Scalar _tmp71 = 4 * _a[1];
  const Scalar _tmp72 = _b[5] * _tmp66;
  const Scalar _tmp73 = _b[6] * _tmp8;
  const Scalar _tmp74 = -_b[4] * _tmp71 + _tmp72 + _tmp73;
  const Scalar _tmp75 = _b[4] * _tmp11;
  const Scalar _tmp76 = -_tmp67 + _tmp75;
  const Scalar _tmp77 = _b[4] * _tmp66;
  const Scalar _tmp78 = _tmp64 + _tmp77;
  const Scalar _tmp79 = _b[4] * _tmp8;
  const Scalar _tmp80 = -_b[5] * _tmp69 + _tmp60 + _tmp79;
  const Scalar _tmp81 = _b[4] * _tmp6;
  const Scalar _tmp82 = 4 * _a[0];
  const Scalar _tmp83 = -_b[5] * _tmp82 - _tmp73 + _tmp81;
  const Scalar _tmp84 = _tmp72 - _tmp81;
  const Scalar _tmp85 = _tmp63 + _tmp77;
  const Scalar _tmp86 = -_b[6] * _tmp71 + _tmp61 - _tmp79;
  const Scalar _tmp87 = -_b[6] * _tmp82 + _tmp68 + _tmp75;

  // Output terms (2)
  Eigen::Matrix<Scalar, 7, 1> _res;

  _res[0] = _tmp0;
  _res[1] = _tmp1;
  _res[2] = _tmp2;
  _res[3] = _tmp3;
  _res[4] = _a[4] + _b[4] * (_tmp4 + _tmp5) + _b[5] * (_tmp7 - _tmp9) + _b[6] * (_tmp10 + _tmp12);
  _res[5] = _a[5] + _b[4] * (_tmp7 + _tmp9) + _b[5] * (_tmp13 + _tmp5) + _b[6] * (-_tmp14 + _tmp15);
  _res[6] =
      _a[6] + _b[4] * (-_tmp10 + _tmp12) + _b[5] * (_tmp14 + _tmp15) + _b[6] * (_tmp13 + _tmp4 + 1);

  if (res_D_a != nullptr) {
    Eigen::Matrix<Scalar, 6, 6>& _res_D_a = (*res_D_a);

    _res_D_a(0, 0) = -_tmp25 * _tmp26 - _tmp33 * _tmp34 + _tmp41 * _tmp42 + _tmp48 * _tmp49;
    _res_D_a(0, 1) = _tmp25 * _tmp34 - _tmp26 * _tmp33 - _tmp41 * _tmp49 + _tmp42 * _tmp48;
    _res_D_a(0, 2) = _tmp25 * _tmp42 + _tmp26 * _tmp41 - _tmp33 * _tmp49 - _tmp34 * _tmp48;
    _res_D_a(0, 3) = 0;
    _res_D_a(0, 4) = 0;
    _res_D_a(0, 5) = 0;
    _res_D_a(1, 0) = -_tmp26 * _tmp51 - _tmp34 * _tmp50 + _tmp42 * _tmp55 + _tmp49 * _tmp53;
    _res_D_a(1, 1) = -_tmp26 * _tmp50 + _tmp34 * _tmp51 + _tmp42 * _tmp53 - _tmp49 * _tmp55;
    _res_D_a(1, 2) = _tmp26 * _tmp55 - _tmp34 * _tmp53 + _tmp42 * _tmp51 - _tmp49 * _tmp50;
    _res_D_a(1, 3) = 0;
    _res_D_a(1, 4) = 0;
    _res_D_a(1, 5) = 0;
    _res_D_a(2, 0) = -_tmp26 * _tmp58 - _tmp34 * _tmp59 + _tmp42 * _tmp56 + _tmp49 * _tmp57;
    _res_D_a(2, 1) = -_tmp26 * _tmp59 + _tmp34 * _tmp58 + _tmp42 * _tmp57 - _tmp49 * _tmp56;
    _res_D_a(2, 2) = _tmp26 * _tmp56 - _tmp34 * _tmp57 + _tmp42 * _tmp58 - _tmp49 * _tmp59;
    _res_D_a(2, 3) = 0;
    _res_D_a(2, 4) = 0;
    _res_D_a(2, 5) = 0;
    _res_D_a(3, 0) = -_tmp26 * _tmp70 - _tmp34 * _tmp62 + _tmp42 * _tmp65 + _tmp49 * _tmp74;
    _res_D_a(3, 1) = -_tmp26 * _tmp62 + _tmp34 * _tmp70 + _tmp42 * _tmp74 - _tmp49 * _tmp65;
    _res_D_a(3, 2) = _tmp26 * _tmp65 - _tmp34 * _tmp74 + _tmp42 * _tmp70 - _tmp49 * _tmp62;
    _res_D_a(3, 3) = 1;
    _res_D_a(3, 4) = 0;
    _res_D_a(3, 5) = 0;
    _res_D_a(4, 0) = -_tmp26 * _tmp80 - _tmp34 * _tmp76 + _tmp42 * _tmp83 + _tmp49 * _tmp78;
    _res_D_a(4, 1) = -_tmp26 * _tmp76 + _tmp34 * _tmp80 + _tmp42 * _tmp78 - _tmp49 * _tmp83;
    _res_D_a(4, 2) = _tmp26 * _tmp83 - _tmp34 * _tmp78 + _tmp42 * _tmp80 - _tmp49 * _tmp76;
    _res_D_a(4, 3) = 0;
    _res_D_a(4, 4) = 1;
    _res_D_a(4, 5) = 0;
    _res_D_a(5, 0) = -_tmp26 * _tmp85 - _tmp34 * _tmp84 + _tmp42 * _tmp87 + _tmp49 * _tmp86;
    _res_D_a(5, 1) = -_tmp26 * _tmp84 + _tmp34 * _tmp85 + _tmp42 * _tmp86 - _tmp49 * _tmp87;
    _res_D_a(5, 2) = _tmp26 * _tmp87 - _tmp34 * _tmp86 + _tmp42 * _tmp85 - _tmp49 * _tmp84;
    _res_D_a(5, 3) = 0;
    _res_D_a(5, 4) = 0;
    _res_D_a(5, 5) = 1;
  }

  return sym::Pose3<Scalar>(_res);
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
