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
*     result: Matrix105_163
*/
template <typename Scalar>
Eigen::SparseMatrix<Scalar> ComputeBLpSc105(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 556

    // Input arrays

    // Intermediate terms (108)
    const Scalar _tmp0 = 2*x1;
    const Scalar _tmp1 = x3 + 1;
    const Scalar _tmp2 = 2*x3;
    const Scalar _tmp3 = x4 + 1;
    const Scalar _tmp4 = x3*x4;
    const Scalar _tmp5 = x1 - 1;
    const Scalar _tmp6 = 4*x0;
    const Scalar _tmp7 = _tmp6*x2;
    const Scalar _tmp8 = _tmp2*x4;
    const Scalar _tmp9 = Scalar(1.0) / (x2);
    const Scalar _tmp10 = Scalar(1.0) / (x0);
    const Scalar _tmp11 = 2*x4;
    const Scalar _tmp12 = 4*x2;
    const Scalar _tmp13 = 4*x1;
    const Scalar _tmp14 = 2*x2;
    const Scalar _tmp15 = -x4;
    const Scalar _tmp16 = x3 + 3;
    const Scalar _tmp17 = -x2;
    const Scalar _tmp18 = _tmp2 + 1;
    const Scalar _tmp19 = x2 + 2;
    const Scalar _tmp20 = x0 - 1;
    const Scalar _tmp21 = x1 + x3;
    const Scalar _tmp22 = x0 + x2;
    const Scalar _tmp23 = 4*x4;
    const Scalar _tmp24 = -_tmp0;
    const Scalar _tmp25 = _tmp24 + x0;
    const Scalar _tmp26 = x2 + 1;
    const Scalar _tmp27 = -x0;
    const Scalar _tmp28 = x1 + 2;
    const Scalar _tmp29 = -x3;
    const Scalar _tmp30 = x2*x4;
    const Scalar _tmp31 = x1*x2;
    const Scalar _tmp32 = x4 - 1;
    const Scalar _tmp33 = x0 - 2;
    const Scalar _tmp34 = x3 - 2;
    const Scalar _tmp35 = Scalar(1.0) / (x1);
    const Scalar _tmp36 = _tmp35*x4;
    const Scalar _tmp37 = 3*x1;
    const Scalar _tmp38 = x2 + x4;
    const Scalar _tmp39 = Scalar(1.0) / (x3);
    const Scalar _tmp40 = std::pow(x2, Scalar(2));
    const Scalar _tmp41 = 2*x0;
    const Scalar _tmp42 = -_tmp41;
    const Scalar _tmp43 = x0 + x3;
    const Scalar _tmp44 = _tmp15 + _tmp41;
    const Scalar _tmp45 = -_tmp11;
    const Scalar _tmp46 = x0 + 1;
    const Scalar _tmp47 = _tmp19 + _tmp27;
    const Scalar _tmp48 = 3*x4;
    const Scalar _tmp49 = std::pow(x4, Scalar(2));
    const Scalar _tmp50 = x1 + 1;
    const Scalar _tmp51 = -x1;
    const Scalar _tmp52 = x2 - 1;
    const Scalar _tmp53 = _tmp11 + x0;
    const Scalar _tmp54 = x0*x3;
    const Scalar _tmp55 = _tmp10*_tmp2;
    const Scalar _tmp56 = std::pow(x3, Scalar(2));
    const Scalar _tmp57 = x3 + x4;
    const Scalar _tmp58 = _tmp14 + 1;
    const Scalar _tmp59 = x3 + 2;
    const Scalar _tmp60 = x0*x4;
    const Scalar _tmp61 = Scalar(1.0) / (_tmp59);
    const Scalar _tmp62 = _tmp14*x0;
    const Scalar _tmp63 = _tmp60*x1;
    const Scalar _tmp64 = -_tmp2 - 2;
    const Scalar _tmp65 = -_tmp48;
    const Scalar _tmp66 = _tmp0*x2;
    const Scalar _tmp67 = x3 - 1;
    const Scalar _tmp68 = std::pow(x0, Scalar(2));
    const Scalar _tmp69 = x1 - 2;
    const Scalar _tmp70 = _tmp69*x1;
    const Scalar _tmp71 = _tmp29 + x1;
    const Scalar _tmp72 = _tmp54 + x0;
    const Scalar _tmp73 = _tmp15 + x2;
    const Scalar _tmp74 = _tmp73 + x1;
    const Scalar _tmp75 = 2*_tmp39;
    const Scalar _tmp76 = Scalar(1.0) / (_tmp52);
    const Scalar _tmp77 = _tmp76*x0;
    const Scalar _tmp78 = _tmp3 + x2;
    const Scalar _tmp79 = -_tmp6;
    const Scalar _tmp80 = x4 - 2;
    const Scalar _tmp81 = Scalar(1.0) / (_tmp50);
    const Scalar _tmp82 = x0*x2;
    const Scalar _tmp83 = _tmp2*_tmp82;
    const Scalar _tmp84 = _tmp29 + 1;
    const Scalar _tmp85 = _tmp27 + 2;
    const Scalar _tmp86 = Scalar(1.0) / (x4);
    const Scalar _tmp87 = x1 - 4;
    const Scalar _tmp88 = _tmp86*x3;
    const Scalar _tmp89 = x1*x4;
    const Scalar _tmp90 = x0 + 2;
    const Scalar _tmp91 = _tmp10*x4;
    const Scalar _tmp92 = x2 + 3;
    const Scalar _tmp93 = x2 - 2;
    const Scalar _tmp94 = _tmp22 + _tmp51;
    const Scalar _tmp95 = -_tmp89;
    const Scalar _tmp96 = x1 + x4;
    const Scalar _tmp97 = 4*x3;
    const Scalar _tmp98 = x2 + x3;
    const Scalar _tmp99 = 2*_tmp49;
    const Scalar _tmp100 = x2*x3;
    const Scalar _tmp101 = _tmp2 - 2;
    const Scalar _tmp102 = _tmp0 + _tmp101;
    const Scalar _tmp103 = std::pow(x1, Scalar(2));
    const Scalar _tmp104 = x0*x1;
    const Scalar _tmp105 = -_tmp5;
    const Scalar _tmp106 = -_tmp31;
    const Scalar _tmp107 = -_tmp80;

    // Output terms (1)
    static constexpr int kRows_result = 105;
    static constexpr int kCols_result = 163;
    static constexpr int kNumNonZero_result = 331;
    static constexpr int kColPtrs_result[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 62, 65, 68, 70, 73, 76, 79, 82, 84, 86, 88, 91, 94, 97, 100, 103, 106, 109, 112, 114, 116, 118, 121, 124, 127, 130, 133, 136, 139, 142, 143, 145, 146, 149, 152, 155, 158, 161, 163, 166, 169, 171, 173, 175, 178, 181, 184, 187, 190, 193, 196, 198, 200, 202, 204, 207, 210, 213, 216, 218, 221, 224, 227, 229, 231, 233, 236, 239, 242, 244, 247, 250, 253, 256, 258, 260, 262, 265, 268, 271, 274, 277, 280, 283, 286, 288, 290, 292, 295, 298, 301, 304, 306, 308, 310, 311, 313, 314, 316, 320, 324, 329, 331};
    static constexpr int kRowIndices_result[] = {0, 1, 2, 7, 8, 9, 10, 11, 12, 18, 19, 20, 21, 22, 23, 29, 30, 31, 32, 33, 34, 40, 41, 42, 43, 45, 51, 52, 53, 54, 55, 56, 62, 63, 64, 65, 66, 67, 73, 74, 75, 76, 77, 78, 84, 85, 86, 87, 88, 89, 95, 96, 97, 98, 99, 100, 102, 103, 104, 0, 1, 4, 0, 1, 5, 0, 1, 6, 3, 13, 3, 12, 14, 4, 7, 15, 5, 8, 16, 6, 9, 17, 7, 10, 8, 11, 9, 12, 10, 11, 15, 10, 11, 16, 10, 11, 17, 13, 14, 24, 14, 23, 25, 15, 18, 26, 16, 19, 27, 17, 20, 28, 18, 21, 19, 22, 20, 23, 21, 22, 26, 21, 22, 27, 21, 22, 28, 24, 25, 35, 25, 34, 36, 26, 29, 37, 27, 30, 38, 28, 31, 39, 32, 30, 33, 31, 32, 33, 37, 32, 33, 38, 32, 33, 39, 35, 36, 46, 36, 45, 47, 37, 48, 38, 41, 49, 39, 42, 50, 40, 43, 41, 44, 42, 45, 43, 44, 48, 43, 44, 49, 43, 44, 50, 46, 47, 57, 47, 56, 58, 48, 51, 59, 49, 52, 60, 53, 61, 51, 54, 52, 55, 53, 56, 54, 55, 59, 54, 55, 60, 54, 55, 61, 57, 58, 68, 58, 67, 59, 62, 70, 60, 63, 71, 61, 64, 72, 62, 65, 63, 66, 64, 67, 65, 66, 70, 65, 66, 71, 65, 66, 72, 69, 79, 69, 78, 80, 70, 73, 81, 71, 74, 82, 72, 75, 83, 73, 76, 74, 77, 75, 78, 76, 77, 81, 76, 77, 82, 76, 77, 83, 79, 80, 90, 80, 89, 91, 81, 84, 92, 82, 85, 93, 83, 86, 94, 84, 87, 85, 88, 86, 89, 87, 88, 92, 87, 88, 93, 87, 88, 94, 90, 91, 101, 91, 100, 92, 95, 93, 96, 97, 95, 98, 96, 97, 100, 98, 99, 102, 103, 98, 99, 102, 103, 98, 99, 102, 103, 104, 101, 104};
    Scalar result_empty_value_ptr[331];
    Eigen::SparseMatrix<Scalar> result = Eigen::Map<const Eigen::SparseMatrix<Scalar>>(
        kRows_result,
        kCols_result,
        kNumNonZero_result,
        kColPtrs_result,
        kRowIndices_result,
        result_empty_value_ptr
    );
    Scalar* result_value_ptr = result.valuePtr();


    result_value_ptr[0] = x0;
    result_value_ptr[1] = -_tmp0 - _tmp1;
    result_value_ptr[2] = _tmp2 + Scalar(-1.0);
    result_value_ptr[3] = -_tmp3;
    result_value_ptr[4] = -_tmp4 - _tmp5;
    result_value_ptr[5] = -_tmp7;
    result_value_ptr[6] = _tmp8;
    result_value_ptr[7] = -x2*(_tmp10*_tmp11*_tmp9 + 2);
    result_value_ptr[8] = -6;
    result_value_ptr[9] = _tmp12*x3 - 1;
    result_value_ptr[10] = -_tmp9*x1 - x1;
    result_value_ptr[11] = _tmp13 + _tmp14 + _tmp15;
    result_value_ptr[12] = _tmp16;
    result_value_ptr[13] = -_tmp17 - _tmp18;
    result_value_ptr[14] = -_tmp19*x4 - 1;
    result_value_ptr[15] = -_tmp20*_tmp9 + _tmp21;
    result_value_ptr[16] = -x3*(_tmp22 + x1);
    result_value_ptr[17] = (Scalar(1)/Scalar(4))*x0;
    result_value_ptr[18] = -_tmp23;
    result_value_ptr[19] = -_tmp25 - x4;
    result_value_ptr[20] = -_tmp15 - _tmp26;
    result_value_ptr[21] = _tmp27;
    result_value_ptr[22] = -_tmp28;
    result_value_ptr[23] = x3;
    result_value_ptr[24] = -x3*(_tmp29 + _tmp30);
    result_value_ptr[25] = _tmp31 + x3;
    result_value_ptr[26] = -_tmp32;
    result_value_ptr[27] = -_tmp33*x0;
    result_value_ptr[28] = -_tmp34*x3;
    result_value_ptr[29] = _tmp14*_tmp36 - x3;
    result_value_ptr[30] = -_tmp21*x0;
    result_value_ptr[31] = -4;
    result_value_ptr[32] = _tmp37 + 1;
    result_value_ptr[33] = -x0/_tmp3;
    result_value_ptr[34] = _tmp38;
    result_value_ptr[35] = _tmp0*x4;
    result_value_ptr[36] = -4*_tmp39 - x0 - 4;
    result_value_ptr[37] = x3*(_tmp40 + 1);
    result_value_ptr[38] = -_tmp28 - _tmp42;
    result_value_ptr[39] = -x2*(_tmp43 + 1) - x3;
    result_value_ptr[40] = _tmp0;
    result_value_ptr[41] = _tmp44 + 1;
    result_value_ptr[42] = _tmp15;
    result_value_ptr[43] = _tmp45 + _tmp46;
    result_value_ptr[44] = _tmp15;
    result_value_ptr[45] = _tmp47 + x1;
    result_value_ptr[46] = -_tmp11 - _tmp14 - 6;
    result_value_ptr[47] = -_tmp17 - _tmp46;
    result_value_ptr[48] = 2;
    result_value_ptr[49] = _tmp10*_tmp48 + _tmp29 + 2;
    result_value_ptr[50] = -_tmp0*_tmp4;
    result_value_ptr[51] = _tmp13 + 1;
    result_value_ptr[52] = _tmp30 + x1;
    result_value_ptr[53] = _tmp45;
    result_value_ptr[54] = -_tmp30*x1;
    result_value_ptr[55] = _tmp49 - _tmp6;
    result_value_ptr[56] = -_tmp21;
    result_value_ptr[57] = -x4 + Scalar(-1.0);
    result_value_ptr[58] = -_tmp50;
    result_value_ptr[59] = _tmp42;
    result_value_ptr[60] = -_tmp31 - _tmp51 - _tmp52;
    result_value_ptr[61] = _tmp15;
    result_value_ptr[62] = -_tmp35*_tmp53;
    result_value_ptr[63] = -x0*(Scalar(2.0)*x3 + x4);
    result_value_ptr[64] = _tmp30 - 2;
    result_value_ptr[65] = -4;
    result_value_ptr[66] = x3*(_tmp34 + x1);
    result_value_ptr[67] = -Scalar(3)/Scalar(2)*x3 + Scalar(-1)/Scalar(2);
    result_value_ptr[68] = _tmp54*(_tmp4 + x4);
    result_value_ptr[69] = -_tmp35*_tmp55;
    result_value_ptr[70] = _tmp32*_tmp56;
    result_value_ptr[71] = x1*(-_tmp4 + _tmp46);
    result_value_ptr[72] = -_tmp57*_tmp58;
    result_value_ptr[73] = -_tmp12 + _tmp59;
    result_value_ptr[74] = -_tmp60;
    result_value_ptr[75] = -_tmp14 - _tmp59;
    result_value_ptr[76] = _tmp15;
    result_value_ptr[77] = -_tmp8*_tmp9;
    result_value_ptr[78] = _tmp24;
    result_value_ptr[79] = -_tmp61*x0;
    result_value_ptr[80] = 6;
    result_value_ptr[81] = 1 - _tmp6;
    result_value_ptr[82] = -_tmp10*(_tmp19 + x4);
    result_value_ptr[83] = _tmp10*_tmp14;
    result_value_ptr[84] = _tmp27 + _tmp28;
    result_value_ptr[85] = -_tmp14 - x3;
    result_value_ptr[86] = _tmp42;
    result_value_ptr[87] = -_tmp62;
    result_value_ptr[88] = x3;
    result_value_ptr[89] = _tmp63;
    result_value_ptr[90] = _tmp64;
    result_value_ptr[91] = _tmp60;
    result_value_ptr[92] = -_tmp14 - _tmp65;
    result_value_ptr[93] = 3;
    result_value_ptr[94] = -2*_tmp10 - x0 - x4;
    result_value_ptr[95] = _tmp2*_tmp30;
    result_value_ptr[96] = -_tmp34;
    result_value_ptr[97] = -_tmp14 - _tmp41 - _tmp66;
    result_value_ptr[98] = -_tmp50 - _tmp60;
    result_value_ptr[99] = _tmp67;
    result_value_ptr[100] = _tmp41*x4;
    result_value_ptr[101] = -_tmp17 - _tmp68/_tmp22;
    result_value_ptr[102] = _tmp26;
    result_value_ptr[103] = -_tmp33;
    result_value_ptr[104] = _tmp64;
    result_value_ptr[105] = _tmp20 + _tmp68;
    result_value_ptr[106] = -_tmp2*_tmp33 + 4;
    result_value_ptr[107] = _tmp70;
    result_value_ptr[108] = -_tmp63;
    result_value_ptr[109] = 2;
    result_value_ptr[110] = -6;
    result_value_ptr[111] = -x3*(_tmp17 + x1);
    result_value_ptr[112] = -_tmp71 - _tmp72;
    result_value_ptr[113] = Scalar(2.0)*x0;
    result_value_ptr[114] = -_tmp74*x2;
    result_value_ptr[115] = _tmp75;
    result_value_ptr[116] = -3*x2;
    result_value_ptr[117] = -x1*(x0 + 3);
    result_value_ptr[118] = _tmp45;
    result_value_ptr[119] = -_tmp66 + x0;
    result_value_ptr[120] = _tmp77 - 1;
    result_value_ptr[121] = -5*x4;
    result_value_ptr[122] = -_tmp78;
    result_value_ptr[123] = _tmp79;
    result_value_ptr[124] = -_tmp36/_tmp80;
    result_value_ptr[125] = -_tmp44;
    result_value_ptr[126] = -_tmp15 - _tmp28;
    result_value_ptr[127] = _tmp31 - _tmp81*x2;
    result_value_ptr[128] = -2;
    result_value_ptr[129] = -_tmp17 - _tmp50;
    result_value_ptr[130] = -_tmp4*(_tmp17 + _tmp73*x1);
    result_value_ptr[131] = _tmp82*(_tmp54 + 1);
    result_value_ptr[132] = -_tmp13*_tmp4;
    result_value_ptr[133] = -_tmp16;
    result_value_ptr[134] = -x0*(_tmp14 - 2);
    result_value_ptr[135] = -_tmp83;
    result_value_ptr[136] = -_tmp26*x4 + _tmp46;
    result_value_ptr[137] = _tmp73 + x3;
    result_value_ptr[138] = -_tmp84 - Scalar(1)/Scalar(2)*x0;
    result_value_ptr[139] = -_tmp23*x0;
    result_value_ptr[140] = _tmp34;
    result_value_ptr[141] = _tmp2 + x1;
    result_value_ptr[142] = -_tmp55;
    result_value_ptr[143] = _tmp53;
    result_value_ptr[144] = -_tmp43*x3;
    result_value_ptr[145] = _tmp5*_tmp62;
    result_value_ptr[146] = Scalar(2.0)*x1;
    result_value_ptr[147] = -_tmp85 - Scalar(1)/Scalar(2)*x1;
    result_value_ptr[148] = -_tmp54*x1 - x4;
    result_value_ptr[149] = 2*_tmp40;
    result_value_ptr[150] = -_tmp67*x0;
    result_value_ptr[151] = -_tmp28*_tmp86;
    result_value_ptr[152] = _tmp21 + _tmp33;
    result_value_ptr[153] = -_tmp81*_tmp9*x4;
    result_value_ptr[154] = x3*(_tmp27 + _tmp59);
    result_value_ptr[155] = _tmp41 + 2;
    result_value_ptr[156] = _tmp87;
    result_value_ptr[157] = _tmp86 + x1 + x2;
    result_value_ptr[158] = _tmp88;
    result_value_ptr[159] = _tmp71*x1*x3;
    result_value_ptr[160] = 4 - _tmp6;
    result_value_ptr[161] = _tmp58;
    result_value_ptr[162] = _tmp0*x0 + 1;
    result_value_ptr[163] = 4;
    result_value_ptr[164] = _tmp47;
    result_value_ptr[165] = _tmp0 + _tmp41;
    result_value_ptr[166] = -x1/(_tmp51 + _tmp82);
    result_value_ptr[167] = -_tmp34*(_tmp15 + x3);
    result_value_ptr[168] = _tmp5;
    result_value_ptr[169] = _tmp15 + _tmp89 + 2;
    result_value_ptr[170] = _tmp90*x4;
    result_value_ptr[171] = -_tmp14 - 2;
    result_value_ptr[172] = x3 - 5;
    result_value_ptr[173] = -_tmp39*_tmp91;
    result_value_ptr[174] = _tmp17 + _tmp82 + x0;
    result_value_ptr[175] = _tmp92;
    result_value_ptr[176] = _tmp70*_tmp93*x0;
    result_value_ptr[177] = _tmp30 - _tmp94;
    result_value_ptr[178] = -_tmp15 - _tmp61*x3;
    result_value_ptr[179] = _tmp95;
    result_value_ptr[180] = _tmp41*_tmp86 - 1;
    result_value_ptr[181] = -x3*(_tmp24 + _tmp38);
    result_value_ptr[182] = -_tmp56;
    result_value_ptr[183] = _tmp79;
    result_value_ptr[184] = _tmp25*x2;
    result_value_ptr[185] = _tmp15;
    result_value_ptr[186] = _tmp14;
    result_value_ptr[187] = -2*_tmp86;
    result_value_ptr[188] = x2*(_tmp82 + 1);
    result_value_ptr[189] = _tmp96;
    result_value_ptr[190] = _tmp57 + 2;
    result_value_ptr[191] = -_tmp40*_tmp56*x4;
    result_value_ptr[192] = -_tmp90;
    result_value_ptr[193] = _tmp97;
    result_value_ptr[194] = -x0/_tmp98;
    result_value_ptr[195] = _tmp14;
    result_value_ptr[196] = -_tmp20 - x4;
    result_value_ptr[197] = _tmp99 - 2;
    result_value_ptr[198] = _tmp100*_tmp28;
    result_value_ptr[199] = _tmp26;
    result_value_ptr[200] = _tmp19 + _tmp29;
    result_value_ptr[201] = -_tmp5*x2 + x0;
    result_value_ptr[202] = -_tmp50*(_tmp30 - 1);
    result_value_ptr[203] = -_tmp10*x3 - _tmp17 - 2;
    result_value_ptr[204] = _tmp92;
    result_value_ptr[205] = -_tmp13 - 4;
    result_value_ptr[206] = -_tmp100 - _tmp85 - x4;
    result_value_ptr[207] = _tmp24 + _tmp41;
    result_value_ptr[208] = 4 - _tmp0;
    result_value_ptr[209] = _tmp41 + Scalar(2.0);
    result_value_ptr[210] = -_tmp15 - _tmp37;
    result_value_ptr[211] = 4 - _tmp12;
    result_value_ptr[212] = -x4*(_tmp102 + _tmp11);
    result_value_ptr[213] = _tmp3;
    result_value_ptr[214] = -_tmp103;
    result_value_ptr[215] = _tmp87*x1;
    result_value_ptr[216] = _tmp12 + _tmp41 - 2;
    result_value_ptr[217] = _tmp92;
    result_value_ptr[218] = -_tmp56 - 2;
    result_value_ptr[219] = -_tmp11*_tmp32;
    result_value_ptr[220] = 8*x4;
    result_value_ptr[221] = 2 - _tmp6;
    result_value_ptr[222] = -_tmp104;
    result_value_ptr[223] = -_tmp69*x2;
    result_value_ptr[224] = x1;
    result_value_ptr[225] = -Scalar(1)/Scalar(2)*x4 - 1;
    result_value_ptr[226] = -_tmp15 - x3*(_tmp11 + x1);
    result_value_ptr[227] = -_tmp14 - _tmp29;
    result_value_ptr[228] = _tmp24 + _tmp77*_tmp9;
    result_value_ptr[229] = _tmp0*_tmp40;
    result_value_ptr[230] = _tmp28*_tmp63;
    result_value_ptr[231] = -_tmp50*(_tmp20 + x2);
    result_value_ptr[232] = -_tmp33 - _tmp51 - x2;
    result_value_ptr[233] = Scalar(-2.0);
    result_value_ptr[234] = _tmp40*_tmp75;
    result_value_ptr[235] = _tmp48 + _tmp50;
    result_value_ptr[236] = _tmp103*_tmp30;
    result_value_ptr[237] = _tmp86 + _tmp93;
    result_value_ptr[238] = -_tmp91 - x4;
    result_value_ptr[239] = _tmp14 - _tmp41;
    result_value_ptr[240] = _tmp33;
    result_value_ptr[241] = _tmp44;
    result_value_ptr[242] = -_tmp101;
    result_value_ptr[243] = _tmp67*_tmp7;
    result_value_ptr[244] = _tmp13*x0 + x2;
    result_value_ptr[245] = 1;
    result_value_ptr[246] = -x3*(_tmp68 + x3);
    result_value_ptr[247] = -_tmp9/_tmp93;
    result_value_ptr[248] = _tmp83;
    result_value_ptr[249] = _tmp24 + _tmp76*x2 + x4;
    result_value_ptr[250] = 1;
    result_value_ptr[251] = 3 - _tmp0;
    result_value_ptr[252] = _tmp104;
    result_value_ptr[253] = _tmp26 + x3;
    result_value_ptr[254] = _tmp18;
    result_value_ptr[255] = _tmp26;
    result_value_ptr[256] = x1;
    result_value_ptr[257] = x0 - 3;
    result_value_ptr[258] = _tmp31*_tmp4;
    result_value_ptr[259] = (Scalar(1)/Scalar(8))*x4;
    result_value_ptr[260] = _tmp0*(_tmp51 + x0) + x1;
    result_value_ptr[261] = -_tmp2*_tmp9;
    result_value_ptr[262] = _tmp105;
    result_value_ptr[263] = -_tmp22*x0 - x3;
    result_value_ptr[264] = x4 - 4;
    result_value_ptr[265] = _tmp71*(_tmp20 + x3);
    result_value_ptr[266] = -_tmp72;
    result_value_ptr[267] = _tmp54;
    result_value_ptr[268] = _tmp106 + _tmp26 + _tmp88;
    result_value_ptr[269] = _tmp87 + x2;
    result_value_ptr[270] = _tmp93;
    result_value_ptr[271] = x0/(_tmp28 + _tmp95 + x0);
    result_value_ptr[272] = _tmp35*x2 - x0;
    result_value_ptr[273] = -_tmp27 - _tmp57;
    result_value_ptr[274] = -_tmp2 - _tmp41;
    result_value_ptr[275] = _tmp1;
    result_value_ptr[276] = _tmp90;
    result_value_ptr[277] = 5*x2 + x3;
    result_value_ptr[278] = 6*x0 + 6*x2;
    result_value_ptr[279] = -_tmp50 - x0;
    result_value_ptr[280] = -_tmp97;
    result_value_ptr[281] = _tmp107;
    result_value_ptr[282] = _tmp107;
    result_value_ptr[283] = _tmp36;
    result_value_ptr[284] = -_tmp17 - _tmp50*x1;
    result_value_ptr[285] = 8 - _tmp14;
    result_value_ptr[286] = -_tmp31 - x0 - x1;
    result_value_ptr[287] = -_tmp75 - x3;
    result_value_ptr[288] = _tmp51;
    result_value_ptr[289] = _tmp90*(_tmp28 + x4);
    result_value_ptr[290] = x3;
    result_value_ptr[291] = -x3/_tmp90;
    result_value_ptr[292] = _tmp46*(_tmp1 + _tmp11);
    result_value_ptr[293] = -x4*(_tmp29 + x2) + 1;
    result_value_ptr[294] = Scalar(1.0)*x0 - 2;
    result_value_ptr[295] = _tmp54 + _tmp78;
    result_value_ptr[296] = _tmp8;
    result_value_ptr[297] = _tmp74*x0;
    result_value_ptr[298] = _tmp102*x0;
    result_value_ptr[299] = -_tmp0 - _tmp14;
    result_value_ptr[300] = -_tmp2 - x2;
    result_value_ptr[301] = _tmp4 + x3;
    result_value_ptr[302] = _tmp5*x3;
    result_value_ptr[303] = -_tmp99;
    result_value_ptr[304] = -_tmp65 - 3*x0;
    result_value_ptr[305] = 12*_tmp86;
    result_value_ptr[306] = _tmp22*_tmp30;
    result_value_ptr[307] = -_tmp51 - x4 - 2;
    result_value_ptr[308] = -_tmp29 - _tmp94;
    result_value_ptr[309] = _tmp2;
    result_value_ptr[310] = _tmp105;
    result_value_ptr[311] = x4;
    result_value_ptr[312] = _tmp80*x4 + x4;
    result_value_ptr[313] = _tmp89 - 2;
    result_value_ptr[314] = _tmp31;
    result_value_ptr[315] = _tmp75 + _tmp84;
    result_value_ptr[316] = -_tmp46*_tmp88*x1;
    result_value_ptr[317] = _tmp99 + 4;
    result_value_ptr[318] = _tmp14*_tmp57;
    result_value_ptr[319] = 6;
    result_value_ptr[320] = -2*_tmp103 - _tmp29;
    result_value_ptr[321] = x0/(_tmp14 - _tmp2*_tmp49);
    result_value_ptr[322] = 1;
    result_value_ptr[323] = _tmp5;
    result_value_ptr[324] = -_tmp50*_tmp98 + x3;
    result_value_ptr[325] = -2;
    result_value_ptr[326] = _tmp32;
    result_value_ptr[327] = _tmp96;
    result_value_ptr[328] = _tmp14 + _tmp9*x0;
    result_value_ptr[329] = _tmp27 + _tmp3;
    result_value_ptr[330] = _tmp106;

    return result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
