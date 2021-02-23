//  ----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <geo/rot3.h>

namespace geo {
namespace rot3 {

/**
 * C++ GroupOps implementation for <class 'symforce.geo.rot3.Rot3'>.
 */
template <typename Scalar>
struct GroupOps {
  using SelfJacobian = Eigen::Matrix<Scalar, geo::LieGroupOps<Rot3<Scalar>>::TangentDim(),
                                     geo::LieGroupOps<Rot3<Scalar>>::TangentDim()>;

  static geo::Rot3<Scalar> Identity();
  static geo::Rot3<Scalar> Inverse(const geo::Rot3<Scalar>& a);
  static geo::Rot3<Scalar> Compose(const geo::Rot3<Scalar>& a, const geo::Rot3<Scalar>& b);
  static geo::Rot3<Scalar> Between(const geo::Rot3<Scalar>& a, const geo::Rot3<Scalar>& b);
  static geo::Rot3<Scalar> InverseWithJacobian(
      const geo::Rot3<Scalar>& a, Eigen::Matrix<Scalar, 3, 3>* const res_D_a = nullptr);
  static geo::Rot3<Scalar> ComposeWithJacobians(
      const geo::Rot3<Scalar>& a, const geo::Rot3<Scalar>& b,
      Eigen::Matrix<Scalar, 3, 3>* const res_D_a = nullptr,
      Eigen::Matrix<Scalar, 3, 3>* const res_D_b = nullptr);
  static geo::Rot3<Scalar> BetweenWithJacobians(
      const geo::Rot3<Scalar>& a, const geo::Rot3<Scalar>& b,
      Eigen::Matrix<Scalar, 3, 3>* const res_D_a = nullptr,
      Eigen::Matrix<Scalar, 3, 3>* const res_D_b = nullptr);
};

}  // namespace rot3

// Wrapper to specialize the public concept
template <>
struct GroupOps<Rot3<double>> : public rot3::GroupOps<double> {};
template <>
struct GroupOps<Rot3<float>> : public rot3::GroupOps<float> {};

}  // namespace geo