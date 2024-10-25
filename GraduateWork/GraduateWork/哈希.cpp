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
#include<vector>
#include<algorithm>
using namespace std;
//int smallestRange(vector<int>& nums, int k)
//{
//	sort(nums.begin(), nums.end());
//	int n = nums.size();
//	int initialScore = nums[n - 1] - nums[0];
//	//尝试所有可能的组合
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int newMin = min(nums[i] + k, nums[n - 1] - k);
//		int newMax = max(nums[i + 1] - k, nums[0] + k);
//		int newScore = newMax -newMin;
//		if (newScore < initialScore)
//		{
//			initialScore = newScore;
//		}
//	}
//	return initialScore;
//}

//int smallestRangeII(vector<int>& nums, int k)
//{
//	sort(nums.begin(), nums.end());
//	int n = nums.size();
//	int MinScore = nums[n - 1] - nums[0];
//	if (n == 1)
//		return 0;
//	for (int i = 0; i < n-1; ++i)
//	{
//		int MaxVal = max(nums[n - 1]-k, nums[i]+k);
//		int MinVal = min(nums[0] + k, nums[i+1]-k);
//		MinScore = min(MinScore, MaxVal - MinVal);
//	}
//	return MinScore;
//}
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums)
//    {
//        int result = 1;
//        int count = 1;
//        int length = nums.size();
//        if (length == 0)return 0;
//        if (length == 1)return 1;
//        sort(nums);
//        for (int i = 0; i < length - 1; ++i)
//        {
//            if (nums[i] == nums[i + 1])
//                continue;
//            if (nums[i] + 1 != nums[i + 1])
//            {
//                result = max(result, count);
//                count = 1;
//                continue;
//            }
//            ++count;
//        }
//        return max(result, count);
//    }
//};
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums)
//    {
//        int s = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] != 0)
//            {
//                nums[s++] = nums[i];
//            }
//        }
//        for (int i = s; i < nums.size(); i++)
//        {
//            nums[i] = 0;
//        }
//    }
//};

//class Solution {
//public:
//    int maxArea(vector<int>& height)
//    {
//        int maxA = 0;
//        int length = height.size();
//        for (int i = 0; i < length - 1; ++i)
//        {
//            for (int j = i; j < length; ++j)
//            {
//                int temp = (j - i) * min(height[i], height[j]);
//                if (temp > maxA)
//                    maxA = temp;
//            }
//        }
//        return maxA;
//    }
//};
//void Func()
//{
//	return;
//}
////内存泄漏
//void MemoryLeaks()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int;
//
//	int* p3 = new int[10];
//
//	Func();
//	delete[] p3;
//}
////智能指针
//template<class T>
//class SmartPtr {
//public:
//	SmartPtr(T* ptr = nullptr)
//		: _ptr(ptr)
//	{}
//
//	~SmartPtr()
//	{
//		if (_ptr)
//			delete _ptr;
//	}
//	T& operator*() { return *_ptr; }
//	T* operator->() { return _ptr; }
//private:
//	T* _ptr;
//};
//struct Data
//{
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	SmartPtr<int> sp1(new int);
//
//}
//
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums)
//    {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        vector<vector<int>>result;
//        for (int i = 0; i < n - 2; ++i)
//        {
//            if (nums[i] > 0) break;
//            if (i > 0 && nums[i] == nums[i - 1]) continue;
//            int left = i + 1; int right = n - 1;
//            while (left < right)
//            {
//                int sum = nums[i] + nums[left] + nums[right];
//                if (sum == 0)
//                {
//                    result.push_back({ nums[i],nums[left],nums[right] });
//                    while (left < right && nums[left] == nums[left + 1])
//                        ++left;
//                    while (left < right && nums[right] == nums[right - 1])
//                        --right;
//                }
//                else if (sum < 0)
//                    ++left;
//                else
//                    --right;
//            }
//        }
//        return result;
//    }
//};
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        int count = 0;
//        for (int start = 0; start < nums.size(); ++start) {
//            int sum = 0;
//            for (int end = start; end >= 0; --end) {
//                sum += nums[end];
//                if (sum == k) {
//                    count++;
//                }
//            }
//        }
//        return count;
//    }
//};
