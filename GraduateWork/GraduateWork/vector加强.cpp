//#include<vector>
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
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> results;
//        backtrack(nums, 0, results);
//        return results;
//    }
//
//private:
//    void backtrack(vector<int>& nums, int start, vector<vector<int>>& results) {
//        if (start == nums.size()) {
//            results.push_back(nums); // ���浱ǰ����
//            return;
//        }
//
//        for (int i = start; i < nums.size(); ++i) {
//            swap(nums[start], nums[i]);            // ����Ԫ��
//            backtrack(nums, start + 1, results);   // �ݹ���ã�������һ��Ԫ�ص�����
//            swap(nums[start], nums[i]);            // ��ԭ����������
//        }
//    }
//};
//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> stk;
//        for (int i = 0; i < s.size(); i++) {
//            if (s[i] == '(')
//                stk.push(')');
//            else if (s[i] == '[')
//                stk.push(']');
//            else if (s[i] == '{')
//                stk.push('}');
//            else if (!stk.empty() && s[i] == stk.top()) {
//                stk.pop();
//            }
//            else {
//                return false;
//            }
//        }
//        return stk.empty();
//    }
//};
//class MinStack {
//    stack<int> x_stack;
//    stack<int> min_stack;
//public:
//    MinStack() {
//        min_stack.push(INT_MAX);
//    }
//
//    void push(int val) {
//        x_stack.push(val);
//        min_stack.push(min(min_stack.top(), val));
//    }
//
//    void pop() {
//        x_stack.pop();
//        min_stack.pop();
//    }
//    int top()
//    {
//        return x_stack.top();
//    }
//
//    int getMin() {
//        return min_stack.top();
//    }
//};
//class Solution {
//public:
//    vector<int> dailyTemperatures(vector<int>& temperatures) {
//        vector<int> result(temperatures.size(), 0);
//        stack<int> s; // ����ջ���洢����
//
//        for (int i = 0; i < temperatures.size(); ++i) {
//            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
//                int idx = s.top();
//                s.pop();
//                result[idx] = i - idx; // ����������
//            }
//            s.push(i); // ����ǰ����ѹ��ջ
//        }
//
//        return result;
//    }
//};
//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int count0 = 0; int count1 = 0; int count2 = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//                count0++;
//            else if (nums[i] == 1)
//                count1++;
//            else
//                count2++;
//        }
//        for (int i = 0; i < count0; i++)
//            nums[i] = 0;
//        for (int i = count0; i < count0 + count1; i++)
//            nums[i] = 1;
//        for (int i = count0 + count1; i < nums.size(); i++)
//            nums[i] = 2;
//    }
//};
//#include <list>
//#include <string>
//class Person {
//public:
//	Person(string name, int age, int height) {
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//public:
//	string m_Name;  //����
//	int m_Age;
//	//����
//	int m_Height;   //���
//};
//bool ComparePerson(Person& p1, Person& p2) {
//    if (p1.m_Age == p2.m_Age) {
//        return p1.m_Height > p2.m_Height;
//    }
//    else
//    {
//        return  p1.m_Age < p2.m_Age;
//    }
//}
//void test01() {
//
//    list<Person> L;
//
//    Person p1("����", 35, 175);
//    Person p2("�ܲ�", 45, 180);
//    Person p3("��Ȩ", 40, 170);
//    Person p4("����", 25, 190);
//    Person p5("�ŷ�", 35, 160);
//    Person p6("����", 35, 200);
//
//    L.push_back(p1);
//    L.push_back(p2);
//    L.push_back(p3);
//    L.push_back(p4);
//    L.push_back(p5);
//    L.push_back(p6);
//    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//        cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//            << " ��ߣ� " << it->m_Height << endl;
//    }
//
//    cout << "---------------------------------" << endl;
//    L.sort(ComparePerson); //����
//
//    for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//        cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//            << " ��ߣ� " << it->m_Height << endl;
//    }
//}
//int main() {
//    test01();
//    return 0;
//}
//#include<set>
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(700);
//	set<int>s2(s1);
//	printSet(s2);
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test01();
//	return 0;
//}
//#include<string>
//void test01()
//{
//	pair<string, int>p(string("Tom"), 20);
//	cout << "������ " << p.first << "����: " << p.second << endl;
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
//}
//	int main()
//	{
//		test01();
//		return 0;
//	}
//class Solution {
//public:
//    int reverse(int x)
//    {
//        int rev = 0;
//        while (x != 0)
//        {
//            if (rev<INT_MIN / 10 || rev>INT_MAX / 10)
//            {
//                return 0;
//            }
//            int dig = x % 10;
//            x /= 10;
//            rev = rev * 10 + dig;
//        }
//        return rev;
//    }
//};
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        // ��������0��β���������ǻ�����
//        if (x < 0 || (x % 10 == 0 && x != 0)) {
//            return false;
//        }
//
//        int reverse_data = 0;
//        int temp = x;
//
//        // ��ת���֣�ͬʱ������
//        while (x > 0) {
//            int digit = x % 10;
//            if (reverse_data > INT_MAX / 10 || (reverse_data == INT_MAX / 10 && digit > 7)) {
//                return false; // ������
//            }
//            reverse_data = reverse_data * 10 + digit;
//            x /= 10;
//        }
//
//        // �Ƚ�ԭʼ���ֺͷ�ת�������
//        return temp == reverse_data;
//    }
//};
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val)
//    {
//        int length = nums.size();
//        int left = 0;
//        for (int right = 0; right < length; right++)
//        {
//            if (nums[right] != val)
//            {
//                nums[left] = nums[right];
//                left++;
//            }
//        }
//        return left;
//    }
//};
//#include<deque>
//int main()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i + 1);
//	}
//	deque<int> d2(d1.begin(), d1.end());
//	deque<int> d3(10, 100);
//	deque<int> d4 = d3;
//	return 0;
//}
//#include<stack>
//int main()
//{
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//	s.push(101);
//	s.push(201);
//	while (!s.empty())
//	{
//		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ�� " << s.size() << endl;
//	return 0;
//}
//#include<set>
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//���캯����������ֵ
//int main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(12); 
//	s1.insert(0); 
//	s1.insert(101); 
//	s1.insert(110);
//	printSet(s1);
//	set<int> s2(s1);
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//	return 0;
//}
//void main()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	if (s1.empty())
//		cout << "s1Ϊ��" << endl;
//	else
//	{
//		cout << "s2��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
//	}
//	set<int>s2 = s1;
//	s2.insert(12);
//	s2.insert(121);
//	s2.insert(102);
//	s1.swap(s2);
//}
//int main()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
	//printSet(s1);
	//s1.erase(s1.begin());
	//printSet(s1);
	//s1.erase(30);
	////s1.erase(s1.begin(), s1.end());
	//s1.clear();

    //ͳ�ƺͲ���
	/*set<int>::iterator pos = s1.find(30);
	int num = s1.count(30);
	cout << "num = " << num << endl;
	return 0;*/
