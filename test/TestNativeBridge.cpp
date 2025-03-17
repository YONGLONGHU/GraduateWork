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