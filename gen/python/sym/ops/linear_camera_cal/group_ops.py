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
    Python GroupOps implementation for <class 'symforce.cam.linear_camera_cal.LinearCameraCal'>.
    """

    @staticmethod
    def identity():
        # type: () -> sym.LinearCameraCal

        # Total ops: 0

        # Input arrays

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = 0
        _res[1] = 0
        _res[2] = 0
        _res[3] = 0
        return sym.LinearCameraCal.from_storage(_res)

    @staticmethod
    def inverse(a):
        # type: (sym.LinearCameraCal) -> sym.LinearCameraCal

        # Total ops: 4

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = -_a[0]
        _res[1] = -_a[1]
        _res[2] = -_a[2]
        _res[3] = -_a[3]
        return sym.LinearCameraCal.from_storage(_res)

    @staticmethod
    def compose(a, b):
        # type: (sym.LinearCameraCal, sym.LinearCameraCal) -> sym.LinearCameraCal

        # Total ops: 4

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = _a[0] + _b[0]
        _res[1] = _a[1] + _b[1]
        _res[2] = _a[2] + _b[2]
        _res[3] = _a[3] + _b[3]
        return sym.LinearCameraCal.from_storage(_res)

    @staticmethod
    def between(a, b):
        # type: (sym.LinearCameraCal, sym.LinearCameraCal) -> sym.LinearCameraCal

        # Total ops: 4

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = -_a[0] + _b[0]
        _res[1] = -_a[1] + _b[1]
        _res[2] = -_a[2] + _b[2]
        _res[3] = -_a[3] + _b[3]
        return sym.LinearCameraCal.from_storage(_res)

    @staticmethod
    def inverse_with_jacobian(a):
        # type: (sym.LinearCameraCal) -> T.Tuple[sym.LinearCameraCal, numpy.ndarray]

        # Total ops: 4

        # Input arrays
        _a = a.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = -_a[0]
        _res[1] = -_a[1]
        _res[2] = -_a[2]
        _res[3] = -_a[3]
        _res_D_a = numpy.zeros((4, 4))
        _res_D_a[0, 0] = -1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = -1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = -1
        _res_D_a[3, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = -1
        return sym.LinearCameraCal.from_storage(_res), _res_D_a

    @staticmethod
    def compose_with_jacobians(a, b):
        # type: (sym.LinearCameraCal, sym.LinearCameraCal) -> T.Tuple[sym.LinearCameraCal, numpy.ndarray, numpy.ndarray]

        # Total ops: 4

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = _a[0] + _b[0]
        _res[1] = _a[1] + _b[1]
        _res[2] = _a[2] + _b[2]
        _res[3] = _a[3] + _b[3]
        _res_D_a = numpy.zeros((4, 4))
        _res_D_a[0, 0] = 1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = 1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = 1
        _res_D_a[3, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = 1
        _res_D_b = numpy.zeros((4, 4))
        _res_D_b[0, 0] = 1
        _res_D_b[1, 0] = 0
        _res_D_b[2, 0] = 0
        _res_D_b[3, 0] = 0
        _res_D_b[0, 1] = 0
        _res_D_b[1, 1] = 1
        _res_D_b[2, 1] = 0
        _res_D_b[3, 1] = 0
        _res_D_b[0, 2] = 0
        _res_D_b[1, 2] = 0
        _res_D_b[2, 2] = 1
        _res_D_b[3, 2] = 0
        _res_D_b[0, 3] = 0
        _res_D_b[1, 3] = 0
        _res_D_b[2, 3] = 0
        _res_D_b[3, 3] = 1
        return sym.LinearCameraCal.from_storage(_res), _res_D_a, _res_D_b

    @staticmethod
    def between_with_jacobians(a, b):
        # type: (sym.LinearCameraCal, sym.LinearCameraCal) -> T.Tuple[sym.LinearCameraCal, numpy.ndarray, numpy.ndarray]

        # Total ops: 4

        # Input arrays
        _a = a.data
        _b = b.data

        # Intermediate terms (0)

        # Output terms
        _res = [0.0] * 4
        _res[0] = -_a[0] + _b[0]
        _res[1] = -_a[1] + _b[1]
        _res[2] = -_a[2] + _b[2]
        _res[3] = -_a[3] + _b[3]
        _res_D_a = numpy.zeros((4, 4))
        _res_D_a[0, 0] = -1
        _res_D_a[1, 0] = 0
        _res_D_a[2, 0] = 0
        _res_D_a[3, 0] = 0
        _res_D_a[0, 1] = 0
        _res_D_a[1, 1] = -1
        _res_D_a[2, 1] = 0
        _res_D_a[3, 1] = 0
        _res_D_a[0, 2] = 0
        _res_D_a[1, 2] = 0
        _res_D_a[2, 2] = -1
        _res_D_a[3, 2] = 0
        _res_D_a[0, 3] = 0
        _res_D_a[1, 3] = 0
        _res_D_a[2, 3] = 0
        _res_D_a[3, 3] = -1
        _res_D_b = numpy.zeros((4, 4))
        _res_D_b[0, 0] = 1
        _res_D_b[1, 0] = 0
        _res_D_b[2, 0] = 0
        _res_D_b[3, 0] = 0
        _res_D_b[0, 1] = 0
        _res_D_b[1, 1] = 1
        _res_D_b[2, 1] = 0
        _res_D_b[3, 1] = 0
        _res_D_b[0, 2] = 0
        _res_D_b[1, 2] = 0
        _res_D_b[2, 2] = 1
        _res_D_b[3, 2] = 0
        _res_D_b[0, 3] = 0
        _res_D_b[1, 3] = 0
        _res_D_b[2, 3] = 0
        _res_D_b[3, 3] = 1
        return sym.LinearCameraCal.from_storage(_res), _res_D_a, _res_D_b
