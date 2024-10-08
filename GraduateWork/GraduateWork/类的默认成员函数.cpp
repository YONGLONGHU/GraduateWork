#include<iostream>
#include <cassert>
using namespace std;
//析构函数
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
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//
//}
//// 默认构造函数
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
//// 以下测试函数能通过编译吗？
////void TestDate1()
////{
////	Date1 d1;//默认构造函数有两个了，所以编译不通过，只能有一个
////}
//
////析构函数
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
////析构函数可以清理自定义的变量空间
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
////拷贝构造函数
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
////赋值运算符重载
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
////	// 这里需要注意的是，左操作数是this指向的调用函数的对象
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
//	A _aobj; // 没有默认构造函数
//	int& _ref; // 引用
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
//	// 用一个整形变量给日期类型对象赋值
//	 // 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值
//	d1 = 2019;
//}
////Static成员变量及成员函数
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

//友元函数
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

//友元类
//class Date; // 前置声明
//class Time
//{
//	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
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
//		// 直接访问时间类私有的成员变量
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
//    if (n == 1) return 0;  // 已经在目标位置
//
//    int jumps = 0;  // 记录跳跃次数
//    int farthest = 0;  // 当前可以跳到的最远位置
//    int end = 0;  // 当前跳跃的边界
//
//    for (int i = 0; i < n - 1; ++i) {
//        farthest = max(farthest, i + nums[i]);  // 更新最远位置
//        if (i == end) {  // 到达当前跳跃边界，必须跳跃
//            jumps++;
//            end = farthest;  // 更新跳跃边界
//        }
//        if (end >= n - 1) {  // 如果已经可以到达终点
//            break;
//        }
//    }
//
//    return jumps;
//}
//
//int main() {
//    vector<int> nums = { 3, 1, 1, 4, 3 };  // 输入数据
//    cout << "最小跳跃次数: " << minJumps(nums) << endl;  // 输出结果
//    return 0;
//}

//内部类
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
    static int k; // 将 k 声明为公共的
    int h;

    A() : h(0) {} // 提供一个默认构造函数

    class B {
    public:
        void foo(const A& a) {
            cout << k << endl;
            cout << a.h << endl;
        }
    };
};

int A::k = 0; // 初始化静态成员变量

int main0() {
    A::B b;
    A a;
    b.foo(a);
    return 0;
}