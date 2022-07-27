// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cam_package/CLASS.cc.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./polynomial_camera_cal.h"

// Camera operation implementations
namespace sym {

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> PolynomialCameraCal<Scalar>::FocalLength() const {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 8, 1>& _self = Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _focal_length;

  _focal_length(0, 0) = _self[0];
  _focal_length(1, 0) = _self[1];

  return _focal_length;
}

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> PolynomialCameraCal<Scalar>::PrincipalPoint() const {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 8, 1>& _self = Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _principal_point;

  _principal_point(0, 0) = _self[2];
  _principal_point(1, 0) = _self[3];

  return _principal_point;
}

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> PolynomialCameraCal<Scalar>::PixelFromCameraPoint(
    const Eigen::Matrix<Scalar, 3, 1>& point, const Scalar epsilon, Scalar* const is_valid) const {
  // Total ops: 33

  // Input arrays
  const Eigen::Matrix<Scalar, 8, 1>& _self = Data();

  // Intermediate terms (4)
  const Scalar _tmp0 = std::max<Scalar>(epsilon, std::fabs(point(2, 0)));
  const Scalar _tmp1 = std::pow(_tmp0, Scalar(-2));
  const Scalar _tmp2 =
      _tmp1 * std::pow(point(0, 0), Scalar(2)) + _tmp1 * std::pow(point(1, 0), Scalar(2)) + epsilon;
  const Scalar _tmp3 =
      (Scalar(1.0) * _self[5] * _tmp2 + Scalar(1.0) * _self[6] * std::pow(_tmp2, Scalar(2)) +
       Scalar(1.0) * _self[7] *
           [&]() {
             const Scalar base = _tmp2;
             return base * base * base;
           }() +
       Scalar(1.0)) /
      _tmp0;

  // Output terms (2)
  Eigen::Matrix<Scalar, 2, 1> _pixel;

  _pixel(0, 0) = _self[0] * _tmp3 * point(0, 0) + _self[2];
  _pixel(1, 0) = _self[1] * _tmp3 * point(1, 0) + _self[3];

  if (is_valid != nullptr) {
    Scalar& _is_valid = (*is_valid);

    _is_valid = std::max<Scalar>(0, std::min<Scalar>((((point(2, 0)) > 0) - ((point(2, 0)) < 0)),
                                                     (((_self[4] - std::sqrt(_tmp2)) > 0) -
                                                      ((_self[4] - std::sqrt(_tmp2)) < 0))));
  }

  return _pixel;
}

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> PolynomialCameraCal<Scalar>::PixelFromCameraPointWithJacobians(
    const Eigen::Matrix<Scalar, 3, 1>& point, const Scalar epsilon, Scalar* const is_valid,
    Eigen::Matrix<Scalar, 2, 7>* const pixel_D_cal,
    Eigen::Matrix<Scalar, 2, 3>* const pixel_D_point) const {
  // Total ops: 104

  // Input arrays
  const Eigen::Matrix<Scalar, 8, 1>& _self = Data();

  // Intermediate terms (37)
  const Scalar _tmp0 = std::pow(point(0, 0), Scalar(2));
  const Scalar _tmp1 = std::fabs(point(2, 0));
  const Scalar _tmp2 = std::max<Scalar>(_tmp1, epsilon);
  const Scalar _tmp3 = std::pow(_tmp2, Scalar(-2));
  const Scalar _tmp4 = _tmp0 * _tmp3;
  const Scalar _tmp5 = std::pow(point(1, 0), Scalar(2));
  const Scalar _tmp6 = _tmp3 * _tmp5;
  const Scalar _tmp7 = _tmp4 + _tmp6 + epsilon;
  const Scalar _tmp8 = Scalar(1.0) * _self[5];
  const Scalar _tmp9 = Scalar(1.0) * [&]() {
    const Scalar base = _tmp7;
    return base * base * base;
  }();
  const Scalar _tmp10 = std::pow(_tmp7, Scalar(2));
  const Scalar _tmp11 = Scalar(1.0) * _tmp10;
  const Scalar _tmp12 = _self[6] * _tmp11 + _self[7] * _tmp9 + _tmp7 * _tmp8 + Scalar(1.0);
  const Scalar _tmp13 = Scalar(1.0) / (_tmp2);
  const Scalar _tmp14 = _tmp12 * _tmp13;
  const Scalar _tmp15 = _tmp14 * point(0, 0);
  const Scalar _tmp16 = _self[1] * _tmp14;
  const Scalar _tmp17 = (((point(2, 0)) > 0) - ((point(2, 0)) < 0));
  const Scalar _tmp18 =
      _tmp13 * (Scalar(1.0) * _tmp4 + Scalar(1.0) * _tmp6 + Scalar(1.0) * epsilon);
  const Scalar _tmp19 = _self[0] * point(0, 0);
  const Scalar _tmp20 = _self[1] * point(1, 0);
  const Scalar _tmp21 = _tmp13 * _tmp19;
  const Scalar _tmp22 = _tmp13 * _tmp20;
  const Scalar _tmp23 = _tmp3 * point(0, 0);
  const Scalar _tmp24 = Scalar(2.0) * _self[5];
  const Scalar _tmp25 = _self[6] * _tmp7;
  const Scalar _tmp26 = Scalar(4.0) * _tmp25;
  const Scalar _tmp27 = _self[7] * _tmp10;
  const Scalar _tmp28 = Scalar(6.0) * _tmp27;
  const Scalar _tmp29 = _tmp13 * (_tmp23 * _tmp24 + _tmp23 * _tmp26 + _tmp23 * _tmp28);
  const Scalar _tmp30 = _tmp3 * point(1, 0);
  const Scalar _tmp31 = _tmp13 * (_tmp24 * _tmp30 + _tmp26 * _tmp30 + _tmp28 * _tmp30);
  const Scalar _tmp32 = _tmp17 * ((((_tmp1 - epsilon) > 0) - ((_tmp1 - epsilon) < 0)) + 1);
  const Scalar _tmp33 = (Scalar(1) / Scalar(2)) * _tmp12 * _tmp3 * _tmp32;
  const Scalar _tmp34 = _tmp32 / [&]() {
    const Scalar base = _tmp2;
    return base * base * base;
  }();
  const Scalar _tmp35 = -_tmp0 * _tmp34 - _tmp34 * _tmp5;
  const Scalar _tmp36 =
      _tmp13 * (Scalar(2.0) * _tmp25 * _tmp35 + Scalar(3.0) * _tmp27 * _tmp35 + _tmp35 * _tmp8);

  // Output terms (4)
  Eigen::Matrix<Scalar, 2, 1> _pixel;

  _pixel(0, 0) = _self[0] * _tmp15 + _self[2];
  _pixel(1, 0) = _self[3] + _tmp16 * point(1, 0);

  if (is_valid != nullptr) {
    Scalar& _is_valid = (*is_valid);

    _is_valid =
        std::max<Scalar>(0, std::min<Scalar>(_tmp17, (((_self[4] - std::sqrt(_tmp7)) > 0) -
                                                      ((_self[4] - std::sqrt(_tmp7)) < 0))));
  }

  if (pixel_D_cal != nullptr) {
    Eigen::Matrix<Scalar, 2, 7>& _pixel_D_cal = (*pixel_D_cal);

    _pixel_D_cal(0, 0) = _tmp15;
    _pixel_D_cal(1, 0) = 0;
    _pixel_D_cal(0, 1) = 0;
    _pixel_D_cal(1, 1) = _tmp14 * point(1, 0);
    _pixel_D_cal(0, 2) = 1;
    _pixel_D_cal(1, 2) = 0;
    _pixel_D_cal(0, 3) = 0;
    _pixel_D_cal(1, 3) = 1;
    _pixel_D_cal(0, 4) = _tmp18 * _tmp19;
    _pixel_D_cal(1, 4) = _tmp18 * _tmp20;
    _pixel_D_cal(0, 5) = _tmp11 * _tmp21;
    _pixel_D_cal(1, 5) = _tmp11 * _tmp22;
    _pixel_D_cal(0, 6) = _tmp21 * _tmp9;
    _pixel_D_cal(1, 6) = _tmp22 * _tmp9;
  }

  if (pixel_D_point != nullptr) {
    Eigen::Matrix<Scalar, 2, 3>& _pixel_D_point = (*pixel_D_point);

    _pixel_D_point(0, 0) = _self[0] * _tmp14 + _tmp19 * _tmp29;
    _pixel_D_point(1, 0) = _tmp20 * _tmp29;
    _pixel_D_point(0, 1) = _tmp19 * _tmp31;
    _pixel_D_point(1, 1) = _tmp16 + _tmp20 * _tmp31;
    _pixel_D_point(0, 2) = -_tmp19 * _tmp33 + _tmp19 * _tmp36;
    _pixel_D_point(1, 2) = -_tmp20 * _tmp33 + _tmp20 * _tmp36;
  }

  return _pixel;
}

// Print implementations
std::ostream& operator<<(std::ostream& os, const PolynomialCameraCald& a) {
  const Eigen::IOFormat fmt(Eigen::StreamPrecision, Eigen::DontAlignCols, ", ", "\n", "[", "]");
  os << "<PolynomialCameraCald " << a.Data().transpose().format(fmt) << ">";
  return os;
}

std::ostream& operator<<(std::ostream& os, const PolynomialCameraCalf& a) {
  const Eigen::IOFormat fmt(Eigen::StreamPrecision, Eigen::DontAlignCols, ", ", "\n", "[", "]");
  os << "<PolynomialCameraCalf " << a.Data().transpose().format(fmt) << ">";
  return os;
}

}  // namespace sym

// Concept implementations for this class
#include "./ops/polynomial_camera_cal/storage_ops.h"

// Explicit instantiation
template class sym::PolynomialCameraCal<double>;
template class sym::PolynomialCameraCal<float>;
