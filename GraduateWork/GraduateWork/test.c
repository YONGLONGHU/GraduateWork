//#include<stdio.h>
//int main(void)
//{
//	const int a;
//	return 0;
//}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}