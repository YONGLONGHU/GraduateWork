#include<stdio.h>
size_t strlen(const char* str)
{
	const char* ptr = str;
	int count = 0;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return count;
}

char* strcpy(char* destination, const char* source)
{
	char* des = destination;
	char* sor = source;
	while (*sor != '\0')
	{
		*des = *sor;
		sor++;
		des++;
	}
	*des = '\0';
	return des;
}

char* strcat(char* destination, const char* source)
{
	char* des = destination;
	char* sour = source;
	while (*des != '\0')
		des++;
	while (*sour != '\0')
	{
		*des = *sour;
		des++;
		sour++;
	}
	*des = '\0';
	return des;
}

int strcmp(const char* str1, const char* str2) 
{
	while (*str1 && (*str1 == *str2)) 
	{
		str1++;
		str2++;
	}
	return (unsigned char)*str1 - (unsigned char)*str2;
}

//�Զ�������
//int main()
//{
//	struct Point
//	{
//		int x;
//		int y;
//	}p1; //�������͵�ͬʱ�������p1
//	struct Point p2; //����ṹ�����p2
//	//��ʼ�������������ͬʱ����ֵ��
//	struct Point p3 = { 1, 2 };
//
//	typedef struct Node
//	{
//		int data;
//		struct Node* next;
//	}Node;
//	Node node1 = { 1,NULL };
//
//	typedef struct Stu
//	{
//		char name[20];
//		int age;
//	}Stu;
//	Stu sudent2;
//	struct Stu student1 = { "huyonglogn",67 };
//	
//
//	return 0;
//}

//�ṹ���ڴ����
//#pragma pack(8)
//int main()
//{
//	struct S1
//	{
//		char c1;
//		int i;
//		char c2;
//	};
//	printf("%d\n", sizeof(struct S1));
//	
//	struct S2
//	{
//		char c1;
//		char c2;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S2));
//	
//	struct S3
//	{
//		double d;
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S3));
//
//	struct S4
//	{
//		char c1;
//		struct S3 s3;
//		double d;
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); 
//	print2(&s); //����ַ
//	return 0;
//}

//int main()
//{
	/*struct A
	{
		int _a : 2;
		int _b : 5;
		int _c : 10;
		int _d : 30;
	};
	printf("%d\n", sizeof(struct A));*/

	//enum Color//��ɫ
	//{
	//	RED = 1,
	//	GREEN = 2,
	//	BLUE = 4
	//};
	//enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣

//	union Un
//	{
//		char c;
//		int i;
//	};
//	//���ϱ����Ķ���
//	union Un un;
//	//�������������Ĵ�С
//	printf("%d\n", sizeof(un));
//
//
//	return 0;
//}

//int main()
//{
//	//����1
//	int num = 0;
//	scanf("%d", &num);
//	int arr[3] = { 0 };
//	//����2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	ptr = NULL;//�Ƿ��б�Ҫ��
//	return 0;
//}

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		//ʹ�ÿռ�
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		//ҵ����
//	}
//	else
//	{
//		//exit(EXIT_FAILURE);
//	}
//	//��չ����
//	//����1
//	ptr = realloc(ptr, 1000);
//
//	//����2
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//ҵ����
//	free(ptr);
//	return 0;
//}
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d", a, b, c);
	return 0;
}