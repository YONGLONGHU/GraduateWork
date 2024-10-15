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
//#include <iostream>  
//#include <vector>  
//#include <algorithm>  
//#include <climits>  
//
//using namespace std;

//int main() {
//    int N;
//    cin >> N;
//    vector<long long> a(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> a[i];
//    }
//
//    long long maxSum = 0;
//    long long currentSum = 0;
//
//    for (int i = 0; i < N; ++i) {
//        // 当前元素为正数，直接加到当前和中  
//        if (a[i] > 0) {
//            currentSum += a[i];
//        }
//        else {
//            // 当前元素为负数，检查是否可以翻转相邻元素来最大化当前和  
//            if (i > 0 && a[i - 1] > 0) {
//                // 如果前一个元素是正数，翻转它们，即当前元素变为正数，前一个元素变为负数  
//                // 但由于我们只需要计算最大和，因此直接加两倍当前元素的绝对值  
//                currentSum += -2 * a[i];
//            }
//            else if (i < N - 1 && a[i + 1] > 0) {
//                // 如果后一个元素是正数，翻转它们  
//                currentSum += -2 * a[i];
//            }
//            else {
//                // 当前元素是负数且没有相邻的正数可以翻转，则直接加到当前和中（因为翻转无帮助）  
//                currentSum += a[i];
//            }
//        }
//        // 在每一步中更新最大和  
//        maxSum = max(maxSum, currentSum);
//    }
//
//    // 考虑整个数组遍历完后，可能存在的情况：某些负数在开始时没有相邻正数，但后续操作可以使其翻转  
//    // 因此，我们需要再遍历一次数组，考虑所有负数被翻转后的和  
//    long long allFlippedSum = 0;
//    for (int i = 0; i < N; ++i) {
//        if (a[i] < 0) {
//            allFlippedSum += -a[i];
//        }
//        else {
//            allFlippedSum += a[i];
//        }
//    }
//    maxSum = max(maxSum, allFlippedSum);
//
//    cout << maxSum << endl;
//
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	const int a;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//// 计算符合条件的非递减序列数量
//int countSequences(int n, int m) {
//    // dp[length][xorValue][maxValue]
//    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(m + 1, 0)));
//
//    // 初始化：长度为 0 的序列，异或值为 0 的方式有 1 种（空序列）
//    dp[0][0][0] = 1;
//
//    // 动态规划填表
//    for (int length = 1; length <= n; ++length) {
//        for (int maxValue = 1; maxValue <= m; ++maxValue) {
//            for (int xorValue = 0; xorValue <= m; ++xorValue) {
//                // 将当前值 x 逐一添加到序列中
//                for (int x = 1; x <= maxValue; ++x) {
//                    dp[length][xorValue][maxValue] = (dp[length][xorValue][maxValue] + dp[length - 1][xorValue ^ x][maxValue]) % MOD;
//                }
//            }
//        }
//    }
//
//    // 计算最终结果：满足条件的不同序列数量
//    int result = 0;
//    for (int maxValue = 1; maxValue <= m; ++maxValue) {
//        result = (result + dp[n][m][maxValue]) % MOD;
//    }
//
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度 n 和取值范围 m
//    cout << countSequences(n, m) << endl; // 输出结果
//    return 0;
////}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//// 计算符合条件的非递减序列数量
//int countSequences(int n, int m) {
//    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(m + 1, 0)));
//
//    // 初始化：长度为 0 的序列，异或值为 0 的方式有 1 种（空序列）
//    dp[0][0][0] = 1;
//
//    // 动态规划填表
//    for (int length = 1; length <= n; ++length) {
//        for (int xorValue = 0; xorValue <= m; ++xorValue) {
//            for (int last = 1; last <= m; ++last) {
//                for (int prev = last; prev <= m; ++prev) {
//                    if ((xorValue ^ prev) <= m) {
//                        dp[length][xorValue][last] = (dp[length][xorValue][last] + dp[length - 1][xorValue ^ prev][prev]) % MOD;
//                    }
//                }
//            }
//        }
//    }
//
//    // 计算最终结果
//    int result = 0;
//    for (int last = 1; last <= m; ++last) {
//        result = (result + dp[n][m][last]) % MOD;
//    }
//
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度 n 和取值范围 m
//    cout << countSequences(n, m) << endl; // 输出结果
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//// 计算组合数
//int comb(int n, int k) {
//    if (k > n) return 0;
//    long long res = 1;
//    for (int i = 1; i <= k; ++i) {
//        res = res * (n - i + 1) % MOD;
//        res = res * pow(i, MOD - 2) % MOD; // 逆元
//    }
//    return res;
//}
//
//// 计算满足条件的非递减序列数量
//int countSequences(int n, int m) {
//    int result = 0;
//
//    // 遍历可能的异或值
//    for (int xorValue = 1; xorValue <= m; ++xorValue) {
//        if ((xorValue ^ m) < 1 || (xorValue ^ m) > m) continue;
//
//        int needed = xorValue ^ m; // 需要的数
//        if (needed < 1 || needed > m) continue;
//
//        // 计算组合
//        result = (result + comb(n - 1 + m - needed, n - 1)) % MOD;
//    }
//
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度 n 和取值范围 m
//    cout << countSequences(n, m) << endl; // 输出结果
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
//    dp[0][0] = 1;
//
//    // 初始化dp数组
//    for (int i = 1; i <= m; ++i) {
//        dp[1][i] = 1;
//    }
//
//    // 填充dp数组
//    for (int len = 2; len <= n; ++len) {
//        for (int last = 1; last <= m; ++last) {
//            for (int prev = 0; prev <= last; ++prev) {
//                dp[len][last] = (dp[len][last] + dp[len - 1][prev]) % MOD;
//            }
//        }
//    }
//
//    long long result = 0;
//    // 计算所有可能的异或值
//    for (int i = 1; i <= m; ++i) {
//        result = (result + dp[n][i]) % MOD;
//    }
//
//    cout << result << endl;
//    return 0;
//} 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//// 计算 a 的 b 次方模 MOD
//long long mod_pow(long long a, long long b, long long mod) {
//    long long result = 1;
//    a = a % mod; // 先对 a 取模
//    while (b > 0) {
//        if (b % 2 == 1) { // 如果 b 是奇数
//            result = (result * a) % mod;
//        }
//        a = (a * a) % mod; // a^2
//        b /= 2;
//    }
//    return result;
//}
//
//// 计算组合数 C(n, k) = n! / (k! * (n-k)!)
////int comb(int n, int k) {
////    if (k > n) return 0;
////    long long numerator = 1; // 分子
////    long long denominator = 1; // 分母
////    for (int i = 0; i < k; ++i) {
////        numerator = (numerator * (n - i)) % MOD;
////        denominator = (denominator * (i + 1)) % MOD;
////    }
////    // 计算分母的逆元
////    return (numerator * mod_pow(denominator, MOD - 2, MOD)) % MOD;
////}
////
////// 计算满足条件的非递减序列数量
////int countSequences(int n, int m) {
////    int result = 0;
////
////    // 遍历可能的异或值
////    for (int xorValue = 1; xorValue <= m; ++xorValue) {
////        int needed = xorValue ^ m; // 需要的数
////        if (needed < 1 || needed > m) continue;
////
////        // 计算组合数
////        result = (result + comb(n - 1 + m - needed, n - 1)) % MOD;
////    }
////
////    return result;
////}
////
////int main() {
////    int n, m;
////    cin >> n >> m; // 输入序列长度 n 和取值范围 m
////    cout << countSequences(n, m) << endl; // 输出结果
////    return 0;
////}#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MOD = 1e9 + 7;  // 定义常量 MOD，用于取模运算
//
//int countSequences(int n, int m) {
//    // dp[i][j] 表示长度为 i 的非递减序列中，异或值为 j 的数量
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    dp[0][0] = 1; // 空序列，异或值为0的情况
//
//    for (int length = 1; length <= n; ++length) {
//        for (int value = 1; value <= m; ++value) {
//            for (int prevValue = 1; prevValue <= value; ++prevValue) {
//                dp[length][value] = (dp[length][value] + dp[length - 1][value ^ prevValue]) % MOD;
//            }
//        }
//    }
//
//    return dp[n][m];
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度 n 和取值范围 m
//    cout << countSequences(n, m) << endl; // 输出结果
//    return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//const int MOD = 1e9 + 7; // 取模常量
//int countSequences(int n, int m) {
//    // dp[i][j]表示长度为i的非递减序列中，异或值为j的数量
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    dp[0][0] = 1; // 空序列，异或值为0的情况
//
//    // 遍历序列长度
//    for (int length = 1; length <= n; ++length) {
//        // 更新每一长度对应的dp数组
//        for (int j = 0; j <= m; ++j) {
//            for (int k = 1; k <= m; ++k) {
//                // 计算新的异或值
//                int newXor = j ^ k;
//                if (newXor <= m) {
//                    dp[length][newXor] = (dp[length][newXor] + dp[length - 1][j]) % MOD;
//                }
//            }
//        }
//    }
//    return dp[n][m]; // 返回长度为n，异或值为m的序列数量
//}
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度n和取值范围m
//    cout << countSequences(n, m) << endl; // 输出结果
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include<string>
//using namespace std;
//
//const int MOD = 1e9 + 7; // 取模常量
//unordered_map<string, long long> memo; // 记忆化存储
//
//long long count(int n, int m, int length, int prev, int currentXor) {
//    // 结束条件
//    if (length == n) {
//        return currentXor == m ? 1 : 0;
//    }
//
//    // 生成记忆化键
//    string key = to_string(length) + "," + to_string(prev) + "," + to_string(currentXor);
//    if (memo.find(key) != memo.end()) {
//        return memo[key];
//    }
//
//    long long result = 0;
//
//    // 从 prev 到 m 选择下一个数字
//    for (int k = prev; k <= m; ++k) {
//        result = (result + count(n, m, length + 1, k, currentXor ^ k)) % MOD;
//    }
//
//    memo[key] = result; // 记忆化存储结果
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // 输入序列长度 n 和取值范围 m
//    cout << count(n, m, 0, 1, 0) << endl; // 从长度 0 开始，前一个数字从 1 开始，初始异或值为 0
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    // dp[i][j]表示长度为i，异或值为j的非递减序列数量
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
//    dp[0][0] = 1; // 初始化
//
//    // 处理长度
//    for (int length = 1; length <= n; ++length) {
//        for (int k = 1; k <= m; ++k) {
//            for (int xorValue = 0; xorValue <= m; ++xorValue) {
//                // 如果存在组合
//                if (dp[length - 1][xorValue] > 0) {
//                    int newXor = xorValue ^ k;
//                    dp[length][newXor] = (dp[length][newXor] + dp[length - 1][xorValue]) % MOD;
//                }
//            }
//        }
//    }
//
//    // 输出结果
//    cout << dp[n][m] << endl;
//    return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
//    dp[0][0] = 1;
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j <= m; ++j) {
//            for (int k = 1; k <= m; ++k) {
//                dp[i][j ^ k] = (dp[i][j ^ k] + dp[i - 1][j]) % MOD;
//            }
//        }
//    }
//
//    cout << dp[n][m] << endl;
//    return 0;
//}
//#include<iostream>
//#include <cassert>
//#include "C++内存管理.cpp"
//using namespace std;
//class string
//{
//public:
//	string(const char* ptr = " ")
//	{
//		if (ptr == nullptr)
//		{
//			assert(false);
//			return;
//		}
//		_ptr = new char[strlen(ptr) + 1];
//		strcpy(_ptr, ptr);
//	}
//
//	string(const string& s)
//		:_ptr(new char[strlen(s._ptr) + 1])
//	{
//		strcpy(_ptr, s._ptr);
//	}
//	string& operator=(const string& s)
//	{
//		if (this != &s)
//		{
//			char* p = new char[strlen(s._ptr) + 1];
//			strcpy(p, s._ptr);
//			delete[]_ptr;
//			_ptr = p;
//		}
//		return *this;
//	}
//
//	~string()
//	{
//		if (_ptr)
//		{
//			delete[]_ptr;
//			_ptr = nullptr;
//		}
//	}
//private:
//	char* _ptr;
//};

//class string {
//	string(const char* ptr= " ")
//	{
//		if (ptr)
//		{
//			_ptr = new char[strlen(ptr) + 1];
//			strcpy(_ptr, ptr);
//		}
//	}
//	string(string& s)
//		:_ptr(nullptr)
//	{
//		string strTmp(s._ptr);
//		Swap(_ptr, strTmp);
//	}
//	string& operator=(string s)
//	{
//		Swap(_ptr, s._ptr);
//		return *s;
//	}
//private:
//	char* _ptr;
//};
//#include<iostream>
//using namespace std;
//class string
//{
//public:
//	typedef char* iterator;
//public:
//	string(const char* str = " ")
//	{
//		_size = strlen(str);
//		_capacity = _size;
//		_str = new char[_capacity + 1];
//		strcpy(_str, str);
//	}
//	/*string(const string& s)
//	{
//		_size = s._size;
//		_capacity = _size;
//		_str = new char[_capacity + 1];
//		strcpy(_str, s._str);
//	}*/
//	string(const string& s)
//		:_str(nullptr)
//		, _size(0)
//		,_capacity(0)
//	{
//		string tmp(s);
//		this->Swap(tmp);
//	}
//	iterator begin()
//	{
//		return _str;
//	}
//	iterator end()
//	{
//		return _str + _size;
//	}
//	void push_back(char c)
//	{
//		if (_size == _capacity)
//		{
//			//Reserve(_capacity*2);
//		}
//		_str[_size++] = c;
//		_str[_size] = '\0';
//	}
//	string& operator+=(char c)
//	{
//		push_back(c);
//		return *this;
//	}
//	void clear()
//	{
//		_size = 0;
//		_str[_size] = '\0';
//	}
//	void Swap(string& s)
//	{
//		swap(_str, s._str);
//		swap(_size, s._size);
//		swap(_capacity, s._capacity);
//	}
//	const char* c_str()const
//	{
//		return _str;
//	}
//
//private:
//	size_t _size;
//	size_t _capacity;
//	char* _str;
//};