//}
//int main()
//{
//	multiset<int> ms;
//	ms.insert(110);
//	ms.insert(110);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	return 0;
//}

//pair���鴴��
//#include<string>
//int main()
//{
//	pair<string, int>p(string("Tom"), 20);
//	cout << p.first << " " << p.second << " ";
//	pair<string, int>p2 = make_pair("long", 22);
//	return 0;
//}
//#include<map>
//void printMap(map<int,int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "key= " << it->first << "value= " << it->second << endl;
//	cout << endl;
//}
//int main1()
//{
	/*map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 110));
	m.insert(pair<int, int>(3, 1310));
	m.insert(pair<int, int>(4, 0));
	printMap(m);
	map<int,int>m2;
	m2 = m;*/
	//map<int, int> m;
	//m.insert(pair<int, int>(1, 10));
	//m.insert(make_pair(2, 19));
	//m.insert(map<int, int>::value_type(3, 30));
	//m[4] = 1000;
	//m[4] = 40;
	//printMap(m);

	////ɾ��
	//m.erase(m.begin());
	//printMap(m);

	//m.erase(3);
	//printMap(m);

	//���
	/*m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
	return 0;
}*/
//class myCompare {
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	map<int, int, myCompare>m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key: " << it->first << "value: " << it->second << endl;
//	}
//}
#include<algorithm>
#include<vector>

void print01(int val)
{
	cout << val << " ";
}
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(),print01);
	cout << endl;
	for_each(v.begin(), v.end(),print02());
}
int main()
{
	test01();
	return 0;
}