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
//#include<algorithm>
//#include<vector>
//
//void print01(int val)
//{
//	cout << val << " ";
//}
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(),print01);
//	cout << endl;
//	for_each(v.begin(), v.end(),print02());
//}
//int main()
//{
//	test01();
//	return 0;
//}
//#include<vector>
//#include<algorithm>
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val<<" ";
//	}
//};
//void test()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i + 1);
//	vector<int>vTarget;
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(),TransForm());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//}
//int main()
//{
//	test();
//	return 0;
//}

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//			return true;
//		return false;
//	}
//public:
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "������" << it->m_name << "���䣺 " << it->m_age << endl;
//	}
//}
//class Person 
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫƱ" << endl;
//	}
//};
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫƱ" << endl;
//	}
//};
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person p1;
//	Student st;
//	Func(p1); Func(st);
//	return 0;
//}
//class Person
//{
//public:
//	Person()
//	{
//		m_a = 0;
//		m_b = 0;
//	}
//	void showPerson() const
//	{
//		//this = nullptr;
//		//this->m_a = 0;
//		this->m_b = 0;
//	}
//public:
//	int m_a;
//	mutable int m_b;
//};
//void test()
//{
//	const Person ps;
//	cout << ps.m_a << endl;
//	ps.m_a = 1;
//	ps.m_a = 2;
//	ps.showPerson();
//}
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//int main()
//{
//	MyAdd add;
//	int ret = add(1, 2);
//	cout << MyAdd(10, 20) << endl;
//}
//class Solution {
//public:
//    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
//    {
//        int length = intervals.size();
//        int a = newInterval[0], b = newInterval[1];
//        vector<vector<int>> result;
//        if (b < intervals[0][0])
//        {
//            intervals.insert(intervals.begin(), newInterval);
//            return intervals;
//        }
//        if (a > intervals[length - 1][1])
//        {
//            intervals.push_back(newInterval);
//            return intervals;
//        }
//        int point = 0;
//        while (a >= intervals[point][0])
//        {
//            point++;
//            result.push_back(intervals[point]);
//        }
//        if (intervals[point - 1][1] >= b)
//            return intervals;
//        else
//            result.push_back(newInterval);
//        for (int i = point; i < length; i++)
//        {
//            if (b > intervals[i][0])
//            {
//                result[point - 1][1] = intervals[i][1];
//                break;
//            }
//            result.push_back(intervals[i]);
//        }
//        return result;
//    }
//};
//class Solution {
//public:
//	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//		int n = intervals.size();
//		vector<vector<int>> result;
//		int i = 0; // Pointer for intervals
//		// Insert newInterval if it's smaller than any existing interval
//		while (i < n && intervals[i][1] < newInterval[0]) {
//			result.push_back(intervals[i++]);
//		}
//		// Merge overlapping intervals
//		while (i < n && intervals[i][0] <= newInterval[1]) {
//			newInterval[0] = min(newInterval[0], intervals[i][0]);
//			newInterval[1] = max(newInterval[1], intervals[i][1]);
//			++i;
//		}
//		result.push_back(newInterval); // Insert the newInterval
//		// Insert the rest of intervals
//		while (i < n) {
//			result.push_back(intervals[i++]);
//		}
//		return result;
//	}
//};
//class Solution {
//public:
//	int lengthOfLastWord(string s) {
//		int length = 0; // ���ڼ�¼���ʵĳ���
//		bool inWord = false; // ����Ƿ��ڵ�����
//
//		// ������������ַ���
//		for (int i = s.length() - 1; i >= 0; --i) {
//			if (s[i] != ' ') {
//				++length; // �����ǰ�ַ����ǿո����ӳ��ȼ���
//				inWord = true; // ��ǵ�ǰ�ڵ�����
//			}
//			else {
//				if (inWord) break; // ��������ո���֮ǰ�ڵ����У�ֹͣ����
//			}
//		}
//
//		return length; // �������һ�����ʵĳ���
//	}
//};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//	ListNode* rotateRight(ListNode* head, int k)
//	{
//		if (k == 0 || head == nullptr || head->next == nullptr)
//			return head;
//		ListNode* cur = head;
//		int length = 1;
//		while (cur->next != nullptr)
//		{
//			cur = cur->next;
//			length++;
//		}
//		cur->next = head;
//		int add = length - k % length;
//		while (add)
//		{
//			cur = cur->next;
//			add--;
//		}
//		ListNode* result = cur->next;
//		cur->next = nullptr;
//		return result;
//	}
//};
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int n = digits.size();
//
//		// �����һλ��ʼ����
//		for (int i = n - 1; i >= 0; i--) {
//			if (digits[i] != 9) {
//				// �����ǰλ���� 9��ֱ�Ӽ� 1
//				digits[i]++;
//				return digits;
//			}
//			else {
//				// �����ǰλ�� 9������ǰλ��Ϊ 0�������������λ
//				digits[i] = 0;
//			}
//		}
//
//		// ���ѭ��������˵������λ���� 9�����Ӧ���� 100...0������ 999 -> 1000��
//		vector<int> result(n + 1, 0);
//		result[0] = 1; // �������λΪ 1
//		return result;
//	}
//};
//class Solution {
//public:
//	string addBinary(string a, string b)
//	{
//		int i = a.size() - 1;
//		int j = b.size() - 1;
//		int carry = 0;
//		string result = "";
//		while (i >= 0 || j >= 0 || carry > 0)
//		{
//			int sum = carry;
//			if (i >= 0)
//			{
//				sum += a[i] - '0';
//				i--;
//			}
//			if (j >= 0)
//			{
//				sum += b[j] - '0';
//				j--;
//			}
//			result = to_string(sum % 2) + result;
//			carry = sum / 2;
//		}
//		return result;
//	}
//};
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& numbers, int target) {
//		int left = 0;
//		int right = numbers.size() - 1;
//		vector<int>result;
//		while (left < right)
//		{
//			int sum = numbers[left] + numbers[right];
//			if (sum == target)
//			{
//				result.push_back(left + 1);
//				result.push_back(right + 1);
//				return result;
//			}
//			else if (sum < target)
//				left++;
//			else
//				right--;
//		}
//		return result;
//	}
//};
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		int count = 0;//ͳ�Ʒ��ظ�Ԫ��
//		int i;
//		for (i = 0; i < nums.size() - 1; i++)
//		{
//			if (nums[i] != nums[i + 1])
//			{
//				nums[count] = nums[i];
//				count++;
//			}
//			else
//				continue;
//		}
//		nums[count++] = nums[i];
//		return count;
//	}
//};
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		if (nums.size() <= 2)
//			return nums.size();
//		int count = 0; int i;
//		for (i = 0; i < nums.size(); i++)
//		{
//			int temp = 1;
//			while (i + temp < nums.size() && nums[i] == nums[i + temp])
//				temp++;
//			if (temp == 1)
//				nums[count++] = nums[i];
//			else
//			{
//				nums[count++] = nums[i + temp - 2];
//				nums[count++] = nums[i + temp - 1];
//				i += temp - 1;
//			}
//		}
//		return count;
//	}
//};
//class Solution {
//public:
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		int m = nums1.size();
//		int n = nums2.size();
//		if (m > n) {
//			return findMedianSortedArrays(nums2, nums1); // ��֤nums1�ǽ϶̵�����
//		}
//
//		int imin = 0, imax = m, halfLen = (m + n + 1) / 2;
//		while (imin <= imax) {
//			int i = (imin + imax) / 2;
//			int j = halfLen - i;
//
//			int maxLeft1 = (i == 0 ? INT_MIN : nums1[i - 1]);
//			int minRight1 = (i == m ? INT_MAX : nums1[i]);
//
//			int maxLeft2 = (j == 0 ? INT_MIN : nums2[j - 1]);
//			int minRight2 = (j == n ? INT_MAX : nums2[j]);
//
//			if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
//				// �ҵ�����λ��
//				return (m + n) % 2 == 0
//					? (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0
//					: max(maxLeft1, maxLeft2);
//			}
//			else if (maxLeft1 > minRight2) {
//				imax = i - 1;
//			}
//			else {
//				imin = i + 1;
//			}
//		}
//
//		return 0.0; // ������ִ�е�����
//	}
//};
//class Solution {
//public:
//	int threeSumClosest(vector<int>& nums, int target)
//	{
//		sort(nums.begin(), nums.end());
//		int ans = nums[0] + nums[1] + nums[2];
//		for (int i = 0; i < nums.size(); ++i)
//		{
//			int start = i + 1; int end = nums.size() - 1;
//			while (start < end)
//			{
//				int sum = nums[i] + nums[start] + nums[end];
//				if (abs(target - sum) < abs(target - ans))
//					ans = sum;
//				if (sum > target)
//					end--;
//				else
//					start++;
//			}
//		}
//		return ans;
//	}
//};
//class Solution {
//public:
//	int strStr(string haystack, string needle)
//	{
//		int par_haystack = haystack.size();
//		int son_needle = needle.size();
//		for (int i = 0; i < par_haystack - son_needle + 1; i++)
//		{
//			int flag = 1;
//			for (int j = 0; j < son_needle; j++)
//			{
//				if (needle[j] != haystack[i + j])
//					flag = 0;
//			}
//			if (flag == 0)
//				continue;
//			else
//				return i;
//		}
//		return -1;
//	}
//};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head)
//	{
//		if (head == nullptr || head->next == nullptr)
//			return head;
//		ListNode* dummy = new ListNode(0);
//		dummy->next = head;
//		ListNode* cur = dummy;
//		ListNode* next = cur->next;
//		while (next)
//		{
//			int ans = 1;
//			while (next->next != nullptr && next->val == next->next->val)
//			{
//				ans++;
//				next = next->next;
//			}
//			if (ans == 1)
//			{
//				cur = cur->next;
//				next = next->next;
//			}
//			else
//			{
//				cur->next = next->next;
//				next = next->next;
//			}
//		}
//		return dummy->next;
//	}
//};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//	ListNode* partition(ListNode* head, int x) {
//		if (head == nullptr)
//			return head;
//		ListNode* dummy = new ListNode(0);
//		dummy->next = head;
//		ListNode* insert = dummy;
//		ListNode* cur = dummy->next;
//		ListNode* pre = dummy;
//		while (cur != nullptr) {
//			if (cur->val >= x || cur == head) {
//				pre = cur;
//				cur = cur->next;
//				if (pre->val < x)
//					insert = pre;
//			}
//			else {
//				// ����Ԫ��
//				if (insert->next == cur) {
//					// ����
//					pre = cur;
//					cur = cur->next;
//					insert = insert->next;
//				}
//				else {
//					pre->next = cur->next;
//					cur->next = insert->next;
//					insert->next = cur;
//					// ����
//					insert = insert->next;
//					cur = pre->next;
//				}
//			}
//		}
//		return dummy->next;
//	}
//};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q)
//	{
//		if (p == nullptr && q == nullptr)
//			return true;
//		else if (p == nullptr || q == nullptr)
//			return false;
//		else if (p->val != q->val)
//			return false;
//		else
//			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//	}
//};
//class Solution {
//public:
//	int minSubArrayLen(int target, vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		int right = nums.size() - 1;
//		int sum = 0;
//		int count = 0;
//		while (right >= 0)
//		{
//			count++;
//			sum += nums[right];
//			if (sum >= target)
//				return count;
//			else
//				right--;
//		}
//		return 0;
//	}
//};
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	bool canConstruct(string ransomNote, string magazine) {
//		// ����һ����СΪ 26 �����飬�洢 magazine ��ÿ����ĸ�ĳ��ִ���
//		vector<int> charCount(26, 0);
//
//		// ���� magazine �ַ�����ͳ��ÿ���ַ���Ƶ��
//		for (char c : magazine) {
//			charCount[c - 'a']++;
//		}
//
//		// ���� ransomNote �ַ��������ÿ���ַ��Ƿ����� magazine ���ҵ�
//		for (char c : ransomNote) {
//			if (charCount[c - 'a'] > 0) {
//				charCount[c - 'a']--;  // ����и��ַ���ʹ��һ��
//			}
//			else {
//				return false;  // ���û�и��ַ������� false
//			}
//		}
//
//		return true;  // �����ַ����������������� true
//	}
//};
//
//int main() {
//	Solution solution;
//	string ransomNote = "aa";
//	string magazine = "aab";
//	cout << (solution.canConstruct(ransomNote, magazine) ? "true" : "false") << endl;
//
//	ransomNote = "a";
//	magazine = "b";
//	cout << (solution.canConstruct(ransomNote, magazine) ? "true" : "false") << endl;
//
//	return 0;
//}

//class Solution {
//public:
//	pair<int, int> expandAroundCenter(const string& s, int left, int right) {
//		while (left >= 0 && right < s.size() && s[left] == s[right]) {
//			--left;
//			++right;
//		}
//		return { left + 1, right - 1 };
//	}
//
//	string longestPalindrome(string s) {
//		int start = 0, end = 0;
//		for (int i = 0; i < s.size(); ++i) {
//			auto [left1, right1] = expandAroundCenter(s, i, i);
//			auto [left2, right2] = expandAroundCenter(s, i, i + 1);
//			if (right1 - left1 > end - start) {
//				start = left1;
//				end = right1;
//			}
//			if (right2 - left2 > end - start) {
//				start = left2;
//				end = right2;
//			}
//		}
//		return s.substr(start, end - start + 1);
//	}
//};
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int n = digits.size();
//
//		// �����һλ��ʼ����
//		for (int i = n - 1; i >= 0; i--) {
//			if (digits[i] != 9) {
//				// �����ǰλ���� 9��ֱ�Ӽ� 1
//				digits[i]++;
//				return digits;
//			}
//			else {
//				// �����ǰλ�� 9������ǰλ��Ϊ 0�������������λ
//				digits[i] = 0;
//			}
//		}
//
//		// ���ѭ��������˵������λ���� 9�����Ӧ���� 100...0������ 999 -> 1000��
//		vector<int> result(n + 1, 0);
//		result[0] = 1; // �������λΪ 1
//		return result;
//	}
//};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 *//*
class Solution {
public:
	void preorder(TreeNode* root, vector<int>& res)
	{
		if (root == nullptr)
			return;
		res.push_back(root->val);
		preorder(root->left, res);
		preorder(root->right, res);



	}
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		preorder(root, res);
		return res;

	}
};*/
//class Solution {
//public:
//	void postorder(TreeNode* root, vector<int>& res) {
//		if (root == nullptr) {
//			return;
//		}
//		postorder(root->left, res);
//		postorder(root->right, res);
//		res.push_back(root->val);
//	}
//
//	vector<int> postorderTraversal(TreeNode* root) {
//		vector<int> res;
//		postorder(root, res);
//		return res;
//	}
//};
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void heapify(std::vector<int>& nums, int n, int i) {
//	int largest = i;       // ��ʼ�����ֵΪ���ڵ�
//	int left = 2 * i + 1;  // ���ӽڵ�
//	int right = 2 * i + 2; // ���ӽڵ�
//
//	 ������ӽڵ���ڸ��ڵ㣬�������ֵ
//	if (left < n && nums[left] > nums[largest])
//		largest = left;
//
//	 ������ӽڵ���ڵ�ǰ���ֵ���������ֵ
//	if (right < n && nums[right] > nums[largest])
//		largest = right;
//
//	 ������ֵ���Ǹ��ڵ㣬�������ǣ�������heapify
//	if (largest != i) {
//		std::swap(nums[i], nums[largest]);
//		heapify(nums, n, largest);
//	}
//}
//
//void heapSort(std::vector<int>& nums) {
//	int n = nums.size();
//
//	 �����ѣ������һ����Ҷ�ӽڵ㿪ʼ������heapify��
//	for (int i = n / 2 - 1; i >= 0; i--)
//		heapify(nums, n, i);
//
//	 һ�����Ӷ���ȡ��Ԫ��
//	for (int i = n - 1; i >= 0; i--) {
//		 ����ǰ�ĸ��ڵ��Ƶ�����ĩβ
//		std::swap(nums[0], nums[i]);
//
//		 heapify ʣ�µ�Ԫ��
//		heapify(nums, i, 0);
//	}
//}
//
//int main() {
//	std::vector<int> nums = { 12, 11, 13, 5, 6, 7 };
//	heapSort(nums);
//
//	std::cout << "Sorted array: \n";
//	for (int num : nums) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//
//// ��������Ԫ��
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// ��������ķ�������
//int partition(std::vector<int>& nums, int left, int right) {
//	// ѡ�����Ҳ��Ԫ����Ϊ��׼ֵ
//	int pivot = nums[right];
//	int i = left - 1; // С�ڻ�׼ֵ��Ԫ�ص�����
//
//	for (int j = left; j < right; j++) {
//		// �����ǰԪ��С�ڻ���ڻ�׼ֵ
//		if (nums[j] <= pivot) {
//			i++; // ����С�ڻ�׼ֵ��Ԫ�ص�����
//			swap(nums[i], nums[j]); // ����Ԫ��
//		}
//	}
//	swap(nums[i + 1], nums[right]); // ����׼ֵ�ŵ��м�λ��
//	return i + 1; // ���ػ�׼ֵ������
//}
//
//// ����������
//void quickSort(std::vector<int>& nums, int left, int right) {
//	if (left < right) {
//		int pivotIndex = partition(nums, left, right); // ��ȡ��׼ֵ������
//
//		quickSort(nums, left, pivotIndex - 1); // �ݹ��������������
//		quickSort(nums, pivotIndex + 1, right); // �ݹ������Ҳ�������
//	}
//}
//
//int main() {
//	std::vector<int> nums = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
//	int n = nums.size();
//
//	quickSort(nums, 0, n - 1);
//
//	std::cout << "Sorted array: ";
//	for (int num : nums) {
//		std::cout << num << " ";
//	}
//	std::cout << std::endl;
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//
//// ��������ĸ�������
//void insertionSort(std::vector<int>& arr, int low, int high) {
//	for (int i = low + 1; i <= high; i++) {
//		int key = arr[i];
//		int j = i - 1;
//
//		while (j >= low && arr[j] > key) {
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//
//// ϣ��������
//void shellSort(std::vector<int>& arr) {
//	int n = arr.size();
//	// ��ʼ��������Ϊ���鳤�ȵ�һ��
//	int gap = n / 2;
//
//	// �𲽼�С������ֱ��Ϊ1
//	while (gap > 0) {
//		// ��ÿ�������н��в�������
//		for (int i = gap; i < n; i++) {
//			insertionSort(arr, i - gap, i);
//		}
//		// ��С����
//		gap /= 2;
//	}
//}
//
//int main() {
//	std::vector<int> arr = { 12, 34, 5, 3, 76, 89, 45, 23, 1, 0 };
//	int n = arr.size();
//
//	shellSort(arr);
//
//	std::cout << "Sorted array: \n";
//	for (int i = 0; i < n; i++)
//		std::cout << arr[i] << " ";
//	std::cout << std::endl;
//
//	return 0;
//}