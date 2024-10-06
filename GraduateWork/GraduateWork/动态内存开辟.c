#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (ptr != NULL)
//	{
//		for (int i = 0; i < num; ++i)
//		{
//			*(ptr + i) = i;
//		}
//	}
//	for (int j = 0; j < num; j++)
//	{
//		printf("%d ", *(ptr + j));
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr =(int*) calloc(10, sizeof(int));
//	if (ptr != NULL)
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			printf("%d ", *(ptr + i));
//		}
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	//代码1
//	ptr = realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//
//	//代码2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}

//void test()
//{
//	int* ptr = NULL;
//	ptr = (int*)malloc(100);
//	ptr++;
//	free(ptr);
//	return;
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void main()
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//char* Getmem(void)
//{
//	char* ptr = (char*)malloc(20);
//	if (ptr != NULL)
//	{
//		strcpy(ptr, "hello world");
//	}
//	return ptr;
//}
//
//void main()
//{
//	char* str = NULL;
//	str = Getmem();
//	printf(str);
//}

void Getmem(char** p, int num)
{
	*p = (char*)malloc(num);
}
int main()
{
	char* ptr = NULL;
	Getmem(&ptr, 100);
	strcpy(ptr, "hell0");
	printf(ptr);
	return 0;
}