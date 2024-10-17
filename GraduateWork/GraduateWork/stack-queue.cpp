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
