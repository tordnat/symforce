// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/ops/CLASS/storage_ops.cc.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#include "./storage_ops.h"

#include <algorithm>

#include <Eigen/Dense>

#include <sym/polynomial_camera_cal.h>

namespace sym {

template <typename ScalarType>
void StorageOps<PolynomialCameraCal<ScalarType>>::ToStorage(
    const PolynomialCameraCal<ScalarType>& a, ScalarType* out) {
  assert(out != nullptr);
  std::copy_n(a.Data().data(), a.StorageDim(), out);
}

template <typename ScalarType>
PolynomialCameraCal<ScalarType> StorageOps<PolynomialCameraCal<ScalarType>>::FromStorage(
    const ScalarType* data) {
  assert(data != nullptr);
  return PolynomialCameraCal<ScalarType>(
      Eigen::Map<const typename PolynomialCameraCal<ScalarType>::DataVec>(data));
}

}  // namespace sym

// Explicit instantiation
template struct sym::StorageOps<sym::PolynomialCameraCal<double>>;
template struct sym::StorageOps<sym::PolynomialCameraCal<float>>;
