#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>
#include <unordered_set>
using namespace std;
//ͳ�Ƴ���n�ε�Ԫ��
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

//��������Ľ���
//class Solution
//{
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
//	{
//		// ��unordered_set��nums1�е�Ԫ��ȥ��
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
//        // �ж�����
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
//    std::cout << "�����������գ����磺2014 1 1��: ";
//    std::cin >> year >> month >> day;
//
//    Date date(year, month, day);
//    std::cout << "�������ǽ���ĵ� " << date.dayOfYear() << " �졣" << std::endl;
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
//	//�������п��ܵ����
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
////�ڴ�й©
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
////����ָ��
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

//��̬�滮
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums)
//    {
//        int fi = nums[0];
//        int maxfi = nums[0];
//        for (int i = 1; i < nums.size(); ++i)
//        {
//            fi = max(nums[i], nums[i] + fi);
//            maxfi = max(maxfi, fi);
//        }
//        return maxfi;
//    }
//};

//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        vector<vector<int>> res;
//        sort(intervals.begin(), intervals.end());
//
//        for (auto intr : intervals) {
//            if (res.empty() || res.back()[1] < intr[0])
//                res.push_back(intr);
//            else {
//                res.back()[1] = max(res.back()[1], intr[1]);
//            }
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        int n = intervals.size();
//        vector<vector<int>> ans;
//        //���� ��֤��������
//        sort(intervals.begin(), intervals.end());
//        for (int i = 0; i < n; i++) {
//            //�ж��Ƿ�Խ�� ���������Ƿ����غϲ���
//            if (i < n - 1 && intervals[i][1] >= intervals[i + 1][0]) {
//                //����ԭ����
//                //����[1,2][2,3][5,6] => [1,2][1,3][5,6]
//                intervals[i + 1][0] = min(intervals[i][0], intervals[i + 1][0]);
//                intervals[i + 1][1] = max(intervals[i + 1][1], intervals[i][1]);
//            }
//            //�������һ������û���غϲ��� �����������
//            //ע�� ���i == n - 1 ��������ĩβ һ�����������
//            else if (i == n - 1 || intervals[i][1] < intervals[i + 1][0]) {
//                ans.push_back({ intervals[i][0],intervals[i][1] });
//            }
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals)
//    {
//        sort(intervals.begin(), intervals.end());
//        vector<vector<int>> result;
//        int length = intervals.size();
//        if (length == 1 || length == 0) return intervals;
//        for (int i = 0; i < length - 1; i++)
//        {
//            int t = 0;
//            while (i + 1 + t < length && intervals[i + t][1] >= intervals[i + 1 + t][0])
//            {
//                intervals[i + t + 1][0] = min(intervals[i + t + 1][0], intervals[i + t][0]);
//                intervals[i + t + 1][1] = max(intervals[i + t + 1][1], intervals[i + t][1]);
//                t++;
//            }
//            result.push_back({ intervals[i][0],intervals[i + t][1] });
//            i = i + t;
//        }
//        if (result[result.size() - 1][1] < intervals[length - 1][0])
//            result.push_back({ intervals[length - 1][0],intervals[length - 1][1] });
//        else
//            result[result.size() - 1][1] = max(intervals[length - 1][1], result[result.size() - 1][1]);
//        return result;
//    }
//};
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        vector<int> result(nums.size());
//        int sum = 1;
//        for (auto& e : nums)
//            sum *= e;
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] != 0)
//                result[i] = sum / nums[i];
//            else {
//                int temp = 1;
//                for (int j = 0; j < nums.size(); j++) {
//                    if (j == i)
//                        continue;
//                    else
//                        temp = temp * nums[j];
//                }
//                result[i] = temp;
//            }
//        }
//        return result;
//    }
//};

//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        auto last = unique(nums.begin(), nums.end());
//        nums.erase(last, nums.end());
//        int n = nums.size();
//        int t = 0;
//        int r = 0;
//        if (n == 1)
//        {
//            if (nums[0] == 1)
//                return 2;
//            else return 1;
//        }
//        while (t < n && nums[t] <= 0)
//        {
//            t++; r++;
//        }
//        if (t == n) return 1;
//        for (int i = 1; i < n + 1; ++i)
//        {
//            if (t < n && nums[t] != i)
//                return i;
//            else
//                ++t;
//        }
//        return n - r + 1;
//    }
//};

