// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <sym/pose3.h>

namespace sym {

/**
 * Residual that penalizes the difference between between(a, b) and a_t_b.
 *
 * In vector space terms that would be:
 *     (b - a) - a_t_b
 *
 * In lie group terms:
 *     local_coordinates(a_t_b, between(a, b))
 *     to_tangent(compose(inverse(a_t_b), compose(inverse(a), b)))
 *
 * Args:
 *     sqrt_info: Square root information matrix to whiten residual. This can be computed from
 *                a covariance matrix as the cholesky decomposition of the inverse. In the case
 *                of a diagonal it will contain 1/sigma values. Must match the tangent dim.
 *     jacobian: (3x12) jacobian of res wrt args a (6), b (6)
 */
template <typename Scalar>
void BetweenFactorPose3Position(const sym::Pose3<Scalar>& a, const sym::Pose3<Scalar>& b,
                                const Eigen::Matrix<Scalar, 3, 1>& a_t_b,
                                const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
                                Eigen::Matrix<Scalar, 3, 1>* const res = nullptr,
                                Eigen::Matrix<Scalar, 3, 12>* const jacobian = nullptr) {
  // Total ops: 449

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();

  // Intermediate terms (98)
  const Scalar _tmp0 = 2 * std::pow<Scalar>(_a[1], 2);
  const Scalar _tmp1 = -_tmp0;
  const Scalar _tmp2 = 2 * std::pow<Scalar>(_a[2], 2);
  const Scalar _tmp3 = 1 - _tmp2;
  const Scalar _tmp4 = _tmp1 + _tmp3;
  const Scalar _tmp5 = 2 * _a[1];
  const Scalar _tmp6 = _a[0] * _tmp5;
  const Scalar _tmp7 = 2 * _a[2];
  const Scalar _tmp8 = _a[3] * _tmp7;
  const Scalar _tmp9 = _tmp6 + _tmp8;
  const Scalar _tmp10 = _a[3] * _tmp5;
  const Scalar _tmp11 = -_tmp10;
  const Scalar _tmp12 = _a[0] * _tmp7;
  const Scalar _tmp13 = _tmp11 + _tmp12;
  const Scalar _tmp14 = -_a[4] * _tmp4 - _a[5] * _tmp9 - _a[6] * _tmp13 + _b[4] * _tmp4 +
                        _b[5] * _tmp9 + _b[6] * _tmp13 - a_t_b(0, 0);
  const Scalar _tmp15 = 2 * std::pow<Scalar>(_a[0], 2);
  const Scalar _tmp16 = -_tmp15;
  const Scalar _tmp17 = _tmp16 + _tmp3;
  const Scalar _tmp18 = -_tmp8;
  const Scalar _tmp19 = _tmp18 + _tmp6;
  const Scalar _tmp20 = 2 * _a[0];
  const Scalar _tmp21 = _a[3] * _tmp20;
  const Scalar _tmp22 = _a[2] * _tmp5;
  const Scalar _tmp23 = _tmp21 + _tmp22;
  const Scalar _tmp24 = -_a[4] * _tmp19 - _a[5] * _tmp17 - _a[6] * _tmp23 + _b[4] * _tmp19 +
                        _b[5] * _tmp17 + _b[6] * _tmp23 - a_t_b(1, 0);
  const Scalar _tmp25 = _tmp1 + _tmp16 + 1;
  const Scalar _tmp26 = -_tmp21;
  const Scalar _tmp27 = _tmp22 + _tmp26;
  const Scalar _tmp28 = _tmp10 + _tmp12;
  const Scalar _tmp29 = -_a[4] * _tmp28 - _a[5] * _tmp27 - _a[6] * _tmp25 + _b[4] * _tmp28 +
                        _b[5] * _tmp27 + _b[6] * _tmp25 - a_t_b(2, 0);
  const Scalar _tmp30 = -_a[6] * _tmp7 + _b[6] * _tmp7;
  const Scalar _tmp31 = -_a[4] * _tmp20 + _b[4] * _tmp20;
  const Scalar _tmp32 = _tmp30 + _tmp31;
  const Scalar _tmp33 = 4 * _a[1];
  const Scalar _tmp34 = _a[5] * _tmp20;
  const Scalar _tmp35 = _b[5] * _tmp20;
  const Scalar _tmp36 = 4 * _a[4];
  const Scalar _tmp37 = 2 * _a[3];
  const Scalar _tmp38 = _b[6] * _tmp37;
  const Scalar _tmp39 = _a[6] * _tmp37;
  const Scalar _tmp40 = _a[1] * _tmp36 - _b[4] * _tmp33 - _tmp34 + _tmp35 - _tmp38 + _tmp39;
  const Scalar _tmp41 = _b[4] * _tmp37;
  const Scalar _tmp42 = _a[4] * _tmp37;
  const Scalar _tmp43 = -_a[5] * _tmp7 + _b[5] * _tmp7;
  const Scalar _tmp44 = _a[6] * _tmp33 - _b[6] * _tmp33 + _tmp41 - _tmp42 + _tmp43;
  const Scalar _tmp45 =
      _tmp32 * sqrt_info(0, 1) + _tmp40 * sqrt_info(0, 0) + _tmp44 * sqrt_info(0, 2);
  const Scalar _tmp46 = (Scalar(1) / Scalar(2)) * _a[2];
  const Scalar _tmp47 = 4 * _a[0];
  const Scalar _tmp48 = _b[5] * _tmp37;
  const Scalar _tmp49 = _a[5] * _tmp37;
  const Scalar _tmp50 = _b[4] * _tmp7;
  const Scalar _tmp51 = _a[4] * _tmp7;
  const Scalar _tmp52 = _a[6] * _tmp47 - _b[6] * _tmp47 - _tmp48 + _tmp49 + _tmp50 - _tmp51;
  const Scalar _tmp53 = -_a[4] * _tmp5 + _b[4] * _tmp5;
  const Scalar _tmp54 = _a[5] * _tmp47 - _b[5] * _tmp47 + _tmp38 - _tmp39 + _tmp53;
  const Scalar _tmp55 = -_a[5] * _tmp5 + _b[5] * _tmp5;
  const Scalar _tmp56 = _tmp30 + _tmp55;
  const Scalar _tmp57 =
      _tmp52 * sqrt_info(0, 2) + _tmp54 * sqrt_info(0, 1) + _tmp56 * sqrt_info(0, 0);
  const Scalar _tmp58 = (Scalar(1) / Scalar(2)) * _a[3];
  const Scalar _tmp59 = -_a[6] * _tmp20 + _b[6] * _tmp20;
  const Scalar _tmp60 = -_tmp50 + _tmp51 + _tmp59;
  const Scalar _tmp61 = _tmp34 - _tmp35 + _tmp53;
  const Scalar _tmp62 = _b[6] * _tmp5;
  const Scalar _tmp63 = _a[6] * _tmp5;
  const Scalar _tmp64 = _tmp43 - _tmp62 + _tmp63;
  const Scalar _tmp65 =
      _tmp60 * sqrt_info(0, 1) + _tmp61 * sqrt_info(0, 2) + _tmp64 * sqrt_info(0, 0);
  const Scalar _tmp66 = (Scalar(1) / Scalar(2)) * _a[0];
  const Scalar _tmp67 = 4 * _a[2];
  const Scalar _tmp68 = _a[2] * _tmp36 - _b[4] * _tmp67 + _tmp48 - _tmp49 + _tmp59;
  const Scalar _tmp69 = _tmp31 + _tmp55;
  const Scalar _tmp70 = _a[5] * _tmp67 - _b[5] * _tmp67 - _tmp41 + _tmp42 + _tmp62 - _tmp63;
  const Scalar _tmp71 =
      _tmp68 * sqrt_info(0, 0) + _tmp69 * sqrt_info(0, 2) + _tmp70 * sqrt_info(0, 1);
  const Scalar _tmp72 = (Scalar(1) / Scalar(2)) * _a[1];
  const Scalar _tmp73 = -_tmp6;
  const Scalar _tmp74 = _tmp73 + _tmp8;
  const Scalar _tmp75 = _tmp2 - 1;
  const Scalar _tmp76 = _tmp0 + _tmp75;
  const Scalar _tmp77 = -_tmp12;
  const Scalar _tmp78 = _tmp11 + _tmp77;
  const Scalar _tmp79 = _tmp18 + _tmp73;
  const Scalar _tmp80 = _tmp15 + _tmp75;
  const Scalar _tmp81 = -_tmp22;
  const Scalar _tmp82 = _tmp21 + _tmp81;
  const Scalar _tmp83 = _tmp0 + _tmp15 - 1;
  const Scalar _tmp84 = _tmp26 + _tmp81;
  const Scalar _tmp85 = _tmp10 + _tmp77;
  const Scalar _tmp86 =
      _tmp32 * sqrt_info(1, 1) + _tmp40 * sqrt_info(1, 0) + _tmp44 * sqrt_info(1, 2);
  const Scalar _tmp87 =
      _tmp52 * sqrt_info(1, 2) + _tmp54 * sqrt_info(1, 1) + _tmp56 * sqrt_info(1, 0);
  const Scalar _tmp88 = (Scalar(1) / Scalar(2)) * _tmp87;
  const Scalar _tmp89 =
      _tmp60 * sqrt_info(1, 1) + _tmp61 * sqrt_info(1, 2) + _tmp64 * sqrt_info(1, 0);
  const Scalar _tmp90 =
      _tmp68 * sqrt_info(1, 0) + _tmp69 * sqrt_info(1, 2) + _tmp70 * sqrt_info(1, 1);
  const Scalar _tmp91 = (Scalar(1) / Scalar(2)) * _tmp90;
  const Scalar _tmp92 =
      _tmp32 * sqrt_info(2, 1) + _tmp40 * sqrt_info(2, 0) + _tmp44 * sqrt_info(2, 2);
  const Scalar _tmp93 =
      _tmp52 * sqrt_info(2, 2) + _tmp54 * sqrt_info(2, 1) + _tmp56 * sqrt_info(2, 0);
  const Scalar _tmp94 = (Scalar(1) / Scalar(2)) * _tmp93;
  const Scalar _tmp95 =
      _tmp60 * sqrt_info(2, 1) + _tmp61 * sqrt_info(2, 2) + _tmp64 * sqrt_info(2, 0);
  const Scalar _tmp96 = (Scalar(1) / Scalar(2)) * _tmp95;
  const Scalar _tmp97 =
      _tmp68 * sqrt_info(2, 0) + _tmp69 * sqrt_info(2, 2) + _tmp70 * sqrt_info(2, 1);

  // Output terms (2)
  if (res != nullptr) {
    Eigen::Matrix<Scalar, 3, 1>& _res = (*res);

    _res(0, 0) = _tmp14 * sqrt_info(0, 0) + _tmp24 * sqrt_info(0, 1) + _tmp29 * sqrt_info(0, 2);
    _res(1, 0) = _tmp14 * sqrt_info(1, 0) + _tmp24 * sqrt_info(1, 1) + _tmp29 * sqrt_info(1, 2);
    _res(2, 0) = _tmp14 * sqrt_info(2, 0) + _tmp24 * sqrt_info(2, 1) + _tmp29 * sqrt_info(2, 2);
  }

  if (jacobian != nullptr) {
    Eigen::Matrix<Scalar, 3, 12>& _jacobian = (*jacobian);

    _jacobian(0, 0) = _tmp45 * _tmp46 + _tmp57 * _tmp58 - _tmp65 * _tmp66 - _tmp71 * _tmp72;
    _jacobian(0, 1) = _tmp45 * _tmp58 - _tmp46 * _tmp57 - _tmp65 * _tmp72 + _tmp66 * _tmp71;
    _jacobian(0, 2) = -_tmp45 * _tmp66 - _tmp46 * _tmp65 + _tmp57 * _tmp72 + _tmp58 * _tmp71;
    _jacobian(0, 3) =
        _tmp74 * sqrt_info(0, 1) + _tmp76 * sqrt_info(0, 0) + _tmp78 * sqrt_info(0, 2);
    _jacobian(0, 4) =
        _tmp79 * sqrt_info(0, 0) + _tmp80 * sqrt_info(0, 1) + _tmp82 * sqrt_info(0, 2);
    _jacobian(0, 5) =
        _tmp83 * sqrt_info(0, 2) + _tmp84 * sqrt_info(0, 1) + _tmp85 * sqrt_info(0, 0);
    _jacobian(0, 6) = 0;
    _jacobian(0, 7) = 0;
    _jacobian(0, 8) = 0;
    _jacobian(0, 9) = _tmp19 * sqrt_info(0, 1) + _tmp28 * sqrt_info(0, 2) + _tmp4 * sqrt_info(0, 0);
    _jacobian(0, 10) =
        _tmp17 * sqrt_info(0, 1) + _tmp27 * sqrt_info(0, 2) + _tmp9 * sqrt_info(0, 0);
    _jacobian(0, 11) =
        _tmp13 * sqrt_info(0, 0) + _tmp23 * sqrt_info(0, 1) + _tmp25 * sqrt_info(0, 2);
    _jacobian(1, 0) = _a[3] * _tmp88 + _tmp46 * _tmp86 - _tmp66 * _tmp89 - _tmp72 * _tmp90;
    _jacobian(1, 1) = _a[0] * _tmp91 - _a[2] * _tmp88 + _tmp58 * _tmp86 - _tmp72 * _tmp89;
    _jacobian(1, 2) = _a[3] * _tmp91 - _tmp46 * _tmp89 - _tmp66 * _tmp86 + _tmp72 * _tmp87;
    _jacobian(1, 3) =
        _tmp74 * sqrt_info(1, 1) + _tmp76 * sqrt_info(1, 0) + _tmp78 * sqrt_info(1, 2);
    _jacobian(1, 4) =
        _tmp79 * sqrt_info(1, 0) + _tmp80 * sqrt_info(1, 1) + _tmp82 * sqrt_info(1, 2);
    _jacobian(1, 5) =
        _tmp83 * sqrt_info(1, 2) + _tmp84 * sqrt_info(1, 1) + _tmp85 * sqrt_info(1, 0);
    _jacobian(1, 6) = 0;
    _jacobian(1, 7) = 0;
    _jacobian(1, 8) = 0;
    _jacobian(1, 9) = _tmp19 * sqrt_info(1, 1) + _tmp28 * sqrt_info(1, 2) + _tmp4 * sqrt_info(1, 0);
    _jacobian(1, 10) =
        _tmp17 * sqrt_info(1, 1) + _tmp27 * sqrt_info(1, 2) + _tmp9 * sqrt_info(1, 0);
    _jacobian(1, 11) =
        _tmp13 * sqrt_info(1, 0) + _tmp23 * sqrt_info(1, 1) + _tmp25 * sqrt_info(1, 2);
    _jacobian(2, 0) = -_a[0] * _tmp96 + _a[3] * _tmp94 + _tmp46 * _tmp92 - _tmp72 * _tmp97;
    _jacobian(2, 1) = -_a[2] * _tmp94 + _tmp58 * _tmp92 + _tmp66 * _tmp97 - _tmp72 * _tmp95;
    _jacobian(2, 2) = -_a[2] * _tmp96 + _tmp58 * _tmp97 - _tmp66 * _tmp92 + _tmp72 * _tmp93;
    _jacobian(2, 3) =
        _tmp74 * sqrt_info(2, 1) + _tmp76 * sqrt_info(2, 0) + _tmp78 * sqrt_info(2, 2);
    _jacobian(2, 4) =
        _tmp79 * sqrt_info(2, 0) + _tmp80 * sqrt_info(2, 1) + _tmp82 * sqrt_info(2, 2);
    _jacobian(2, 5) =
        _tmp83 * sqrt_info(2, 2) + _tmp84 * sqrt_info(2, 1) + _tmp85 * sqrt_info(2, 0);
    _jacobian(2, 6) = 0;
    _jacobian(2, 7) = 0;
    _jacobian(2, 8) = 0;
    _jacobian(2, 9) = _tmp19 * sqrt_info(2, 1) + _tmp28 * sqrt_info(2, 2) + _tmp4 * sqrt_info(2, 0);
    _jacobian(2, 10) =
        _tmp17 * sqrt_info(2, 1) + _tmp27 * sqrt_info(2, 2) + _tmp9 * sqrt_info(2, 0);
    _jacobian(2, 11) =
        _tmp13 * sqrt_info(2, 0) + _tmp23 * sqrt_info(2, 1) + _tmp25 * sqrt_info(2, 2);
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
