#include<iostream>
//#include<vector>
using namespace std;

//���캯��
//int main()
//{
//	vector<int> first;
//	vector<int> second(4, 100);
//	vector<int> third(second.begin(), second.end());
//	vector<int> fouth(third);
//
//	int myints[] = { 13,23,34,123,34,456 };
//	vector<int>fifth(myints, myints + sizeof(myints) / sizeof(int));
//	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//		cout << ' ' << *it;
//	cout << '\n';
//	return 0;
//}
//void PrintVector(const vector<int>& v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		*it *= 2;
//		++it;
//	}
//
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//	PrintVector(v);
//	return 0;
//}

//int main()
//{
	/*size_t sz;
	vector<int> foo;
	sz = foo.capacity();
	cout << "making foo grow:" << endl;
	for (int i = 0; i < 100; ++i)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			cout << "capacity changed:" << sz << endl;
		}
	}*/

	/*vector<int> bar;
	size_t sz = bar.capacity();
	bar.reserve(100);
	cout << "making bar growing:" << endl;
	for (int i = 0; i < 100; i++)
	{
		bar.push_back(i);
		if (sz != bar.capacity());
		sz = bar.capacity();
		cout << "capacity changed:" << sz << endl;;
	}*/

//	vector<int> myvector;
//	for (int i = 0; i < 10; ++i)
//		myvector.push_back(i);
//	myvector.resize(5);
//	myvector.resize(8, 100);
//	myvector.resize(12);
//	for (int i = 0; i < myvector.size(); i++)
//		cout << " " << myvector[i];
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	v.pop_back();
//	v.pop_back();
//
//	it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	v.insert(pos, 30);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	pos = find(v.begin(), v.end(), 3);
//	v.erase(pos);
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
	/*int a[] = { 1,2,3,5,6,7,8,9 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	vector<int> swapv;
	swapv.swap(v);
	for (auto x : v)
		cout << x << " ";
	cout << endl;
	return 0;*/
//}
//ģ��ʵ��
//template<typename T>
//class vector
//{
//public:
//	typedef T* iterator;
//	typedef const T* const_iterator;
//	iterator begin() { return _start; }
//	iterator end() { return _finish; }
//	const_iterator cbegin() const { return _start; }
//	const_iterator cend() const { return _finish; }
//	vector()
//		:_start(nullptr)
//		, _finish(nullptr)
//		, _endOfStorage(nullptr)
//	{
//	}
//	vector(int n, const T& value = T())
//		:_start(nullptr)
//		, _finish(nullptr)
//		, _endOfStorage(nullptr)
//	{
//		reserve(n);
//		while (n--)
//		{
//			push_back(value);
//		}
//	}
//	template<class InputIterator>
//	vector(InputIterator first, InputIterator last)
//	{
//		reserve(last - first);
//		while (first != last)
//		{
//			this->push_back(*first);
//			++first;
//		}
//	}
//private:
//	iterator _start;
//	iterator _finish;
//	iterator _endOfStorage;
//};
#include <iostream>
#include <vector>
using namespace std;

