//#include<iostream>
//#include <string>
//using namespace std;
////字符串相加
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        string answer;
//        int cur = 0;//用来记录每一位对应数字的相加和
//        int len1 = num1.size() - 1, len2 = num2.size() - 1;//从字符串的最低位开始
//        while (len1 >= 0 || len2 >= 0 || cur > 0)
//        {
//            if (len1 >= 0) cur += num1[len1--] - '0';
//            if (len2 >= 0) cur += num2[len2--] - '0';
//            answer += to_string(cur % 10);//现在是逆序相加的
//            cur = cur / 10;//保留进位进入下次运算
//        }
//        reverse(answer.begin(), answer.end());
//        return answer;
//    }
//};
////模拟实现
//class String
//{
//public:
//    String(const char* str = "hello.")
//    {
//        _str = new char[strlen(str) + 1];
//        strcpy(_str, str);
//    }
//
//private:
//    char* _str;
//};
#include <iostream>  
#include <vector>  
#include <algorithm>  
#include <climits>  

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    long long maxSum = 0;
    long long currentSum = 0;

    for (int i = 0; i < N; ++i) {
        // 当前元素为正数，直接加到当前和中  
        if (a[i] > 0) {
            currentSum += a[i];
        }
        else {
            // 当前元素为负数，检查是否可以翻转相邻元素来最大化当前和  
            if (i > 0 && a[i - 1] > 0) {
                // 如果前一个元素是正数，翻转它们，即当前元素变为正数，前一个元素变为负数  
                // 但由于我们只需要计算最大和，因此直接加两倍当前元素的绝对值  
                currentSum += -2 * a[i];
            }
            else if (i < N - 1 && a[i + 1] > 0) {
                // 如果后一个元素是正数，翻转它们  
                currentSum += -2 * a[i];
            }
            else {
                // 当前元素是负数且没有相邻的正数可以翻转，则直接加到当前和中（因为翻转无帮助）  
                currentSum += a[i];
            }
        }
        // 在每一步中更新最大和  
        maxSum = max(maxSum, currentSum);
    }

    // 考虑整个数组遍历完后，可能存在的情况：某些负数在开始时没有相邻正数，但后续操作可以使其翻转  
    // 因此，我们需要再遍历一次数组，考虑所有负数被翻转后的和  
    long long allFlippedSum = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i] < 0) {
            allFlippedSum += -a[i];
        }
        else {
            allFlippedSum += a[i];
        }
    }
    maxSum = max(maxSum, allFlippedSum);

    cout << maxSum << endl;

    return 0;
}
