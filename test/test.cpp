// 原 test.cpp
#include <iostream>
extern "C" {
    __declspec(dllexport) int add(int a, int b) {
        return a + b;
    }
    __declspec(dllexport) void print_sum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        std::cout << "Sum from 1 to " << n << " is " << sum << std::endl;
    }
}