//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	long long T; // ��������
//	cin >> T;
//
//	vector<long long> results; // ���ڴ洢ÿ����
//	for (long long i = 0; i < T; ++i) {
//		long long n, k;
//		cin >> n >> k;
//		// ����������
//		long long max_points = min(n - k + 1, k);
//		results.push_back(max_points);
//	}
//
//	// ������н��
//	for (const auto& points : results) {
//		cout << points << '\n';
//	}
//                                                                                                                                                             
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string S;
//	cin >> S; // ��ȡ�����ַ���
//	int n = S.size();
//
//	// ʹ��һ���������������յ��ַ�˳��
//	vector<char> result(n);
//	int idx = 0; // ���ڱ�����������
//
//	// ģ��ÿ���ƶ�����
//	for (int i = 0; i < n; ++i) {
//		// ��S[i]�ƶ���ĩβ������¼ǰ��δ�ƶ����ַ�
//		for (int j = 0; j < n; ++j) {
//			if (j != i) {
//				result[idx++] = S[j]; // ����δ�ƶ����ַ�
//			}
//		}
//		result[idx++] = S[i]; // �ƶ���ǰ�ַ���ĩβ
//		idx = 0; // ��������
//		S = string(result.begin(), result.begin() + n); // ����ԭʼ�ַ���
//	}
//
//	// ������ս��
//	cout << S << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string rearrange_string(const string& S) {
//	int n = S.length();
//	vector<int> index(n);
//	for (int i = 0; i < n; ++i) {
//		index[i] = i; // ��ʼ������
//	}
//
//	// ����n�β���
//	for (int i = 0; i < n; ++i) {
//		// ����i���ַ��ŵ�ĩβ
//		int temp = index[i];
//		// ��������
//		for (int j = i; j < n - 1; ++j) {
//			index[j] = index[j + 1];
//		}
//		index[n - 1] = temp; // ����i���ַ��������ŵ�ĩβ
//	}
//
//	// ��������ַ���
//	string result(n, ' ');
//	for (int i = 0; i < n; ++i) {
//		result[i] = S[index[i]]; // �������������ַ���
//	}
//
//	return result;
//}
//
//int main() {
//	string input;
//	cin >> input;  // ��ȡ����
//	string result = rearrange_string(input);  // �����ַ���
//	cout << result << endl;  // ������
//	return 0;
//}

//list
//#include<iostream>
//#include<list>
//using namespace std;
//int main()
//{
//	list<int> l1;
//	list<int> l2(4, 100);
//	list<int> l3(l2.begin(), l2.end());
//	list<int> l4(l3);
//	int array[] = { 1,34,56,34,2 };
//	list<int> l5(array, array + sizeof(array) + sizeof(int));
//	for (list<int>::iterator it = l5.begin(); it != l5.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	for (auto& e : l5)
//		cout << e << " ";
//	return 0;
//}

//void print_list(const list<int>& l1)
//{
//	for (list<int>::const_iterator it = l1.begin();it != l1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
	/*for (auto& e : l1)
		cout << e << " ";*/
//}
//int main()
//{
	/*int array[] = { 1,2,3,5,6 };
	list<int> l(array,array + sizeof(array) / sizeof(int));
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
	for (auto& e : l)
		cout << e << " ";
	for (list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
		cout << *it << " ";
	cout << endl;
	return 0;*/


//}
//void test1()
//{
//	int array[] = { 1,2,5,6,6 };
//	list<int>L(array, array + sizeof(array) / sizeof(array[0]));
//	L.push_back(4);
//	L.push_front(0);
//	print_list(L);
//
//	L.pop_back();
//	L.pop_front();
//	print_list(L);
//}
//void test2()
//{
//	int array[] = { 1,4,5,612,3,5 };
//	list<int> L(array, array + sizeof(array) / sizeof(array[0]));
//	auto pos = ++L.begin();
//	cout << *pos << endl;
//
//	L.insert(pos, 4);
//	print_list(L);
//
//	L.insert(pos, 5, 5);
//	print_list(L);
//
//	vector<int> v{ 7,8,9 };
//	L.insert(pos, v.begin(), v.end());
//
//	L.erase(L.begin(), L.end());
//	print_list(L);
//
//	L.erase(L.begin(), L.end());
//}
//template<typename T>
//struct ListNode
//{
//	ListNode(const T& val = T())
//		:_pPre(nullptr)
//		, _pNext(nullptr)
//		,_val(val)
//	{}
//	ListNode<T>* _pPre;
//	ListNode<T>* _pNext;
//	T _val;
//};
//template<typename T,typename Ref,typename Ptr>
//class ListIterator
//{
//	typedef ListNode<T>* PNode;
//	typedef ListIterator<T, Ref, Ptr> Self;
//public:
//	ListIterator(PNode pNode = nullptr)
//		: _pNode(pNode)
//	{}
//	ListIterator(const Self& l)
//		: _pNode(l._pNode)
//	{}
//	T& operator*() { return _pNode->_val; }
//	T* operator->() { return &(operator*()); }
//	Self& operator++()
//	{
//		_pNode = _pNode->_pNext;
//		return *this;
//	}
//
//};