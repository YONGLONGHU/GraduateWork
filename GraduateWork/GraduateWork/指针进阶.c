#include<stdio.h>
//int main()
//{
	/*char ss = 'W';
	char* ptr = &ss;
	printf("%s\n", *ptr);*/


	//char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
	//printf("%s\n", pstr);
	//return 0;

	/*char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";
	char* str4 = "hello bit.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");

	return 0;*/


	//int(*p)[10];
//}

//�����׵�ַ������ȡ��ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7 };
//	int(*p)[10] = &arr;
//	return 0;
//}

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", (*(arr+i))[j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr3(int(*arr)[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[0][i][j]);//����
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	print_arr3(&arr, 3, 5);
//	return 0;
//}

#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	/*test(arr);*/
//	test2(arr2);
//}

//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��
//{}
void test(int* arr[5])//ok��
{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok��
//{
//	printf("%d ", *arr);
//}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
}