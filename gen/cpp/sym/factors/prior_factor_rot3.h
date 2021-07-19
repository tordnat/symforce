// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <sym/rot3.h>

namespace sym {

/**
 * Residual that penalizes the difference between a value and prior (desired / measured value).
 *
 * In vector space terms that would be:
 *     prior - value
 *
 * In lie group terms:
 *     to_tangent(compose(inverse(value), prior))
 *
 * Args:
 *     sqrt_info: Square root information matrix to whiten residual. This can be computed from
 *                a covariance matrix as the cholesky decomposition of the inverse. In the case
 *                of a diagonal it will contain 1/sigma values. Must match the tangent dim.
 *     jacobian: (3x3) jacobian of res wrt arg value (3)
 */
template <typename Scalar>
void PriorFactorRot3(const sym::Rot3<Scalar>& value, const sym::Rot3<Scalar>& prior,
                     const Eigen::Matrix<Scalar, 3, 3>& sqrt_info, const Scalar epsilon,
                     Eigen::Matrix<Scalar, 3, 1>* const res = nullptr,
                     Eigen::Matrix<Scalar, 3, 3>* const jacobian = nullptr) {
  // Total ops: 463

  // Input arrays
  const Eigen::Matrix<Scalar, 4, 1>& _value = value.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _prior = prior.Data();

  // Intermediate terms (68)
  const Scalar _tmp0 =
      _prior[0] * _value[0] + _prior[1] * _value[1] + _prior[2] * _value[2] + _prior[3] * _value[3];
  const Scalar _tmp1 = (((_tmp0) > 0) - ((_tmp0) < 0));
  const Scalar _tmp2 = 2 * std::min<Scalar>(0, _tmp1) + 1;
  const Scalar _tmp3 = _tmp2 * (_prior[0] * _value[2] - _prior[1] * _value[3] -
                                _prior[2] * _value[0] + _prior[3] * _value[1]);
  const Scalar _tmp4 = _tmp3 * sqrt_info(0, 1);
  const Scalar _tmp5 = std::fabs(_tmp0);
  const Scalar _tmp6 = 1 - epsilon;
  const Scalar _tmp7 = std::min<Scalar>(_tmp5, _tmp6);
  const Scalar _tmp8 = std::acos(_tmp7);
  const Scalar _tmp9 = 1 - std::pow<Scalar>(_tmp7, 2);
  const Scalar _tmp10 = 2 * _tmp8 / std::sqrt(_tmp9);
  const Scalar _tmp11 = -_prior[0] * _value[3] - _prior[1] * _value[2] + _prior[2] * _value[1] +
                        _prior[3] * _value[0];
  const Scalar _tmp12 = _tmp10 * _tmp2;
  const Scalar _tmp13 = _tmp12 * sqrt_info(0, 0);
  const Scalar _tmp14 = -_prior[0] * _value[1] + _prior[1] * _value[0] - _prior[2] * _value[3] +
                        _prior[3] * _value[2];
  const Scalar _tmp15 = _tmp12 * _tmp14;
  const Scalar _tmp16 = _tmp10 * _tmp3;
  const Scalar _tmp17 = _tmp12 * sqrt_info(1, 0);
  const Scalar _tmp18 = _tmp12 * sqrt_info(2, 0);
  const Scalar _tmp19 = _tmp11 * _tmp2;
  const Scalar _tmp20 = _tmp19 * sqrt_info(0, 0);
  const Scalar _tmp21 = _tmp1 * ((((-_tmp5 + _tmp6) > 0) - ((-_tmp5 + _tmp6) < 0)) + 1);
  const Scalar _tmp22 = _tmp21 * _tmp7 * _tmp8 / (_tmp9 * std::sqrt(_tmp9));
  const Scalar _tmp23 = _prior[3] * _tmp22;
  const Scalar _tmp24 = _tmp21 / _tmp9;
  const Scalar _tmp25 = _prior[3] * _tmp24;
  const Scalar _tmp26 = _tmp14 * _tmp2;
  const Scalar _tmp27 = _tmp26 * sqrt_info(0, 2);
  const Scalar _tmp28 = _prior[2] * _tmp12;
  const Scalar _tmp29 = _prior[1] * _tmp12;
  const Scalar _tmp30 =
      -Scalar(1) / Scalar(2) * _prior[0] * _tmp13 + (Scalar(1) / Scalar(2)) * _tmp20 * _tmp23 -
      Scalar(1) / Scalar(2) * _tmp20 * _tmp25 + (Scalar(1) / Scalar(2)) * _tmp23 * _tmp27 +
      (Scalar(1) / Scalar(2)) * _tmp23 * _tmp4 - Scalar(1) / Scalar(2) * _tmp25 * _tmp27 -
      Scalar(1) / Scalar(2) * _tmp25 * _tmp4 - Scalar(1) / Scalar(2) * _tmp28 * sqrt_info(0, 2) -
      Scalar(1) / Scalar(2) * _tmp29 * sqrt_info(0, 1);
  const Scalar _tmp31 = _prior[1] * _tmp22;
  const Scalar _tmp32 = _tmp24 * _tmp27;
  const Scalar _tmp33 = _prior[1] * _tmp24;
  const Scalar _tmp34 = _prior[3] * _tmp12;
  const Scalar _tmp35 = _prior[0] * _tmp12;
  const Scalar _tmp36 = -_prior[1] * _tmp32 + _tmp20 * _tmp31 - _tmp20 * _tmp33 + _tmp27 * _tmp31 +
                        _tmp28 * sqrt_info(0, 0) + _tmp31 * _tmp4 - _tmp33 * _tmp4 +
                        _tmp34 * sqrt_info(0, 1) - _tmp35 * sqrt_info(0, 2);
  const Scalar _tmp37 = (Scalar(1) / Scalar(2)) * _tmp36;
  const Scalar _tmp38 = _prior[2] * _tmp22;
  const Scalar _tmp39 = _prior[2] * _tmp24;
  const Scalar _tmp40 = _tmp20 * _tmp38 - _tmp20 * _tmp39 + _tmp27 * _tmp38 - _tmp27 * _tmp39 -
                        _tmp29 * sqrt_info(0, 0) + _tmp34 * sqrt_info(0, 2) +
                        _tmp35 * sqrt_info(0, 1) + _tmp38 * _tmp4 - _tmp39 * _tmp4;
  const Scalar _tmp41 = (Scalar(1) / Scalar(2)) * _tmp40;
  const Scalar _tmp42 = _prior[0] * _tmp22;
  const Scalar _tmp43 = _prior[0] * _tmp24;
  const Scalar _tmp44 = -_prior[0] * _tmp32 + _tmp20 * _tmp42 - _tmp20 * _tmp43 + _tmp27 * _tmp42 -
                        _tmp28 * sqrt_info(0, 1) + _tmp29 * sqrt_info(0, 2) +
                        _tmp34 * sqrt_info(0, 0) + _tmp4 * _tmp42 - _tmp4 * _tmp43;
  const Scalar _tmp45 = (Scalar(1) / Scalar(2)) * _tmp44;
  const Scalar _tmp46 = (Scalar(1) / Scalar(2)) * _value[0];
  const Scalar _tmp47 = (Scalar(1) / Scalar(2)) * _value[2];
  const Scalar _tmp48 = _tmp19 * sqrt_info(1, 0);
  const Scalar _tmp49 = _tmp26 * sqrt_info(1, 2);
  const Scalar _tmp50 = _tmp3 * sqrt_info(1, 1);
  const Scalar _tmp51 =
      -Scalar(1) / Scalar(2) * _prior[0] * _tmp17 + (Scalar(1) / Scalar(2)) * _tmp23 * _tmp48 +
      (Scalar(1) / Scalar(2)) * _tmp23 * _tmp49 + (Scalar(1) / Scalar(2)) * _tmp23 * _tmp50 -
      Scalar(1) / Scalar(2) * _tmp25 * _tmp48 - Scalar(1) / Scalar(2) * _tmp25 * _tmp49 -
      Scalar(1) / Scalar(2) * _tmp25 * _tmp50 - Scalar(1) / Scalar(2) * _tmp28 * sqrt_info(1, 2) -
      Scalar(1) / Scalar(2) * _tmp29 * sqrt_info(1, 1);
  const Scalar _tmp52 = _tmp28 * sqrt_info(1, 0) + _tmp31 * _tmp48 + _tmp31 * _tmp49 +
                        _tmp31 * _tmp50 - _tmp33 * _tmp48 - _tmp33 * _tmp49 - _tmp33 * _tmp50 +
                        _tmp34 * sqrt_info(1, 1) - _tmp35 * sqrt_info(1, 2);
  const Scalar _tmp53 = (Scalar(1) / Scalar(2)) * _tmp52;
  const Scalar _tmp54 = -_tmp28 * sqrt_info(1, 1) + _tmp29 * sqrt_info(1, 2) +
                        _tmp34 * sqrt_info(1, 0) + _tmp42 * _tmp48 + _tmp42 * _tmp49 +
                        _tmp42 * _tmp50 - _tmp43 * _tmp48 - _tmp43 * _tmp49 - _tmp43 * _tmp50;
  const Scalar _tmp55 = (Scalar(1) / Scalar(2)) * _tmp54;
  const Scalar _tmp56 = -_tmp29 * sqrt_info(1, 0) + _tmp34 * sqrt_info(1, 2) +
                        _tmp35 * sqrt_info(1, 1) + _tmp38 * _tmp48 + _tmp38 * _tmp49 +
                        _tmp38 * _tmp50 - _tmp39 * _tmp48 - _tmp39 * _tmp49 - _tmp39 * _tmp50;
  const Scalar _tmp57 = (Scalar(1) / Scalar(2)) * _tmp56;
  const Scalar _tmp58 = _tmp19 * sqrt_info(2, 0);
  const Scalar _tmp59 = _tmp26 * sqrt_info(2, 2);
  const Scalar _tmp60 = _tmp3 * sqrt_info(2, 1);
  const Scalar _tmp61 = -_tmp28 * sqrt_info(2, 1) + _tmp29 * sqrt_info(2, 2) +
                        _tmp34 * sqrt_info(2, 0) + _tmp42 * _tmp58 + _tmp42 * _tmp59 +
                        _tmp42 * _tmp60 - _tmp43 * _tmp58 - _tmp43 * _tmp59 - _tmp43 * _tmp60;
  const Scalar _tmp62 = (Scalar(1) / Scalar(2)) * _tmp61;
  const Scalar _tmp63 = -_tmp29 * sqrt_info(2, 0) + _tmp34 * sqrt_info(2, 2) +
                        _tmp35 * sqrt_info(2, 1) + _tmp38 * _tmp58 + _tmp38 * _tmp59 +
                        _tmp38 * _tmp60 - _tmp39 * _tmp58 - _tmp39 * _tmp59 - _tmp39 * _tmp60;
  const Scalar _tmp64 = (Scalar(1) / Scalar(2)) * _tmp63;
  const Scalar _tmp65 =
      (Scalar(1) / Scalar(2)) * _prior[2] * _tmp18 + (Scalar(1) / Scalar(2)) * _tmp31 * _tmp58 +
      (Scalar(1) / Scalar(2)) * _tmp31 * _tmp59 + (Scalar(1) / Scalar(2)) * _tmp31 * _tmp60 -
      Scalar(1) / Scalar(2) * _tmp33 * _tmp58 - Scalar(1) / Scalar(2) * _tmp33 * _tmp59 -
      Scalar(1) / Scalar(2) * _tmp33 * _tmp60 + (Scalar(1) / Scalar(2)) * _tmp34 * sqrt_info(2, 1) -
      Scalar(1) / Scalar(2) * _tmp35 * sqrt_info(2, 2);
  const Scalar _tmp66 = -_prior[0] * _tmp18 + _tmp23 * _tmp58 + _tmp23 * _tmp59 + _tmp23 * _tmp60 -
                        _tmp25 * _tmp58 - _tmp25 * _tmp59 - _tmp25 * _tmp60 -
                        _tmp28 * sqrt_info(2, 2) - _tmp29 * sqrt_info(2, 1);
  const Scalar _tmp67 = (Scalar(1) / Scalar(2)) * _tmp66;

  // Output terms (2)
  if (res != nullptr) {
    Eigen::Matrix<Scalar, 3, 1>& _res = (*res);

    _res(0, 0) = _tmp10 * _tmp4 + _tmp11 * _tmp13 + _tmp15 * sqrt_info(0, 2);
    _res(1, 0) = _tmp11 * _tmp17 + _tmp15 * sqrt_info(1, 2) + _tmp16 * sqrt_info(1, 1);
    _res(2, 0) = _tmp11 * _tmp18 + _tmp15 * sqrt_info(2, 2) + _tmp16 * sqrt_info(2, 1);
  }

  if (jacobian != nullptr) {
    Eigen::Matrix<Scalar, 3, 3>& _jacobian = (*jacobian);

    _jacobian(0, 0) =
        -_tmp30 * _value[0] + _tmp37 * _value[2] - _tmp41 * _value[1] + _tmp45 * _value[3];
    _jacobian(0, 1) = -_tmp30 * _value[1] + _tmp37 * _value[3] + _tmp40 * _tmp46 - _tmp44 * _tmp47;
    _jacobian(0, 2) =
        -_tmp30 * _value[2] - _tmp36 * _tmp46 + _tmp41 * _value[3] + _tmp45 * _value[1];
    _jacobian(1, 0) =
        -_tmp51 * _value[0] + _tmp53 * _value[2] + _tmp55 * _value[3] - _tmp57 * _value[1];
    _jacobian(1, 1) = _tmp46 * _tmp56 - _tmp47 * _tmp54 - _tmp51 * _value[1] + _tmp53 * _value[3];
    _jacobian(1, 2) =
        -_tmp46 * _tmp52 - _tmp51 * _value[2] + _tmp55 * _value[1] + _tmp57 * _value[3];
    _jacobian(2, 0) =
        -_tmp46 * _tmp66 + _tmp62 * _value[3] - _tmp64 * _value[1] + _tmp65 * _value[2];
    _jacobian(2, 1) = _tmp46 * _tmp63 - _tmp47 * _tmp61 + _tmp65 * _value[3] - _tmp67 * _value[1];
    _jacobian(2, 2) =
        _tmp62 * _value[1] + _tmp64 * _value[3] - _tmp65 * _value[0] - _tmp67 * _value[2];
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
