#include<iostream>
using namespace std;
//class Person
//{
//public:
//	void print()
//	{
//		cout << "name��" << _name << endl;
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
//	int _jobid; // ����
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
//	string _name; // ����
//	string _sex; // �Ա�
//	int _age; // ����
//};
//class Student : public Person
//{
//public:
//	int _No; // ѧ��
//};
//void Test()
//{
//	Student sobj;
//	// 1.���������Ը�ֵ���������/ָ��/����
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	//2.��������ܸ�ֵ�����������
//	//sobj = pobj;
//
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	pp = &sobj;
//	Student * ps1 = (Student*)pp; // �������ת��ʱ���Եġ�
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����
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

//��̬��Ա
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//};
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//
//class Graduate : public Student
//{
//	void w1()
//	{
//		_stuNum = 0;
//	}
//protected:
//	string _seminarCourse; // �о���Ŀ
//};
//
//void test()
//{
//	Student S1;
//	Student S2;
//	Student S3;
//	Graduate G1;
//	cout << " ���� :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " ���� :" << Person::_count << endl;
//}

//��Ԫ��������
//#include <iostream>
//class MyClass; // ǰ������
//class MyClass 
//{
//private:
//    int value;
//
//public:
//    MyClass(int val) : value(val) {}
//    friend int getValue( MyClass& obj); // ������Ԫ����
//};
//
//// ��Ԫ������ʵ��
//int getValue( MyClass& obj) {
//  obj.value=0; // ֱ�ӷ��� MyClass ��˽�г�Ա
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
//class Person; // ǰ������
//
//class Person {
//private:
//    std::string name;
//
//public:
//    Person(const std::string& n) : name(n) {}
//    friend class Address; // ������Ԫ��
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
//        // ��Ԫ����Է��� Person ��˽�г�Ա
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
//	string _name; // ����
//	string _sex;
//	int _age; // ����
//};
//class Student : public Person
//{
//public:
//	int _No; // ѧ��
//};
//void Test()
//{
//	Student sobj;
//	// 1.���������Ը�ֵ���������/ָ��/����
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	//2.��������ܸ�ֵ�����������
//	//sobj = pobj;
//
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	pp = &sobj;
//	Student * ps1 = (Student*)pp; // �������ת��ʱ���Եġ�
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����
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

