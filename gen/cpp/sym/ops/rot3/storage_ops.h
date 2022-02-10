// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cpp_templates/ops/CLASS/storage_ops.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <lcmtypes/sym/type_t.hpp>

#include "../storage_ops.h"

// Forward declare class, without including header
// We could include the class header here, but we forward declare to be consistent
// with "./group_ops.h", which must forward declare. See that file for an explanation.
namespace sym {
template <typename ScalarType>
class Rot3;
}  // namespace sym

namespace sym {

/**
 * C++ StorageOps implementation for <class 'symforce.geo.rot3.Rot3'>.
 */
template <typename ScalarType>
struct StorageOps<Rot3<ScalarType>> {
  using T = Rot3<ScalarType>;
  using Scalar = ScalarType;

  static constexpr int32_t StorageDim() {
    return 4;
  }

  static void ToStorage(const T& a, ScalarType* out);
  static T FromStorage(const ScalarType* data);

  static constexpr type_t TypeEnum() {
    return type_t::ROT3;
  }

  template <typename Generator>
  static T Random(Generator& gen) {
    return T::Random(gen);
  }
};

}  // namespace sym

// Explicit instantiation
extern template struct sym::StorageOps<sym::Rot3<double>>;
extern template struct sym::StorageOps<sym::Rot3<float>>;
