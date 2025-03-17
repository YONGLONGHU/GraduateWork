python及java调用C++动态链接库
一、C++动态链接库生成
代码示例如下：
#include <stdio.h>  
extern "C"  //要加extern "C",  C为大写，小写会无法识别。
{
    int add(int a, int b)
    {
        return a + b;
    }
 
    void print_sum(unsigned long ulNum)
    {
        while (ulNum != 0)
        {
            printf("The ulNum is : %u\n", ulNum--);
        }
    }
}

cmd窗口输入指令转化为动态链接库
g++ -o test.so -shared -fPIC test.cpp  

编写python代码测试
from ctypes import *
import time
if __name__=='__main__':
    time_begin=time.clock()
    dll=CDLL('./test.so')
    print(dll.add(5,7))
    dll.print_sum(10000)
    t=time.clock()-time_begin
    print("\nUse time: %s" %t)
保证文件都在同一级目录下
cmd窗口执行python test.py完成测试

二、Java测试C++动态链接库
编写.cpp源代码
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
编译为dll动态链接库：
g++ -shared -o test.dll test.cpp
编写JNI接口：
#include <jni.h>
#include <windows.h>

typedef int (*AddFunc)(int, int);
typedef void (*PrintSumFunc)(int);

extern "C" {
    JNIEXPORT jint JNICALL Java_TestNative_add(JNIEnv *env, jobject obj, jint a, jint b) {
        HMODULE hDLL = LoadLibrary("test.dll");
        if (!hDLL) return -1;
        AddFunc add = (AddFunc)GetProcAddress(hDLL, "add");
        if (!add) return -1;
        int result = add(a, b);
        FreeLibrary(hDLL);
        return result;
    }

    JNIEXPORT void JNICALL Java_TestNative_printSum(JNIEnv *env, jobject obj, jint n) {
        HMODULE hDLL = LoadLibrary("test.dll");
        if (!hDLL) return;
        PrintSumFunc print_sum = (PrintSumFunc)GetProcAddress(hDLL, "print_sum");
        if (print_sum) print_sum(n);
        FreeLibrary(hDLL);
    }
}
编译为.dll
g++ -shared -I"D:\java\jdk-16.0.1\include" -I"D:\java\jdk-16.0.1\include\win32" -o TestNative.dll TestNativeBridge.cpp

编写java测试代码
public class TestNative {
    public native int add(int a, int b);
    public native void printSum(int n);

    static {
        System.loadLibrary("TestNative"); // 加载桥接 DLL
    }

    public static void main(String[] args) {
        TestNative test = new TestNative();
        long timeBegin = System.nanoTime();
        int result = test.add(5, 7);
        System.out.println(result);
        test.printSum(10000);
        double timeElapsed = (System.nanoTime() - timeBegin) / 1_000_000_000.0;
        System.out.printf("\nUse time: %.6f seconds%n", timeElapsed);
    }
}

编写java代码：javac  TestNative.java
执行可执行文件j：java -cp . TestNative