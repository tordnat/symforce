# -----------------------------------------------------------------------------
# This file was autogenerated by symforce from template:
#     ops/CLASS/group_ops.py.jinja
# Do NOT modify by hand.
# -----------------------------------------------------------------------------

import math
import numpy
import typing as T

import sym  # pylint: disable=unused-import


class GroupOps(object):
    """
    Python GroupOps implementation for <class 'symforce.cam.atan_camera_cal.ATANCameraCal'>.
    """

    @staticmethod
    def identity():
        # type: () -> sym.ATANCameraCal

        # Total ops: 0

        # Input arrays

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = 0
        _res[1] = 0
        _res[2] = 0
        _res[3] = 0
        _res[4] = 0
        return sym.ATANCameraCal.from_storage(_res)

    @staticmethod
    def inverse(a):
        # type: (sym.ATANCameraCal) -> sym.ATANCameraCal

        # Total ops: 5

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = -_a[0]
        _res[1] = -_a[1]
        _res[2] = -_a[2]
        _res[3] = -_a[3]
        _res[4] = -_a[4]
        return sym.ATANCameraCal.from_storage(_res)

    @staticmethod
    def compose(a, b):
        # type: (sym.ATANCameraCal, sym.ATANCameraCal) -> sym.ATANCameraCal

        # Total ops: 5

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = _a[0] + _b[0]
        _res[1] = _a[1] + _b[1]
        _res[2] = _a[2] + _b[2]
        _res[3] = _a[3] + _b[3]
        _res[4] = _a[4] + _b[4]
        return sym.ATANCameraCal.from_storage(_res)

    @staticmethod
    def between(a, b):
        # type: (sym.ATANCameraCal, sym.ATANCameraCal) -> sym.ATANCameraCal

        # Total ops: 5

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = -_a[0] + _b[0]
        _res[1] = -_a[1] + _b[1]
        _res[2] = -_a[2] + _b[2]
        _res[3] = -_a[3] + _b[3]
        _res[4] = -_a[4] + _b[4]
        return sym.ATANCameraCal.from_storage(_res)

    @staticmethod
    def inverse_with_jacobian(a):
        # type: (sym.ATANCameraCal) -> T.Tuple[sym.ATANCameraCal, numpy.ndarray]

        # Total ops: 5

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = -_a[0]
        _res[1] = -_a[1]
        _res[2] = -_a[2]
        _res[3] = -_a[3]
        _res[4] = -_a[4]
        _res_D_a = numpy.zeros((5, 5))
        _res_D_a[0, 0] = -1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[4, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = -1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[4, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = -1
        _res_D_a[3, 2] = 0
        _res_D_a[4, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = -1
        _res_D_a[4, 3] = 0
        _res_D_a[0, 4] = 0
        _res_D_a[1, 4] = 0
        _res_D_a[2, 4] = 0
        _res_D_a[3, 4] = 0
        _res_D_a[4, 4] = -1
        return sym.ATANCameraCal.from_storage(_res), _res_D_a

    @staticmethod
    def compose_with_jacobians(a, b):
        # type: (sym.ATANCameraCal, sym.ATANCameraCal) -> T.Tuple[sym.ATANCameraCal, numpy.ndarray, numpy.ndarray]

        # Total ops: 5

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = _a[0] + _b[0]
        _res[1] = _a[1] + _b[1]
        _res[2] = _a[2] + _b[2]
        _res[3] = _a[3] + _b[3]
        _res[4] = _a[4] + _b[4]
        _res_D_a = numpy.zeros((5, 5))
        _res_D_a[0, 0] = 1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[4, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = 1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[4, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = 1
        _res_D_a[3, 2] = 0
        _res_D_a[4, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = 1
        _res_D_a[4, 3] = 0
        _res_D_a[0, 4] = 0
        _res_D_a[1, 4] = 0
        _res_D_a[2, 4] = 0
        _res_D_a[3, 4] = 0
        _res_D_a[4, 4] = 1
        _res_D_b = numpy.zeros((5, 5))
        _res_D_b[0, 0] = 1
        _res_D_b[1, 0] = 0
        _res_D_b[2, 0] = 0
        _res_D_b[3, 0] = 0
        _res_D_b[4, 0] = 0
        _res_D_b[0, 1] = 0
        _res_D_b[1, 1] = 1
        _res_D_b[2, 1] = 0
        _res_D_b[3, 1] = 0
        _res_D_b[4, 1] = 0
        _res_D_b[0, 2] = 0
        _res_D_b[1, 2] = 0
        _res_D_b[2, 2] = 1
        _res_D_b[3, 2] = 0
        _res_D_b[4, 2] = 0
        _res_D_b[0, 3] = 0
        _res_D_b[1, 3] = 0
        _res_D_b[2, 3] = 0
        _res_D_b[3, 3] = 1
        _res_D_b[4, 3] = 0
        _res_D_b[0, 4] = 0
        _res_D_b[1, 4] = 0
        _res_D_b[2, 4] = 0
        _res_D_b[3, 4] = 0
        _res_D_b[4, 4] = 1
        return sym.ATANCameraCal.from_storage(_res), _res_D_a, _res_D_b

    @staticmethod
    def between_with_jacobians(a, b):
        # type: (sym.ATANCameraCal, sym.ATANCameraCal) -> T.Tuple[sym.ATANCameraCal, numpy.ndarray, numpy.ndarray]

        # Total ops: 5

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 5
        _res[0] = -_a[0] + _b[0]
        _res[1] = -_a[1] + _b[1]
        _res[2] = -_a[2] + _b[2]
        _res[3] = -_a[3] + _b[3]
        _res[4] = -_a[4] + _b[4]
        _res_D_a = numpy.zeros((5, 5))
        _res_D_a[0, 0] = -1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[4, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = -1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[4, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = -1
        _res_D_a[3, 2] = 0
        _res_D_a[4, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = -1
        _res_D_a[4, 3] = 0
        _res_D_a[0, 4] = 0
        _res_D_a[1, 4] = 0
        _res_D_a[2, 4] = 0
        _res_D_a[3, 4] = 0
        _res_D_a[4, 4] = -1
        _res_D_b = numpy.zeros((5, 5))
        _res_D_b[0, 0] = 1
        _res_D_b[1, 0] = 0
        _res_D_b[2, 0] = 0
        _res_D_b[3, 0] = 0
        _res_D_b[4, 0] = 0
        _res_D_b[0, 1] = 0
        _res_D_b[1, 1] = 1
        _res_D_b[2, 1] = 0
        _res_D_b[3, 1] = 0
        _res_D_b[4, 1] = 0
        _res_D_b[0, 2] = 0
        _res_D_b[1, 2] = 0
        _res_D_b[2, 2] = 1
        _res_D_b[3, 2] = 0
        _res_D_b[4, 2] = 0
        _res_D_b[0, 3] = 0
        _res_D_b[1, 3] = 0
        _res_D_b[2, 3] = 0
        _res_D_b[3, 3] = 1
        _res_D_b[4, 3] = 0
        _res_D_b[0, 4] = 0
        _res_D_b[1, 4] = 0
        _res_D_b[2, 4] = 0
        _res_D_b[3, 4] = 0
        _res_D_b[4, 4] = 1
        return sym.ATANCameraCal.from_storage(_res), _res_D_a, _res_D_b
