//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./spherical_camera_cal.h"

// Explicit instantiation
template class sym::SphericalCameraCal<double>;
template class sym::SphericalCameraCal<float>;

// Camera operation implementations
namespace sym {

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> SphericalCameraCal<Scalar>::FocalLength() const {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 9, 1>& _self = Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _focal_length;

  _focal_length(0, 0) = _self[0];
  _focal_length(1, 0) = _self[1];

  return _focal_length;
}

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> SphericalCameraCal<Scalar>::PrincipalPoint() const {
  // Total ops: 0

  // Input arrays
  const Eigen::Matrix<Scalar, 9, 1>& _self = Data();

  // Intermediate terms (0)

  // Output terms (1)
  Eigen::Matrix<Scalar, 2, 1> _principal_point;

  _principal_point(0, 0) = _self[2];
  _principal_point(1, 0) = _self[3];

  return _principal_point;
}

template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> SphericalCameraCal<Scalar>::PixelFromCameraPoint(
    const Eigen::Matrix<Scalar, 3, 1>& point, const Scalar epsilon, Scalar* const is_valid) const {
  // Total ops: 33

  // Input arrays
  const Eigen::Matrix<Scalar, 9, 1>& _self = Data();

  // Intermediate terms (4)
  const Scalar _tmp0 =
      std::sqrt(epsilon + std::pow<Scalar>(point(0, 0), 2) + std::pow<Scalar>(point(1, 0), 2));
  const Scalar _tmp1 = std::atan2(_tmp0, point(2, 0));
  const Scalar _tmp2 = std::min<Scalar>(_tmp1, _self[4] - epsilon);
  const Scalar _tmp3 =
      (_self[5] *
           [&]() {
             const Scalar base = _tmp2;
             return base * base * base;
           }() +
       _self[6] * std::pow<Scalar>(_tmp2, 5) + _self[7] * std::pow<Scalar>(_tmp2, 7) +
       _self[8] * std::pow<Scalar>(_tmp2, 9) + _tmp2) /
      _tmp0;

  // Output terms (2)
  Eigen::Matrix<Scalar, 2, 1> _pixel;

  _pixel(0, 0) = _self[0] * _tmp3 * point(0, 0) + _self[2];
  _pixel(1, 0) = _self[1] * _tmp3 * point(1, 0) + _self[3];

  if (is_valid != nullptr) {
    Scalar& _is_valid = (*is_valid);

    _is_valid = std::max<Scalar>(0, (((_self[4] - _tmp1) > 0) - ((_self[4] - _tmp1) < 0)));
  }

  return _pixel;
}

}  // namespace sym

// Print implementations
std::ostream& operator<<(std::ostream& os, const sym::SphericalCameraCald& a) {
  const Eigen::IOFormat fmt(Eigen::StreamPrecision, Eigen::DontAlignCols, ", ", "\n", "[", "]");
  os << "<SphericalCameraCald " << a.Data().transpose().format(fmt) << ">";
  return os;
}
std::ostream& operator<<(std::ostream& os, const sym::SphericalCameraCalf& a) {
  const Eigen::IOFormat fmt(Eigen::StreamPrecision, Eigen::DontAlignCols, ", ", "\n", "[", "]");
  os << "<SphericalCameraCalf " << a.Data().transpose().format(fmt) << ">";
  return os;
}

// Concept implementations for this class
#include "./ops/spherical_camera_cal/storage_ops.cc"