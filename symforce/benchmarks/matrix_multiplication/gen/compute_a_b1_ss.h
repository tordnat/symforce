// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Dense>
#include <Eigen/Sparse>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*     x2: Scalar
*     x3: Scalar
*     x4: Scalar
*
* Outputs:
*     result: Matrix7_7
*/
template <typename Scalar>
Eigen::SparseMatrix<Scalar> ComputeAB1Ss(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 45

    // Input arrays

    // Intermediate terms (3)
    const Scalar _tmp0 = x2 - 2;
    const Scalar _tmp1 = 2*x3;
    const Scalar _tmp2 = -x3;

    // Output terms (1)
    static constexpr int kRows_result = 7;
    static constexpr int kCols_result = 7;
    static constexpr int kNumNonZero_result = 15;
    static constexpr int kColPtrs_result[] = {0, 3, 5, 7, 9, 11, 13, 15};
    static constexpr int kRowIndices_result[] = {4, 5, 6, 0, 1, 0, 2, 0, 3, 1, 4, 2, 5, 3, 6};
    Scalar result_empty_value_ptr[15];
    Eigen::SparseMatrix<Scalar> result = Eigen::Map<const Eigen::SparseMatrix<Scalar>>(
        kRows_result,
        kCols_result,
        kNumNonZero_result,
        kColPtrs_result,
        kRowIndices_result,
        result_empty_value_ptr
    );
    Scalar* result_value_ptr = result.valuePtr();


    result_value_ptr[0] = -_tmp0*x2;
    result_value_ptr[1] = x2/x3 - x3*x4 + 2;
    result_value_ptr[2] = -x2 - x4 - 3;
    result_value_ptr[3] = 4 - x4;
    result_value_ptr[4] = _tmp0;
    result_value_ptr[5] = -_tmp1*(x3 - 2) - 2;
    result_value_ptr[6] = -1;
    result_value_ptr[7] = 2/(x4 + 2);
    result_value_ptr[8] = -x0*x1*x4*(x2 + 2);
    result_value_ptr[9] = -_tmp1*x1*(x0 + 2) - _tmp2;
    result_value_ptr[10] = -2*std::pow(x3, Scalar(2))*x4;
    result_value_ptr[11] = x0 - x1*(x3 - 3);
    result_value_ptr[12] = Scalar(1.0) / (_tmp2 + x2);
    result_value_ptr[13] = x2*(x2 + 4)*(x4 + 1);
    result_value_ptr[14] = -x0*x3/x1;

    return result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
