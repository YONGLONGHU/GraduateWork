#include<iostream>
using namespace std;
#include<stack>
#include<vector>
#include<list>
//class MinStack
//{
//public:
//	void push(int x)
//	{
//		_elem.push(x);
//		if (_min.empty() || x <= _min.top())
//			_min.push(x);
//	}
//	void pop()
//	{
//		if (_min.top() == _elem.top())
//			_min.pop();
//
//		_elem.pop();
//	}
//	int top()
//	{
//		return _elem.top();
//	}
//	int getMin()
//	{
//		return _min.top();
//	}
//private:
//	//保存栈中的元素
//	stack<int> _elem;
//	//保存栈中的最小值
//	stack<int> _min;
//};
//
//template<class T>
//class stack
//{
//public:
//	stack() {}
//	void push(const T& x) { _c.push_back(x); }
//	void pop() { _c.pop_back(); }
//	T& top() { return _c.back(); }
//	const T& top()const { return _c.back(); }
//	size_t size()const { return _c.size(); }
//	bool empty()const { return _c.empty(); }
//
//private:
//	vector<T> _c;
//};

//队列的模拟实现
//template<typename T>
//class queue
//{
//public:
//public:
//	queue() {}
//	void push(const T& x) { _c.push_back(x); }
//	void pop() { _c.pop_front(); }
//	T& back() { return _c.back(); }
//	const T& back()const { return _c.back(); }
//	T& front() { return _c.front(); }
//	const T& front()const { return _c.front(); }
//	size_t size()const { return _c.size(); }
//	bool empty()const { return _c.empty(); }
//private:
//	list<T> _c;
//};
//
//template<class T,size_t N=10>
//class array
//{
//public:
//	size_t size()const
//	{
//		return _size;
//	}
//	bool empty()const
//	{
//		return 0 == _size;
//	}
//	T& operator[](size_t index)
//	{
//		return _array[index];
//	}
//	const T& operator[](size_t index)const
//	{
//		return _array[index];
//	}
//private:
//	T _array[N];
//	size_t _size;
//};

//函数模板的特化
//template<class T>
//bool IsEqual(T& left, T& right)
//{
//	return left == right;
//}
//
//void Test()
//{
//	const char* p1 = "hello";
//	const char* p2 = "world";
//
//	if (IsEqual(p1, p2))
//		cout << p1 << endl;
//	else
//		cout << p2 << endl;
//}
//
//template<>
//bool IsEqual<char*>(char*& left, char*& right)
//{
//	if (strcmp(left, right) > 0)
//		return true;
//	return false;
//}

//template<class T1,class T2>
//class Data
//{
//public:
//	Data() { cout << "Data<T1,T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//template<>
//class Data<int, char>
//{
//public:
//	Data() { cout << "Data<int char>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//void TestVector()
//{
//	Data<int, int> d1;
//	Data<int, char> d2;
//}

//#include<sstream>
//int main()
//{
//	int a = 12345678;
//	string sa;
//
//	stringstream s;
//	s << a;
//	s >> sa;
//
//	s.clear();
//	double d = 12.34;
//	s << d;
//	s >> sa;
//
//	string sValue;
//	sValue = s.str();
//	cout << sValue << endl;
//	return 0;
//}
//字符串拼接
//int main()
//{
//	stringstream sstream;
//
//	// 将多个字符串放入 sstream 中
//	sstream << "first" << " " << "string,";
//	sstream << " second string";
//	cout << "strResult is: " << sstream.str() << endl;
//
//	// 清空 sstream
//	sstream.str("");
//	sstream << "third string";
//	cout << "After clear, strResult is: " << sstream.str() << endl;
//	return 0;
//}