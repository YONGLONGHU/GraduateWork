#include<iostream>
using namespace std;

typedef struct Stu
{
	char name[20];//����
	int age;//����
	char sex[5];//�Ա�
	char id[20];//ѧ��
};

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int mylenth(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}

//int main()
//{
//	print1(s);//���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
