#include<vector>
#include<string>
#include<iostream>
using namespace std;
//class Person {
//public:
//	Person(string name, int age)
//	{
//		_name = name;
//		_age = age;
//	}
//	string _name;
//	int _age;
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 23);
//	Person p2("bbb", 233);
//	Person p3("ccc", 2223);
//	Person p4("ddd", 223);
//	Person p5("eee", 223);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "���֣� " << (*it)._name << "���䣺 " << "(*it)._age" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
//void test01()
//{
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	vector<int> v5;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		v5.push_back(i + 5);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//void test01()
//{
//	vector<int> v1;//Ĭ�Ϲ��캯��
//	vector<int> v2(10, 23);
//	for (int i = 0; i > 10; i++)
//		v1.push_back(i);
//	vector<int> v3(v1.begin(), v1.end());
//	vector<int> v5(v2);
//	v5 = v3;
//	v5.assign(v1.begin(), v1.end());
//	v5.assign(10, 100);
//}