// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>

#include <geo/pose3.h>


namespace sym {


/**
* Composition of two elements in the group.
*
* Args:
*     a (Element):
*     b (Element):
*
* Returns:
*     Element: a @ b
*     geo.Matrix: Jacobian for arg 0 (a)
*     geo.Matrix: Jacobian for arg 1 (b)
*/
template <typename Scalar>
geo::Pose3<Scalar> ComposePose3_ValueAndJacobians(const geo::Pose3<Scalar>& a, const geo::Pose3<Scalar>& b, Eigen::Matrix<Scalar, 6, 6>* const res_D_a, Eigen::Matrix<Scalar, 6, 6>* const res_D_b) {
    // Input arrays
    const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
    const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();
    assert( res_D_a != nullptr );
    assert( res_D_b != nullptr );

    // Intermediate terms (190)
    const Scalar _tmp0 = _a[0]*_b[3] + _a[1]*_b[2] - _a[2]*_b[1] + _a[3]*_b[0];
    const Scalar _tmp1 = -_a[0]*_b[2] + _a[1]*_b[3] + _a[2]*_b[0] + _a[3]*_b[1];
    const Scalar _tmp2 = _a[0]*_b[1] - _a[1]*_b[0] + _a[2]*_b[3] + _a[3]*_b[2];
    const Scalar _tmp3 = -_a[0]*_b[0] - _a[1]*_b[1] - _a[2]*_b[2] + _a[3]*_b[3];
    const Scalar _tmp4 = 2*_a[3];
    const Scalar _tmp5 = _a[1]*_tmp4;
    const Scalar _tmp6 = 2*_a[2];
    const Scalar _tmp7 = _a[0]*_tmp6;
    const Scalar _tmp8 = _tmp5 + _tmp7;
    const Scalar _tmp9 = _a[2]*_tmp4;
    const Scalar _tmp10 = 2*_a[1];
    const Scalar _tmp11 = _a[0]*_tmp10;
    const Scalar _tmp12 = _tmp11 - _tmp9;
    const Scalar _tmp13 = -2*(_a[1] * _a[1]);
    const Scalar _tmp14 = -2*(_a[2] * _a[2]) + 1;
    const Scalar _tmp15 = _tmp13 + _tmp14;
    const Scalar _tmp16 = _a[0]*_tmp4;
    const Scalar _tmp17 = _a[2]*_tmp10;
    const Scalar _tmp18 = -_tmp16 + _tmp17;
    const Scalar _tmp19 = -2*(_a[0] * _a[0]);
    const Scalar _tmp20 = _tmp14 + _tmp19;
    const Scalar _tmp21 = _tmp11 + _tmp9;
    const Scalar _tmp22 = _tmp13 + _tmp19 + 1;
    const Scalar _tmp23 = _tmp16 + _tmp17;
    const Scalar _tmp24 = -_tmp5 + _tmp7;
    const Scalar _tmp25 = 2*_tmp0;
    const Scalar _tmp26 = _b[3]*_tmp25;
    const Scalar _tmp27 = -_tmp26;
    const Scalar _tmp28 = 2*_tmp1;
    const Scalar _tmp29 = _b[2]*_tmp28;
    const Scalar _tmp30 = 2*_b[1];
    const Scalar _tmp31 = _tmp2*_tmp30;
    const Scalar _tmp32 = 2*_b[0];
    const Scalar _tmp33 = _tmp3*_tmp32;
    const Scalar _tmp34 = _tmp27 - _tmp29 + _tmp31 + _tmp33;
    const Scalar _tmp35 = (1.0/2.0)*_a[0];
    const Scalar _tmp36 = 2*_b[3];
    const Scalar _tmp37 = _tmp2*_tmp36;
    const Scalar _tmp38 = _b[1]*_tmp25;
    const Scalar _tmp39 = 2*_b[2]*_tmp3;
    const Scalar _tmp40 = _tmp1*_tmp32;
    const Scalar _tmp41 = _tmp39 + _tmp40;
    const Scalar _tmp42 = _tmp37 + _tmp38 + _tmp41;
    const Scalar _tmp43 = (1.0/2.0)*_a[2];
    const Scalar _tmp44 = _b[2]*_tmp25;
    const Scalar _tmp45 = _tmp1*_tmp36;
    const Scalar _tmp46 = -_tmp45;
    const Scalar _tmp47 = _tmp2*_tmp32;
    const Scalar _tmp48 = _tmp3*_tmp30;
    const Scalar _tmp49 = _tmp44 + _tmp46 + _tmp47 - _tmp48;
    const Scalar _tmp50 = (1.0/2.0)*_a[1];
    const Scalar _tmp51 = _b[0]*_tmp25;
    const Scalar _tmp52 = 2*_tmp2;
    const Scalar _tmp53 = _b[2]*_tmp52;
    const Scalar _tmp54 = -_tmp53;
    const Scalar _tmp55 = _tmp3*_tmp36;
    const Scalar _tmp56 = _tmp1*_tmp30;
    const Scalar _tmp57 = _tmp55 - _tmp56;
    const Scalar _tmp58 = _tmp51 + _tmp54 + _tmp57;
    const Scalar _tmp59 = (1.0/2.0)*_a[3];
    const Scalar _tmp60 = _tmp44 + _tmp48;
    const Scalar _tmp61 = _tmp46 - _tmp47 + _tmp60;
    const Scalar _tmp62 = _tmp29 + _tmp31;
    const Scalar _tmp63 = _tmp26 + _tmp33 + _tmp62;
    const Scalar _tmp64 = -_tmp51;
    const Scalar _tmp65 = _tmp54 + _tmp55 + _tmp56 + _tmp64;
    const Scalar _tmp66 = -_tmp37;
    const Scalar _tmp67 = _tmp38 - _tmp39 + _tmp40 + _tmp66;
    const Scalar _tmp68 = -_tmp38 + _tmp41 + _tmp66;
    const Scalar _tmp69 = _tmp53 + _tmp57 + _tmp64;
    const Scalar _tmp70 = _tmp27 - _tmp33 + _tmp62;
    const Scalar _tmp71 = _tmp45 + _tmp47 + _tmp60;
    const Scalar _tmp72 = 2*_a[0];
    const Scalar _tmp73 = _b[4]*_tmp72;
    const Scalar _tmp74 = _b[5]*_tmp10;
    const Scalar _tmp75 = _tmp73 + _tmp74;
    const Scalar _tmp76 = _tmp28*_tmp3;
    const Scalar _tmp77 = _tmp2*_tmp25;
    const Scalar _tmp78 = -_tmp76 + _tmp77;
    const Scalar _tmp79 = _b[4]*_tmp4;
    const Scalar _tmp80 = 4*_b[5];
    const Scalar _tmp81 = _b[6]*_tmp10;
    const Scalar _tmp82 = -_a[2]*_tmp80 + _tmp79 + _tmp81;
    const Scalar _tmp83 = _tmp3*_tmp52;
    const Scalar _tmp84 = _tmp1*_tmp25;
    const Scalar _tmp85 = _tmp83 + _tmp84;
    const Scalar _tmp86 = -2*(_tmp2 * _tmp2);
    const Scalar _tmp87 = -2*(_tmp1 * _tmp1);
    const Scalar _tmp88 = _tmp86 + _tmp87 + 1;
    const Scalar _tmp89 = 4*_b[4];
    const Scalar _tmp90 = _b[5]*_tmp4;
    const Scalar _tmp91 = _b[6]*_tmp72;
    const Scalar _tmp92 = -_a[2]*_tmp89 - _tmp90 + _tmp91;
    const Scalar _tmp93 = _tmp75*_tmp78 + _tmp82*_tmp85 + _tmp88*_tmp92;
    const Scalar _tmp94 = _b[5]*_tmp6;
    const Scalar _tmp95 = 4*_b[6];
    const Scalar _tmp96 = -_a[1]*_tmp95 - _tmp79 + _tmp94;
    const Scalar _tmp97 = _b[6]*_tmp6;
    const Scalar _tmp98 = _tmp73 + _tmp97;
    const Scalar _tmp99 = _b[5]*_tmp72;
    const Scalar _tmp100 = _b[6]*_tmp4;
    const Scalar _tmp101 = -_a[1]*_tmp89 + _tmp100 + _tmp99;
    const Scalar _tmp102 = _tmp101*_tmp88 + _tmp78*_tmp96 + _tmp85*_tmp98;
    const Scalar _tmp103 = _b[4]*_tmp6;
    const Scalar _tmp104 = _tmp103 - _tmp91;
    const Scalar _tmp105 = _b[4]*_tmp10;
    const Scalar _tmp106 = -_tmp105 + _tmp99;
    const Scalar _tmp107 = _tmp81 - _tmp94;
    const Scalar _tmp108 = _tmp104*_tmp85 + _tmp106*_tmp78 + _tmp107*_tmp88;
    const Scalar _tmp109 = -_a[0]*_tmp95 + _tmp103 + _tmp90;
    const Scalar _tmp110 = -_a[0]*_tmp80 - _tmp100 + _tmp105;
    const Scalar _tmp111 = _tmp74 + _tmp97;
    const Scalar _tmp112 = (1.0/2.0)*_tmp109*_tmp78 + (1.0/2.0)*_tmp110*_tmp85 + (1.0/2.0)*_tmp111*_tmp88;
    const Scalar _tmp113 = _tmp15*_tmp88 + _tmp21*_tmp85 + _tmp24*_tmp78;
    const Scalar _tmp114 = _tmp12*_tmp88 + _tmp20*_tmp85 + _tmp23*_tmp78;
    const Scalar _tmp115 = _tmp18*_tmp85 + _tmp22*_tmp78 + _tmp8*_tmp88;
    const Scalar _tmp116 = _tmp25*_tmp3;
    const Scalar _tmp117 = _tmp1*_tmp52;
    const Scalar _tmp118 = _tmp116 + _tmp117;
    const Scalar _tmp119 = -2*(_tmp0 * _tmp0) + 1;
    const Scalar _tmp120 = _tmp119 + _tmp86;
    const Scalar _tmp121 = -_tmp83 + _tmp84;
    const Scalar _tmp122 = _tmp104*_tmp120 + _tmp106*_tmp118 + _tmp107*_tmp121;
    const Scalar _tmp123 = _tmp118*_tmp75 + _tmp120*_tmp82 + _tmp121*_tmp92;
    const Scalar _tmp124 = (1.0/2.0)*_tmp101*_tmp121 + (1.0/2.0)*_tmp118*_tmp96 + (1.0/2.0)*_tmp120*_tmp98;
    const Scalar _tmp125 = _tmp109*_tmp118 + _tmp110*_tmp120 + _tmp111*_tmp121;
    const Scalar _tmp126 = _tmp118*_tmp24 + _tmp120*_tmp21 + _tmp121*_tmp15;
    const Scalar _tmp127 = _tmp118*_tmp23 + _tmp12*_tmp121 + _tmp120*_tmp20;
    const Scalar _tmp128 = _tmp118*_tmp22 + _tmp120*_tmp18 + _tmp121*_tmp8;
    const Scalar _tmp129 = _tmp119 + _tmp87;
    const Scalar _tmp130 = -_tmp116 + _tmp117;
    const Scalar _tmp131 = _tmp76 + _tmp77;
    const Scalar _tmp132 = _tmp129*_tmp75 + _tmp130*_tmp82 + _tmp131*_tmp92;
    const Scalar _tmp133 = _tmp104*_tmp130 + _tmp106*_tmp129 + _tmp107*_tmp131;
    const Scalar _tmp134 = _tmp101*_tmp131 + _tmp129*_tmp96 + _tmp130*_tmp98;
    const Scalar _tmp135 = _tmp109*_tmp129 + _tmp110*_tmp130 + _tmp111*_tmp131;
    const Scalar _tmp136 = _tmp129*_tmp24 + _tmp130*_tmp21 + _tmp131*_tmp15;
    const Scalar _tmp137 = _tmp12*_tmp131 + _tmp129*_tmp23 + _tmp130*_tmp20;
    const Scalar _tmp138 = _tmp129*_tmp22 + _tmp130*_tmp18 + _tmp131*_tmp8;
    const Scalar _tmp139 = _tmp0*_tmp4;
    const Scalar _tmp140 = _tmp1*_tmp6;
    const Scalar _tmp141 = _tmp10*_tmp2;
    const Scalar _tmp142 = _tmp3*_tmp72;
    const Scalar _tmp143 = -_tmp139 - _tmp140 + _tmp141 + _tmp142;
    const Scalar _tmp144 = (1.0/2.0)*_b[0];
    const Scalar _tmp145 = -_tmp143*_tmp144;
    const Scalar _tmp146 = _a[2]*_tmp25;
    const Scalar _tmp147 = _tmp2*_tmp72;
    const Scalar _tmp148 = _tmp1*_tmp4;
    const Scalar _tmp149 = _tmp10*_tmp3;
    const Scalar _tmp150 = _tmp146 - _tmp147 - _tmp148 + _tmp149;
    const Scalar _tmp151 = (1.0/2.0)*_b[1];
    const Scalar _tmp152 = -_tmp150*_tmp151;
    const Scalar _tmp153 = _tmp0*_tmp10;
    const Scalar _tmp154 = _tmp1*_tmp72;
    const Scalar _tmp155 = _tmp2*_tmp4;
    const Scalar _tmp156 = _tmp3*_tmp6;
    const Scalar _tmp157 = (1.0/2.0)*_tmp153 - 1.0/2.0*_tmp154 + (1.0/2.0)*_tmp155 - 1.0/2.0*_tmp156;
    const Scalar _tmp158 = _a[0]*_tmp25 + _tmp1*_tmp10 + _tmp2*_tmp6 + _tmp3*_tmp4;
    const Scalar _tmp159 = (1.0/2.0)*_b[3];
    const Scalar _tmp160 = _tmp158*_tmp159;
    const Scalar _tmp161 = _tmp144*_tmp150;
    const Scalar _tmp162 = (1.0/2.0)*_b[2];
    const Scalar _tmp163 = _tmp158*_tmp162;
    const Scalar _tmp164 = _tmp143*_tmp162;
    const Scalar _tmp165 = _tmp151*_tmp158;
    const Scalar _tmp166 = _tmp139 + _tmp140 - _tmp141 - _tmp142;
    const Scalar _tmp167 = -1.0/2.0*_tmp153 + (1.0/2.0)*_tmp154 - 1.0/2.0*_tmp155 + (1.0/2.0)*_tmp156;
    const Scalar _tmp168 = -_b[2]*_tmp167 + _tmp160;
    const Scalar _tmp169 = _tmp144*_tmp158;
    const Scalar _tmp170 = _b[1]*_tmp167;
    const Scalar _tmp171 = -_tmp146 + _tmp147 + _tmp148 - _tmp149;
    const Scalar _tmp172 = _b[3]*_tmp30;
    const Scalar _tmp173 = _b[2]*_tmp32;
    const Scalar _tmp174 = -_tmp172 + _tmp173;
    const Scalar _tmp175 = _b[2]*_tmp36;
    const Scalar _tmp176 = _b[1]*_tmp32;
    const Scalar _tmp177 = _tmp175 + _tmp176;
    const Scalar _tmp178 = -2*(_b[2] * _b[2]);
    const Scalar _tmp179 = -2*(_b[1] * _b[1]) + 1;
    const Scalar _tmp180 = _tmp178 + _tmp179;
    const Scalar _tmp181 = _b[3]*_tmp32;
    const Scalar _tmp182 = _b[2]*_tmp30;
    const Scalar _tmp183 = _tmp181 + _tmp182;
    const Scalar _tmp184 = -2*(_b[0] * _b[0]);
    const Scalar _tmp185 = _tmp178 + _tmp184 + 1;
    const Scalar _tmp186 = -_tmp175 + _tmp176;
    const Scalar _tmp187 = -_tmp181 + _tmp182;
    const Scalar _tmp188 = _tmp179 + _tmp184;
    const Scalar _tmp189 = _tmp172 + _tmp173;

    // Output terms (3)
    Eigen::Matrix<Scalar, 7, 1> _res;
    Eigen::Matrix<Scalar, 6, 6>& _res_D_a = (*res_D_a);
    Eigen::Matrix<Scalar, 6, 6>& _res_D_b = (*res_D_b);

    _res[0] = _tmp0;
    _res[1] = _tmp1;
    _res[2] = _tmp2;
    _res[3] = _tmp3;
    _res[4] = _a[4] + _b[4]*_tmp15 + _b[5]*_tmp12 + _b[6]*_tmp8;
    _res[5] = _a[5] + _b[4]*_tmp21 + _b[5]*_tmp20 + _b[6]*_tmp18;
    _res[6] = _a[6] + _b[4]*_tmp24 + _b[5]*_tmp23 + _b[6]*_tmp22;
    _res_D_a(0, 0) = -_tmp34*_tmp35 + _tmp42*_tmp43 - _tmp49*_tmp50 + _tmp58*_tmp59;
    _res_D_a(0, 1) = -_tmp34*_tmp50 + _tmp35*_tmp49 + _tmp42*_tmp59 - _tmp43*_tmp58;
    _res_D_a(0, 2) = -_tmp34*_tmp43 - _tmp35*_tmp42 + _tmp49*_tmp59 + _tmp50*_tmp58;
    _res_D_a(0, 3) = 0;
    _res_D_a(0, 4) = 0;
    _res_D_a(0, 5) = 0;
    _res_D_a(1, 0) = -_tmp35*_tmp61 + _tmp43*_tmp65 - _tmp50*_tmp63 + _tmp59*_tmp67;
    _res_D_a(1, 1) = _tmp35*_tmp63 - _tmp43*_tmp67 - _tmp50*_tmp61 + _tmp59*_tmp65;
    _res_D_a(1, 2) = -_tmp35*_tmp65 - _tmp43*_tmp61 + _tmp50*_tmp67 + _tmp59*_tmp63;
    _res_D_a(1, 3) = 0;
    _res_D_a(1, 4) = 0;
    _res_D_a(1, 5) = 0;
    _res_D_a(2, 0) = -_tmp35*_tmp68 + _tmp43*_tmp70 - _tmp50*_tmp69 + _tmp59*_tmp71;
    _res_D_a(2, 1) = _tmp35*_tmp69 - _tmp43*_tmp71 - _tmp50*_tmp68 + _tmp59*_tmp70;
    _res_D_a(2, 2) = -_tmp35*_tmp70 - _tmp43*_tmp68 + _tmp50*_tmp71 + _tmp59*_tmp69;
    _res_D_a(2, 3) = 0;
    _res_D_a(2, 4) = 0;
    _res_D_a(2, 5) = 0;
    _res_D_a(3, 0) = _a[3]*_tmp112 + _tmp102*_tmp43 - _tmp108*_tmp35 - _tmp50*_tmp93;
    _res_D_a(3, 1) = -_a[2]*_tmp112 + _tmp102*_tmp59 - _tmp108*_tmp50 + _tmp35*_tmp93;
    _res_D_a(3, 2) = _a[1]*_tmp112 - _tmp102*_tmp35 - _tmp108*_tmp43 + _tmp59*_tmp93;
    _res_D_a(3, 3) = _tmp113;
    _res_D_a(3, 4) = _tmp114;
    _res_D_a(3, 5) = _tmp115;
    _res_D_a(4, 0) = _a[2]*_tmp124 - _tmp122*_tmp35 - _tmp123*_tmp50 + _tmp125*_tmp59;
    _res_D_a(4, 1) = _a[3]*_tmp124 - _tmp122*_tmp50 + _tmp123*_tmp35 - _tmp125*_tmp43;
    _res_D_a(4, 2) = -_a[0]*_tmp124 - _tmp122*_tmp43 + _tmp123*_tmp59 + _tmp125*_tmp50;
    _res_D_a(4, 3) = _tmp126;
    _res_D_a(4, 4) = _tmp127;
    _res_D_a(4, 5) = _tmp128;
    _res_D_a(5, 0) = -_tmp132*_tmp50 - _tmp133*_tmp35 + _tmp134*_tmp43 + _tmp135*_tmp59;
    _res_D_a(5, 1) = _tmp132*_tmp35 - _tmp133*_tmp50 + _tmp134*_tmp59 - _tmp135*_tmp43;
    _res_D_a(5, 2) = _tmp132*_tmp59 - _tmp133*_tmp43 - _tmp134*_tmp35 + _tmp135*_tmp50;
    _res_D_a(5, 3) = _tmp136;
    _res_D_a(5, 4) = _tmp137;
    _res_D_a(5, 5) = _tmp138;
    _res_D_b(0, 0) = _b[2]*_tmp157 + _tmp145 + _tmp152 + _tmp160;
    _res_D_b(0, 1) = _b[3]*_tmp157 - _tmp143*_tmp151 + _tmp161 - _tmp163;
    _res_D_b(0, 2) = -_b[0]*_tmp157 + _tmp150*_tmp159 - _tmp164 + _tmp165;
    _res_D_b(0, 3) = 0;
    _res_D_b(0, 4) = 0;
    _res_D_b(0, 5) = 0;
    _res_D_b(1, 0) = _b[3]*_tmp167 - _tmp151*_tmp166 - _tmp161 + _tmp163;
    _res_D_b(1, 1) = _tmp144*_tmp166 + _tmp152 + _tmp168;
    _res_D_b(1, 2) = -_tmp150*_tmp162 + _tmp159*_tmp166 - _tmp169 + _tmp170;
    _res_D_b(1, 3) = 0;
    _res_D_b(1, 4) = 0;
    _res_D_b(1, 5) = 0;
    _res_D_b(2, 0) = -_b[0]*_tmp167 + _tmp159*_tmp171 + _tmp164 - _tmp165;
    _res_D_b(2, 1) = _tmp143*_tmp159 - _tmp162*_tmp171 + _tmp169 - _tmp170;
    _res_D_b(2, 2) = _tmp145 + _tmp151*_tmp171 + _tmp168;
    _res_D_b(2, 3) = 0;
    _res_D_b(2, 4) = 0;
    _res_D_b(2, 5) = 0;
    _res_D_b(3, 0) = 0;
    _res_D_b(3, 1) = 0;
    _res_D_b(3, 2) = 0;
    _res_D_b(3, 3) = _tmp113*_tmp180 + _tmp114*_tmp177 + _tmp115*_tmp174;
    _res_D_b(3, 4) = _tmp113*_tmp186 + _tmp114*_tmp185 + _tmp115*_tmp183;
    _res_D_b(3, 5) = _tmp113*_tmp189 + _tmp114*_tmp187 + _tmp115*_tmp188;
    _res_D_b(4, 0) = 0;
    _res_D_b(4, 1) = 0;
    _res_D_b(4, 2) = 0;
    _res_D_b(4, 3) = _tmp126*_tmp180 + _tmp127*_tmp177 + _tmp128*_tmp174;
    _res_D_b(4, 4) = _tmp126*_tmp186 + _tmp127*_tmp185 + _tmp128*_tmp183;
    _res_D_b(4, 5) = _tmp126*_tmp189 + _tmp127*_tmp187 + _tmp128*_tmp188;
    _res_D_b(5, 0) = 0;
    _res_D_b(5, 1) = 0;
    _res_D_b(5, 2) = 0;
    _res_D_b(5, 3) = _tmp136*_tmp180 + _tmp137*_tmp177 + _tmp138*_tmp174;
    _res_D_b(5, 4) = _tmp136*_tmp186 + _tmp137*_tmp185 + _tmp138*_tmp183;
    _res_D_b(5, 5) = _tmp136*_tmp189 + _tmp137*_tmp187 + _tmp138*_tmp188;


    return geo::Pose3<Scalar>(_res);
}

}  // namespace sym
