#include<iostream>
#include <cassert>
using namespace std;
//��������
//class Date
//{
//public:
//	Date()
//	{
//
//	}
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d2(2019, 8, 30);
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
//	Date d3();
//
//}
//// Ĭ�Ϲ��캯��
//class Date1
//{
//public:
//	Date1()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date1(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// ���²��Ժ�����ͨ��������
////void TestDate1()
////{
////	Date1 d1;//Ĭ�Ϲ��캯���������ˣ����Ա��벻ͨ����ֻ����һ��
////}
//
////��������
//typedef int DataType;
//class SeqList
//{
//public:
//	SeqList(int capacity=10)
//	{
//		_pData = (DataType*)malloc(capacity * sizeof(DataType));
//		assert(_pData);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~SeqList()
//	{
//		if (_pData)
//		{
//			free(_pData);
//			_pData = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	int* _pData;
//	size_t _capacity;
//	size_t _size;
//};
////�����������������Զ���ı����ռ�
//class String
//{
//public:
//	String(const char* str = "hello")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//
////�������캯��
//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main8()
//{
//	Date d1(1990,4,28);
//	Date d2(d1);
//	return 0;
//}
//
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//int main10()
//{
//	String s1("hello");
//	String s2(s1);
//}
//
////��ֵ���������
//class Date4
//{
//public:
//	Date4(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//private:
//	int _year;
//	int _month;
//	int _day;
//};
//bool operator==(const Date4& d1, const Date4& d2)
//{
//	return d1._year == d2._year
//	&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
//
//void TestOperator()
//{
//	Date4 d1(2005, 2, 23);
//	Date4 d2(2005, 2, 23);
//	cout << (d1 == d2) << endl;
//}
//
////class Date
////{
////public:
////	Date(int year = 1900, int month = 1, int day = 1)
////	{
////		_year = year;
////		_month = month;
////		_day = day;
////	}
////
////	// bool operator==(Date* this, const Date& d2)
////	// ������Ҫע����ǣ����������thisָ��ĵ��ú����Ķ���
////	bool operator==(const Date& d2)
////	{
////		_year = d2._year;
////		_month = d2._month;
////		_day = d2._day;
////	}
////private:
////	int _year;
////	int _month;
////	int _day;
////};
////int main()
////{
////	Date d1(1990.2,23);
////	Date d2(1991,2,23);
////	cout << (d1 == d2) << endl;
////	return 0;
////}
//
////class String1
////{
////public:
////	String1(const char* str = "")
////	{
////		_str = (char*)malloc(strlen(str) + 1);
////		strcpy(_str, str);
////	}
////
////	~String1()
////	{
////		cout << "~String()" << endl;
////		free(_str);
////	}
////private:
////	char* _str;
////};
////
////int main11()
////{
////	String1 s1("hello");
////	String1 s2("world");
////
////	s1 = s2;
////}
////class A
////{
////public:
////	A(int a)
////		:_a(a)
////	{}
////private:
////	int _a;
////};
//
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj; // û��Ĭ�Ϲ��캯��
//	int& _ref; // ����
//	const int _n; // const 
//};

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main1() {
//	A aa(1);
//	aa.Print();
//}
//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//	{}
//
//	explicit Date(int year)
//		:_year(year)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate()
//{
//	Date d1(2018);
//	// ��һ�����α������������Ͷ���ֵ
//	 // ʵ�ʱ������������2019����һ������������������������d1������и�ֵ
//	d1 = 2019;
//}
////Static��Ա��������Ա����
//class A
//{
//public:
//	A()
//	{
//		++_Count;
//	}
//	A(const A& t)
//	{
//		++_Count;
//	}
//	static int GetAcount()
//	{
//		return _Count;
//	}
//private:
//	static int _Count;
//};
//int A::_Count = 0;

//��Ԫ����
//class Date1
//{
//public:
//	Date1(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	ostream& operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" << _month << "-" << _day;
//		return _cout;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date1 d(2017, 12, 24);
//	d << cout;
//	d.operator<<(cout);
//	return 0;
//}
//
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//
//	return _cout;
//}
//
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//
//	return _cin;
//}
//int main()
//{
//	Date d(2019,2,33);
//	cin >> d;
//	cout << d << endl;
//	return 0;
//}

//��Ԫ��
//class Date; // ǰ������
//class Time
//{
//	friend class Date; // ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
//public:
//	Time(int hour, int minute, int second)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//		,_t(0,0,0)
//	{}
//
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int minJumps(vector<int>& nums) {
//    int n = nums.size();
//    if (n == 1) return 0;  // �Ѿ���Ŀ��λ��
//
//    int jumps = 0;  // ��¼��Ծ����
//    int farthest = 0;  // ��ǰ������������Զλ��
//    int end = 0;  // ��ǰ��Ծ�ı߽�
//
//    for (int i = 0; i < n - 1; ++i) {
//        farthest = max(farthest, i + nums[i]);  // ������Զλ��
//        if (i == end) {  // ���ﵱǰ��Ծ�߽磬������Ծ
//            jumps++;
//            end = farthest;  // ������Ծ�߽�
//        }
//        if (end >= n - 1) {  // ����Ѿ����Ե����յ�
//            break;
//        }
//    }
//
//    return jumps;
//}
//
//int main() {
//    vector<int> nums = { 3, 1, 1, 4, 3 };  // ��������
//    cout << "��С��Ծ����: " << minJumps(nums) << endl;  // ������
//    return 0;
//}

//�ڲ���
//class A
//{
//private:
//	static int k;
//		int h;
//public:
//	class B
//	{
//	void foo(const A& a)
//	{
//		cout << k << endl;
//		cout << a.h << endl;
//	}
//	};
//};
//int A::k = 0;
//
//int main()
//{
//	A::B b;
//	b.foo(A());
//	return 0;
//}

#include <iostream>
using namespace std;

class A {
public:
    static int k; // �� k ����Ϊ������
    int h;

    A() : h(0) {} // �ṩһ��Ĭ�Ϲ��캯��

    class B {
    public:
        void foo(const A& a) {
            cout << k << endl;
            cout << a.h << endl;
        }
    };
};

int A::k = 0; // ��ʼ����̬��Ա����

int main0() {
    A::B b;
    A a;
    b.foo(a);
    return 0;
}