//class Solution {
//public:
//    int climbStairs(int n)
//    {
//        int p = 0; int q = 0; int r = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            p = q;
//            q = r;
//            r = p + q;
//        }
//        return r;
//    }
//};

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// ��������ת���ֲ�ȥ��ǰ����
//int reverseNumber(int num) {
//    string strNum = to_string(num);
//    reverse(strNum.begin(), strNum.end());
//    return stoi(strNum); // ת�����������Զ�ȥ��ǰ����
//}
//
//// �������������ֵ
//int maxSumAfterReversal(int a, int b) {
//    int revA = reverseNumber(a);
//    int revB = reverseNumber(b);
//
//    // �������п��ܵĺ�
//    int sum1 = a + b;            // ԭʼ��
//    int sum2 = revA + revB;      // �������ֶ���ת
//    int sum3 = a + revB;         // a ԭʼ��b ��ת
//    int sum4 = revA + b;         // a ��ת��b ԭʼ
//
//    // ��������
//    return max({ sum1, sum2, sum3, sum4 });
//}
//
//int main() {
//    int a, b;
//    cout << "������������: ";
//    cin >> a >> b;
//
//    int result = maxSumAfterReversal(a, b);
//    cout << "����: " << result << endl;
//
//    return 0;
//}
//
//class Solution {
//public:
//    int rob(vector<int>& nums)
//    {
//        if (nums.empty())
//            return 0;
//        int size = nums.size();
//        if (size == 1)
//            return nums[0];
//        if (size == 2)
//            return max(nums[0], nums[1]);
//        vector<int> dp = vector<int>(size, 0);
//        dp[0] = nums[0];
//        dp[1] = max(nums[1], nums[0]);
//        for (int i = 2; i < size; ++i)
//            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
//        return dp[size - 1];
//    }
//};
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target)
//    {
//        int size = nums.size();
//        int pre = 0; int rear = size - 1;
//        int i = 0;
//        if (nums[size - 1] < target)
//            return size;
//        if (nums[0] > target)
//            return 0;
//        while (pre <= rear)
//        {
//            i = (pre + rear) / 2;
//            if (nums[i] == target)
//                return i;
//            else if (nums[i] > target)
//                rear = i - 1;
//            else
//                pre = i + 1;
//        }
//        return pre;
//    }
//};

//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m = matrix.size(), n = matrix[0].size();
//        int left = -1, right = m * n;
//        while (left + 1 < right) {
//            int mid = left + (right - left) / 2;
//            int x = matrix[mid / n][mid % n];
//            if (x == target) {
//                return true;
//            }
//            (x < target ? left : right) = mid;
//        }
//        return false;
//    }
//};

//#include <stdio.h>
//
//int findSingle(int arr[], int size) {
//    int result = 0;
//    for (int i = 0; i < size; i++) {
//        result ^= arr[i]; // �����������
//    }
//    return result; // ����ֻ����һ�ε�Ԫ��
//}
//
//int main() {
//    int arr[] = { 2, 3, 5, 4, 5, 3, 4 }; // ʾ������
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int singleElement = findSingle(arr, size);
//    printf("ֻ����һ�ε�Ԫ����: %d\n", singleElement);
//    return 0;
//}
//
//#include <stdio.h>
//
//void measureWater() {
//    int fiveL = 0; // 5�����ӵ�ˮ��
//    int threeL = 0; // 3�����ӵ�ˮ��
//
//    // ���裺
//    // 1. ��5������װ��ˮ
//    fiveL = 5;
//    printf("װ��5������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 2. ��5�������е�ˮ����3������
//    fiveL -= 3; // ����3������
//    threeL = 3; // 3������װ��
//    printf("��5�����ӵ���3������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 3. ��3���������ˮ����
//    threeL = 0; // ���3������
//    printf("���3������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 4. ��5�������е�ˮ����3������
//    fiveL -= 3; // ����3������
//    threeL = 3; // 3������װ��
//    printf("��5�����ӵ���3������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 5. ���3������
//    threeL = 0; // ���3������
//    printf("���3������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 6. ��5�������е�ˮ����3������
//    fiveL -= 3; // ����3������
//    threeL = 3; // 3������װ��
//    printf("��5�����ӵ���3������: 5L = %d, 3L = %d\n", fiveL, threeL);
//
//    // 7. ��ʱ5������ʣ�µľ���4��ˮ
//    printf("���ս��: 5L = %d, 3L = %d\n", fiveL, threeL);
//}
//
//int main() {
//    measureWater();
//    return 0;
//}
