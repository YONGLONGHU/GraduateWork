#include<iostream>
using namespace std;
//class Person
//{
//public:
//	void print()
//	{
//		cout << "name；" << _name << endl;
//		cout << "age:" << endl;
//	}
//protected:
//	string _name = "peter";
//	int _age = 18;
//};
//class Student :public Person
//{
//protected:
//	int _stuid;
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // 工号
//};
//int main()
//{
//	Student s;
//	Teacher t;
//	s.print();
//	t.print();
//
//	return 0;
//
//}

//class Person
//{
//protected:
//	string _name; // 姓名
//	string _sex; // 性别
//	int _age; // 年龄
//};
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//void Test()
//{
//	Student sobj;
//	// 1.子类对象可以赋值给父类对象/指针/引用
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	//2.基类对象不能赋值给派生类对象
//	//sobj = pobj;
//
//	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
//	pp = &sobj;
//	Student * ps1 = (Student*)pp; // 这种情况转换时可以的。
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
//	ps2->_No = 10;
//}

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//
//void main()
//{
//	B b;
//	b.fun(10);
//};

//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name;
//};
//class Student :public Person
//{
//protected:
//	int _stuNum;
//};
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//void main()
//{
//	Person P;
//	Student s;
//	Display(P, s);
//}

//静态成员
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // 姓名
//public:
//	static int _count; // 统计人的个数。
//};
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//
//class Graduate : public Student
//{
//	void w1()
//	{
//		_stuNum = 0;
//	}
//protected:
//	string _seminarCourse; // 研究科目
//};
//
//void test()
//{
//	Student S1;
//	Student S2;
//	Student S3;
//	Graduate G1;
//	cout << " 人数 :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " 人数 :" << Person::_count << endl;
//}

//友元函数例子
//#include <iostream>
//class MyClass; // 前置声明
//class MyClass 
//{
//private:
//    int value;
//
//public:
//    MyClass(int val) : value(val) {}
//    friend int getValue( MyClass& obj); // 声明友元函数
//};
//
//// 友元函数的实现
//int getValue( MyClass& obj) {
//  obj.value=0; // 直接访问 MyClass 的私有成员
//  return 0;
//}
//
//int main() {
//    MyClass myObj(10);
//    std::cout << "Value: " << getValue(myObj) << std::endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//class Person; // 前置声明
//
//class Person {
//private:
//    std::string name;
//
//public:
//    Person(const std::string& n) : name(n) {}
//    friend class Address; // 声明友元类
//    void printName() const 
//    {
//        std::cout << "Name: " << name << std::endl;
//    }
//};
//
//class Address {
//public:
//    void printPersonInfo(const Person& person) 
//    {
//        std::cout << "Address of " << person.name << ": ";
//        // 友元类可以访问 Person 的私有成员
//    }
//};
//
//int main() 
//{
//    Person person("John Doe");
//    person.printName();
//    Address address;
//    address.printPersonInfo(person);
//    return 0;
//}
//class Person
//{
//protected:
//	string _name; // 姓名
//	string _sex;
//	int _age; // 年龄
//};
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//void Test()
//{
//	Student sobj;
//	// 1.子类对象可以赋值给父类对象/指针/引用
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	//2.基类对象不能赋值给派生类对象
//	//sobj = pobj;
//
//	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
//	pp = &sobj;
//	Student * ps1 = (Student*)pp; // 这种情况转换时可以的。
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
//	ps2->_No = 10;
//}

//class Car
//{
//public:
//	virtual void test()
//	{
//		cout << "test()" << endl;
//	}
//	virtual void Drive() = 0;
//};
//class BMC :public Car
//{
//public:
//
//	virtual void Drive()
//	{
//		cout << "Driven()" << endl;
//	}
//};
//int main()
//{
//	BMC car;
//	car.Drive();
//	return 0;
//}

