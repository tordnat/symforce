// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     geo_package/ops/matrix/lie_group_ops.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Dense>

#include "../lie_group_ops.h"

namespace sym {

/**
 * C++ LieGroupOps implementation for matrices.
 */
template <typename ScalarType, int Rows, int Cols>
struct LieGroupOps<Eigen::Matrix<ScalarType, Rows, Cols>>
    : public internal::LieGroupOpsBase<Eigen::Matrix<ScalarType, Rows, Cols>, ScalarType> {
  using Scalar = ScalarType;
  using T = Eigen::Matrix<Scalar, Rows, Cols>;
  static_assert(std::is_floating_point<ScalarType>::value, "");

  static constexpr int32_t TangentDim() {
    if (Rows == Eigen::Dynamic) {
      return Eigen::Dynamic;
    }

    if (Cols == Eigen::Dynamic) {
      return Eigen::Dynamic;
    }

    return Rows * Cols;
  }

  using TangentVec = Eigen::Matrix<Scalar, TangentDim(), 1>;
  static T FromTangent(const TangentVec& vec, const Scalar epsilon) {
    return Eigen::Map<const T>(vec.data(), Rows, Cols);
  }
  static TangentVec ToTangent(const T& a, const Scalar epsilon) {
    return Eigen::Map<const TangentVec>(a.data(), a.size());
  }
  static T Retract(const T& a, const TangentVec& vec, const Scalar epsilon) {
    return a + Eigen::Map<const T>(vec.data(), a.rows(), a.cols());
  }
  static TangentVec LocalCoordinates(const T& a, const T& b, const Scalar epsilon) {
    return (Eigen::Map<const TangentVec>(b.data(), b.size()) -
            Eigen::Map<const TangentVec>(a.data(), a.size()));
  }
};

}  // namespace sym

// Explicit instantiation
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 1, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 2, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 3, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 4, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 5, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 6, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 7, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 8, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 9, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 2, 2>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 3, 3>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 4, 4>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 5, 5>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 6, 6>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 7, 7>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 8, 8>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<double, 9, 9>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 1, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 2, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 3, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 4, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 5, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 6, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 7, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 8, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 9, 1>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 2, 2>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 3, 3>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 4, 4>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 5, 5>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 6, 6>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 7, 7>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 8, 8>>;
extern template struct sym::LieGroupOps<Eigen::Matrix<float, 9, 9>>;
