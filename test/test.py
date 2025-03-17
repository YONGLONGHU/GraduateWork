# -*- coding: utf-8 -*-
from ctypes import *
import time

if __name__ == '__main__':
    time_begin = time.perf_counter()

    dll = CDLL('./test.so')  # 或 './test.dll'（视系统而定）

    print(dll.add(5, 7))
    dll.print_sum(10000)

    t = time.perf_counter() - time_begin
    print("\nUse time: %s" % t)