#include<iostream>
using namespace std;
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全价" << endl;
//	}
//};
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-半价" << endl;
//	}
//};
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person ps;
//	Student st;
//	Func(ps);
//	Func(st);
//	return 0;
//}

//协变
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* f() { return new A; }
//};
//
//class Student : public Person {
//public:
//	virtual B* f() { return new B; }
//};

//析构函数的重写
//class Person {
//public:
//	virtual ~Person() { cout << "~Person()" << endl; }
//};
//
//class Student : public Person {
//public:
//	virtual ~Student() { cout << "~Student()" << endl; }
//};
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//	return 0;
//}

//C++11 override和final
//修饰虚函数，表示该虚函数不能再被继承
//class Car
//{
//public:
//	virtual void Drive() final{}
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive() { cout << "Benz-舒适" << endl; }
//};

//override: 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错。
//class Car {
//public:
//	virtual void Drive() {}
//};
//
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-舒适" << endl; }
//};

//只有重写纯虚函数，派生类才能实例化出对象
//class Car
//{
//public:
//	virtual void Drive() = 0;
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-舒适" << endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-操控" << endl;
//	}
//};
//
//void Test()
//{
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//}

#include<iostream>
using namespace std;
class A {
public:
	A(const char* s) { cout << s << endl; }
	~A() {}
};
class B :virtual public A
{
public:
	B(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
};

class C :virtual public A
{
public:
	C(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
};
class D :public B, public C
{
public:
	D(const char* s1, const char* s2, const char* s3, const char* s4) :B(s1, s2), C(s1, s3), A(s1)
	{
		cout << s4 << endl;
	}
};

int main() {
	D* p = new D("class A", "class B", "class C", "class D");
	delete p;
	return 0;
}
