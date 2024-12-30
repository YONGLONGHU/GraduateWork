//�ַ����ָ�
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
//// �������Լ��
//int gcd(int a, int b) {
//    return b == 0 ? a : gcd(b, a % b);
//}
//
//// ������ת��ΪС���ַ���
//std::string fractionToDecimal(int numerator, int denominator) {
//    std::string result;
//    // ���������
//    bool isNegative = (numerator < 0) ^ (denominator < 0);
//    if (isNegative) {
//        numerator = -numerator;
//        denominator = -denominator;
//    }
//
//    // �򻯷���
//    int divisor = gcd(numerator, denominator);
//    numerator /= divisor;
//    denominator /= divisor;
//
//    // ������������
//    long long intPart = static_cast<long long>(numerator) / denominator;
//    result += std::to_string(intPart);
//
//    // �����������Ϊ0����Ҫ���С����
//    if (intPart == 0) {
//        result += ".";
//    }
//
//    // ����С������
//    long long remainder = static_cast<long long>(numerator) % denominator;
//    std::vector<int>ѭ������;
//
//    while (remainder != 0 && std::find(ѭ������.begin(), ѭ������.end(), remainder) == ѭ������.end()) {
//        ѭ������.push_back(remainder);
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
//        size_t index = std::find(ѭ������.begin(), ѭ������.end(), remainder) - ѭ������.begin();
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
// excel��������
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
//// �����ѣ�ʹ������ѵ�����
//void heapify(std::vector<int>& nums, int n, int i) {
//    int largest = i;       // ��ʼ�����ֵΪ���ڵ�
//    int left = 2 * i + 1;  // ���ӽڵ�
//    int right = 2 * i + 2; // ���ӽڵ�
//
//    // ������ӽڵ���ڸ��ڵ㣬�������ֵ
//    if (left < n && nums[left] > nums[largest])
//        largest = left;
//
//    // ������ӽڵ���ڵ�ǰ���ֵ���������ֵ
//    if (right < n && nums[right] > nums[largest])
//        largest = right;
//
//    // ������ֵ���Ǹ��ڵ㣬�������ǣ�������������
//    if (largest != i) {
//        std::swap(nums[i], nums[largest]);
//        heapify(nums, n, largest);
//    }
//}
//
//// ��������
//void heapSort(std::vector<int>& nums) {
//    int n = nums.size();
//
//    // �����ѣ������һ����Ҷ�ӽڵ㿪ʼ�����µ����ѣ�
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(nums, n, i);
//
//    // һ�����Ӷ���ȡ��Ԫ��
//    for (int i = n - 1; i >= 0; i--) {
//        // ����ǰ�ĸ��ڵ��Ƶ�����ĩβ
//        std::swap(nums[0], nums[i]);
//
//        // ����ʣ���
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
//// �Զ���ȽϺ���
//bool compare(const string& x, const string& y) {
//    return x + y > y + x; // �Ƚ�ƴ�Ӻ���ַ���
//}
//
//class Solution {
//public:
//    string largestNumber(vector<int>& nums) {
//        vector<string> strNums; // ���ڴ洢���ֵ��ַ�����ʽ
//
//        // ������ת��Ϊ�ַ���
//        for (int num : nums) {
//            strNums.push_back(to_string(num));
//        }
//
//        // ʹ���Զ���ȽϺ�����������
//        sort(strNums.begin(), strNums.end(), compare);
//
//        // ����������������������0������"0"
//        if (strNums[0] == "0") {
//            return "0";
//        }
//
//        // ƴ���������ַ���
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
//    cout << "�������Ϊ: " << solution.largestNumber(nums1) << endl; // ��� "210"
//    cout << "�������Ϊ: " << solution.largestNumber(nums2) << endl; // ��� "9534330"
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