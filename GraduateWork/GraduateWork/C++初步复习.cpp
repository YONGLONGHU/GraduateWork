#include<iostream>
using namespace std;
//�����ռ䣬����������ͻ��������Ⱦ
//namespace N
//{
//	int a;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
////2. �����ռ����Ƕ��
//namespace N2
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	namespace N3
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//
////3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//
//using N::a;
//int main1()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", a);
//	return 0;
//}
//using namespace N;
//
//int main2()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", a);
//	Add(10, 20);
//	return 0;
//}
//
//int main3()
//{
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	return 0;
//}

//ȱʡ����
//void TestFunc(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main4()
//{
//	TestFunc(); // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	TestFunc(10); // ����ʱ��ʹ��ָ����ʵ��
//}


//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//
//void TestFunc(int a,int b)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//int main()
//{
//	TestFunc();
//	TestFunc(10,20);
//}

//����
//void TestRse()
//{
//	int a = 0;
//	int& b = a;
//
//	cout << &a << endl;
//	cout << &b << endl;
//}
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

//int& Add1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add1(1, 2);
//	Add1(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//		e *= 2;
//
//	for (auto e : array)
//		cout << e << " ";
//
//	return 0;
//}

//struct student
//{
//	void SetStu(const char* _name, const char* _gender, int _age)
//	{
//		strcpy(name, _name);
//		strcpy(gender, _gender);
//		age = _age;
//	}
//	void PrintStu()
//	{
//		cout << age << " " << gender << " " << name << endl;
//	}
//
//	int age;
//	char gender[3];
//	char name[20];
//};
//
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day;
//};
//int main6()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	return 0;
//}
//
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//int main7()
//{
//	A* p = NULL;
//	p->PrintA();
//	p->Show();
//	return 0;
//}
//
//
