#include<iostream>
using namespace std;
//int globalVar = 1;
//static int statisticVar = 1;
//void test()
//{
//	static int staticVar;
//	int localVar = 1;
//	int numn1[10] = { 1,2,3,4 };
//	char char2[] = "abcd";
//	const char* pchar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}
//void test()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//	int* p2 = (int*)calloc(4, sizeof(int));
//	int* p3 = (int*)realloc(p2, sizeof(int) * 10);
//	//free(p2);
//	if (p2 == p3)
//	{
//		free(p3);
//		p3 = p2 = nullptr;
//	}
//	else
//	{
//		free(p3);
//		free(p2);
//		p3 = p2 = nullptr;
//	}
//}
//C++��̬�ڴ����
void test()
{
	int* ptr = new int;
	int* ptr1 = new int(10);
	int* ptr2 = new int[3];

	delete ptr;
	delete ptr1;
	delete[]ptr2;
}
class Test
{
public:
	Test()
		: _data(0)
	{
		cout << "Test():" << this << endl;
	}

	~Test()
	{
		cout << "~Test():" << this << endl;
	}

private:
	int _data;
};

void Test1()
{
	Test* p1 = (Test*)malloc(sizeof(Test));
	free((p1));

	Test* p2 = (Test*)malloc(sizeof(Test) * 10);
	free(p2);
}
//new����ù��캯����delete�����������������malloc��free����
void Test2()
{
	Test* p1 = new Test;
	delete p1;

	Test* p2 = new Test[10];
	delete[]p2;
}
//malloc��free�Ǻ�����new��delete�ǲ�����

//�ڴ�й©:Ӧ�ó������ĳ���ڴ��,��Ϊ��ƴ���ʧȥ�˶Ըö��ڴ�Ŀ��ƣ����
//������ڴ���˷�,�ڴ�й©�ᵼ����ӦԽ��Խ�������տ���

//ģ����ף����ͱ��
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void Swap(double& left, double& right)
{
	double temp = left;
	left = right;
	right = temp;
}
//ģ�壺����ģ�塢��ģ��
void Swap(char& left, char& right)
{
	char temp = left;
	left = right;
	right = temp;
}

template<typename T>
void Swap(T& left, T& right)
{
	T temp = right;
	right = left;
	left = temp;
}

template<typename T>
T  Add(const T& left, const T& right)
{
	return left + right;
}
int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	Add(a1, (int)d1);
	return 0;
}