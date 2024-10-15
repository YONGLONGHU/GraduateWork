#include<iostream>
//#include<vector>
using namespace std;

//构造函数
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
//模拟实现
template<typename T>
class vector
{
public:
	typedef T* iterator;
	typedef const T* const_iterator;
	iterator begin() { return _start; }
	iterator end() { return _finish; }
	const_iterator cbegin() const { return _start; }
	const_iterator cend() const { return _finish; }
	vector()
		:_start(nullptr)
		, _finish(nullptr)
		, _endOfStorage(nullptr)
	{
	}
	vector(int n, const T& value = T())
		:_start(nullptr)
		, _finish(nullptr)
		, _endOfStorage(nullptr)
	{
		reserve(n);
		while (n--)
		{
			push_back(value);
		}
	}
	template<class InputIterator>
	vector(InputIterator first, InputIterator last)
	{
		reserve(last - first);
		while (first != last)
		{
			this->push_back(*first);
			++first;
		}
	}
private:
	iterator _start;
	iterator _finish;
	iterator _endOfStorage;
};