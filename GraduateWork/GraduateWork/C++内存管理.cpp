#include<iostream>
using namespace std;
int globalVar = 1;
static int statisticVar = 1;
void test()
{
	static int staticVar;
	int localVar = 1;
	int numn1[10] = { 1,2,3,4 };
	char char2[] = "abcd";
	const char* pchar3 = "abcd";
	int* ptr1 = (int*)malloc(sizeof(int) * 4);
	int* ptr2 = (int*)calloc(4, sizeof(int));
	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
	free(ptr1);
	free(ptr3);
}