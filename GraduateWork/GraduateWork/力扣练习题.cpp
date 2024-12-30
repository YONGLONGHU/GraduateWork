//字符串分割
//class Solution {
//public:
//    int compareVersion(string version1, string version2) {
//        int n = version1.length();
//        int m = version2.length();
//        int i, j = 0;
//        while (i < n && j < m) {
//            long long x = 0;
//            for (; i < n && version1[i] != '.'; i++)
//                x = x * 10 + version1[i] - '0';
//            ++i;
//            long long y = 0;
//            for (; j < m && version2[j] != '.'; ++j)
//                y = y * 10 + version2[j] - '0';
//            ++j;
//            if (x != y)
//                return x > y ? 1 : -1;
//        }
//        return 0;
//    }
//};
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//// 计算最大公约数
//int gcd(int a, int b) {
//    return b == 0 ? a : gcd(b, a % b);
//}
//
//// 将分数转换为小数字符串
//std::string fractionToDecimal(int numerator, int denominator) {
//    std::string result;
//    // 处理负数情况
//    bool isNegative = (numerator < 0) ^ (denominator < 0);
//    if (isNegative) {
//        numerator = -numerator;
//        denominator = -denominator;
//    }
//
//    // 简化分数
//    int divisor = gcd(numerator, denominator);
//    numerator /= divisor;
//    denominator /= divisor;
//
//    // 计算整数部分
//    long long intPart = static_cast<long long>(numerator) / denominator;
//    result += std::to_string(intPart);
//
//    // 如果整数部分为0，需要添加小数点
//    if (intPart == 0) {
//        result += ".";
//    }
//
//    // 计算小数部分
//    long long remainder = static_cast<long long>(numerator) % denominator;
//    std::vector<int>循环部分;
//
//    while (remainder != 0 && std::find(循环部分.begin(), 循环部分.end(), remainder) == 循环部分.end()) {
//        循环部分.push_back(remainder);
//        remainder *= 10;
//        long long digit = remainder / denominator;
//        result += std::to_string(digit);
//        remainder = remainder % denominator;
//    }
//
//    if (remainder == 0) {
//        return result;
//    }
//    else {
//        size_t index = std::find(循环部分.begin(), 循环部分.end(), remainder) - 循环部分.begin();
//        result += "(" + result.substr(index) + ")";
//    }
//
//    return result;
//}
//
//int main() {
//    int numerator = 1;
//    int denominator = 23;
//    std::cout << fractionToDecimal(numerator, denominator) << std::endl;
//    return 0;
//}
// excel表列名称
//class Solution {
//public:
//    string convertToTitle(int columnNumber) {
//        string ans;
//        while (columnNumber > 0) {
//            int a0 = (columnNumber - 1) % 26 + 1;
//            ans += a0 - 1 + 'A';
//            columnNumber = (columnNumber - a0) / 26;
//        }
//        reverse(ans.begin(), ans.end());
//        return ans;
//    }
//};
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//// 调整堆，使得满足堆的性质
//void heapify(std::vector<int>& nums, int n, int i) {
//    int largest = i;       // 初始化最大值为根节点
//    int left = 2 * i + 1;  // 左子节点
//    int right = 2 * i + 2; // 右子节点
//
//    // 如果左子节点大于根节点，更新最大值
//    if (left < n && nums[left] > nums[largest])
//        largest = left;
//
//    // 如果右子节点大于当前最大值，更新最大值
//    if (right < n && nums[right] > nums[largest])
//        largest = right;
//
//    // 如果最大值不是根节点，交换它们，并继续调整堆
//    if (largest != i) {
//        std::swap(nums[i], nums[largest]);
//        heapify(nums, n, largest);
//    }
//}
//
//// 堆排序函数
//void heapSort(std::vector<int>& nums) {
//    int n = nums.size();
//
//    // 构建堆（从最后一个非叶子节点开始，重新调整堆）
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(nums, n, i);
//
//    // 一个个从堆中取出元素
//    for (int i = n - 1; i >= 0; i--) {
//        // 将当前的根节点移到数组末尾
//        std::swap(nums[0], nums[i]);
//
//        // 调整剩余堆
//        heapify(nums, i, 0);
//    }
//}
//
//int main() {
//    std::vector<int> nums = { 12, 11, 13, 5, 6, 7 };
//    heapSort(nums);
//
//    std::cout << "Sorted array: \n";
//    for (int num : nums) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// 自定义比较函数
//bool compare(const string& x, const string& y) {
//    return x + y > y + x; // 比较拼接后的字符串
//}
//
//class Solution {
//public:
//    string largestNumber(vector<int>& nums) {
//        vector<string> strNums; // 用于存储数字的字符串形式
//
//        // 将整数转换为字符串
//        for (int num : nums) {
//            strNums.push_back(to_string(num));
//        }
//
//        // 使用自定义比较函数进行排序
//        sort(strNums.begin(), strNums.end(), compare);
//
//        // 特殊情况：如果最大的数字是0，返回"0"
//        if (strNums[0] == "0") {
//            return "0";
//        }
//
//        // 拼接排序后的字符串
//        string result;
//        for (const string& str : strNums) {
//            result += str;
//        }
//
//        return result;
//    }
//};
//
//int main() {
//    Solution solution;
//    vector<int> nums1 = { 10, 2 };
//    vector<int> nums2 = { 3, 30, 34, 5, 9 };
//
//    cout << "最大整数为: " << solution.largestNumber(nums1) << endl; // 输出 "210"
//    cout << "最大整数为: " << solution.largestNumber(nums2) << endl; // 输出 "9534330"
//
//    return 0;
//}
//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        ListNode* dummy = new ListNode(0);
//        dummy->next = head;
//        ListNode* pre = dummy;
//        ListNode* cur = head;
//        if (cur == nullptr)
//            return head;
//        while (cur != nullptr)
//        {
//            if (cur->val != val)
//            {
//                pre = cur;
//                cur = cur->next;
//            }
//            else
//            {
//                pre->next = cur->next;
//                cur = pre->next;
//            }
//        }
//        return dummy->next;
//    }
//};