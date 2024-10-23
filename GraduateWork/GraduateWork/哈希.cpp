#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//统计出现n次的元素
//class Solution
//{
//public:
//	int repeatedNtimes(vector<int>& A)
//	{
//		size_t N = A.size() / 2;
//		unordered_map<int, int> m;
//		for (auto& e : A)
//			m[e]++;
//		for (auto& e : m)
//		{
//			if (e.second == N)
//				return e.first;
//		}
//	}
//};

//两个数组的交集
//class Solution
//{
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//	{
//		// 用unordered_set对nums1中的元素去重
//		unordered_set<int> s1;
//		for (auto e : nums1)
//			s1.insert(e);
//		unordered_set<int> s2;
//		for (auto e : nums2)
//			s2.insert(e);
//		vector<int> vRet;
//		for (auto e : s1)
//		{
//			if (s1.find(e) != s2.end())
//				vRet.push_back(e);
//		}
//		return vRet;
//	}
//};
//C++11
//class Point
//{
//public:
//	Point(int x=0,int y=0)
//		:_x(x),_y(y){}
//private:
//	int _x;
//	int _y;
//};
//void test()
//{
//	vector<int> v{ 1,2,3,4,5,6 };
//	int* arr3 = new int[5]{ 1,2,3,4,5 };
//	map<int, int> m{ {1,1},{2,2},{3,3},{4,4} };
//	Point p{ 1,2 };
//}
//int main()
//{
//	unsigned int i = 20;
//	int count = 0;
//	while (i-- >= 0)
//	{
//		count++;
//		cout << "hello!" << endl;
//	}
//	cout << count << endl;
//	return 0;
//}

//#include <iostream>
//
//class Date {
//public:
//    Date(int year, int month, int day) : year(year), month(month), day(day) {}
//
//    int dayOfYear() {
//        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//        // 判断闰年
//        if (isLeapYear(year)) {
//            daysInMonth[1] = 29;
//        }
//
//        int dayOfYear = day;
//        for (int i = 0; i < month - 1; ++i) {
//            dayOfYear += daysInMonth[i];
//        }
//
//        return dayOfYear;
//    }
//
//private:
//    int year, month, day;
//
//    bool isLeapYear(int year) {
//        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//    }
//};
//
//int main() {
//    int year, month, day;
//    std::cout << "请输入年月日（例如：2014 1 1）: ";
//    std::cin >> year >> month >> day;
//
//    Date date(year, month, day);
//    std::cout << "该日期是今年的第 " << date.dayOfYear() << " 天。" << std::endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//int main()
//{
//	int N;
//	while (cin >> N)
//	{
//		vector<int>arr(N);
//		int sum = 0;
//		for (int i = 0; i < N; ++i)
//		{
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		double average = static_cast<double>(sum) / N;
//		int count = 0;
//		for (int i = 0; i < N; ++i)
//		{
//			if (arr[i] < average)
//				count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}