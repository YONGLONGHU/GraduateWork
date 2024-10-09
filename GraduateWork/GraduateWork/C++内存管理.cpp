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
//C++动态内存管理
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
//new会调用构造函数，delete会调用析构函数，而malloc与free不会
void Test2()
{
	Test* p1 = new Test;
	delete p1;

	Test* p2 = new Test[10];
	delete[]p2;
}
//malloc和free是函数，new和delete是操作符

//内存泄漏:应用程序分配某段内存后,因为设计错误，失去了对该段内存的控制，因而
//造成了内存的浪费,内存泄漏会导致响应越来越慢，最终卡死

//模板初阶，泛型编程
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
//模板：函数模板、类模板
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
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	Add(a1, (int)d1);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	double b = 3.345;
//	Add<int>(a, b);
//	return 0;
//}

//类模板
template<typename T>
class Vector
{
public:
	Vector(size_t capacity=10)
		:_pdata(new T[capacity])
		,_size(0)
		,_capacity(capacity)
	{
	}
	~Vector();
	void PushBack(const T& data);
	void PopBack();
	size_t Size() { return _size; }

	T& operator[](size_t pos)
	{
		assert(pos < _size);
		return _pData[pos];
	}
private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};
template<typename T>
Vector<T>::~Vector()
{
	if (_pData)
	{
		delete[] _pData;
		_size = _capacity = 0;
	}
}
//void main()
//{
//	Vector<int> s1;
//	Vector<double> s2;
//}
void Teststring2()
{
	string s;
	// 测试reserve是否会改变string中有效元素个数
	s.reserve(100);
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	// 测试reserve参数小于string的底层空间大小时，是否会将空间缩小
	s.reserve(50);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

