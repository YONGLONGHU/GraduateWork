//#include<iostream>
//#include <string>
//using namespace std;
////�ַ������
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        string answer;
//        int cur = 0;//������¼ÿһλ��Ӧ���ֵ���Ӻ�
//        int len1 = num1.size() - 1, len2 = num2.size() - 1;//���ַ��������λ��ʼ
//        while (len1 >= 0 || len2 >= 0 || cur > 0)
//        {
//            if (len1 >= 0) cur += num1[len1--] - '0';
//            if (len2 >= 0) cur += num2[len2--] - '0';
//            answer += to_string(cur % 10);//������������ӵ�
//            cur = cur / 10;//������λ�����´�����
//        }
//        reverse(answer.begin(), answer.end());
//        return answer;
//    }
//};
////ģ��ʵ��
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
//        // ��ǰԪ��Ϊ������ֱ�Ӽӵ���ǰ����  
//        if (a[i] > 0) {
//            currentSum += a[i];
//        }
//        else {
//            // ��ǰԪ��Ϊ����������Ƿ���Է�ת����Ԫ������󻯵�ǰ��  
//            if (i > 0 && a[i - 1] > 0) {
//                // ���ǰһ��Ԫ������������ת���ǣ�����ǰԪ�ر�Ϊ������ǰһ��Ԫ�ر�Ϊ����  
//                // ����������ֻ��Ҫ�������ͣ����ֱ�Ӽ�������ǰԪ�صľ���ֵ  
//                currentSum += -2 * a[i];
//            }
//            else if (i < N - 1 && a[i + 1] > 0) {
//                // �����һ��Ԫ������������ת����  
//                currentSum += -2 * a[i];
//            }
//            else {
//                // ��ǰԪ���Ǹ�����û�����ڵ��������Է�ת����ֱ�Ӽӵ���ǰ���У���Ϊ��ת�ް�����  
//                currentSum += a[i];
//            }
//        }
//        // ��ÿһ���и�������  
//        maxSum = max(maxSum, currentSum);
//    }
//
//    // �����������������󣬿��ܴ��ڵ������ĳЩ�����ڿ�ʼʱû��������������������������ʹ�䷭ת  
//    // ��ˣ�������Ҫ�ٱ���һ�����飬�������и�������ת��ĺ�  
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
//// ������������ķǵݼ���������
//int countSequences(int n, int m) {
//    // dp[length][xorValue][maxValue]
//    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(m + 1, 0)));
//
//    // ��ʼ��������Ϊ 0 �����У����ֵΪ 0 �ķ�ʽ�� 1 �֣������У�
//    dp[0][0][0] = 1;
//
//    // ��̬�滮���
//    for (int length = 1; length <= n; ++length) {
//        for (int maxValue = 1; maxValue <= m; ++maxValue) {
//            for (int xorValue = 0; xorValue <= m; ++xorValue) {
//                // ����ǰֵ x ��һ��ӵ�������
//                for (int x = 1; x <= maxValue; ++x) {
//                    dp[length][xorValue][maxValue] = (dp[length][xorValue][maxValue] + dp[length - 1][xorValue ^ x][maxValue]) % MOD;
//                }
//            }
//        }
//    }
//
//    // �������ս�������������Ĳ�ͬ��������
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
//    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
//    cout << countSequences(n, m) << endl; // ������
//    return 0;
////}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MOD = 1e9 + 7;
//
//// ������������ķǵݼ���������
//int countSequences(int n, int m) {
//    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(m + 1, 0)));
//
//    // ��ʼ��������Ϊ 0 �����У����ֵΪ 0 �ķ�ʽ�� 1 �֣������У�
//    dp[0][0][0] = 1;
//
//    // ��̬�滮���
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
//    // �������ս��
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
//    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
//    cout << countSequences(n, m) << endl; // ������
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
//// ���������
//int comb(int n, int k) {
//    if (k > n) return 0;
//    long long res = 1;
//    for (int i = 1; i <= k; ++i) {
//        res = res * (n - i + 1) % MOD;
//        res = res * pow(i, MOD - 2) % MOD; // ��Ԫ
//    }
//    return res;
//}
//
//// �������������ķǵݼ���������
//int countSequences(int n, int m) {
//    int result = 0;
//
//    // �������ܵ����ֵ
//    for (int xorValue = 1; xorValue <= m; ++xorValue) {
//        if ((xorValue ^ m) < 1 || (xorValue ^ m) > m) continue;
//
//        int needed = xorValue ^ m; // ��Ҫ����
//        if (needed < 1 || needed > m) continue;
//
//        // �������
//        result = (result + comb(n - 1 + m - needed, n - 1)) % MOD;
//    }
//
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
//    cout << countSequences(n, m) << endl; // ������
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
//    // ��ʼ��dp����
//    for (int i = 1; i <= m; ++i) {
//        dp[1][i] = 1;
//    }
//
//    // ���dp����
//    for (int len = 2; len <= n; ++len) {
//        for (int last = 1; last <= m; ++last) {
//            for (int prev = 0; prev <= last; ++prev) {
//                dp[len][last] = (dp[len][last] + dp[len - 1][prev]) % MOD;
//            }
//        }
//    }
//
//    long long result = 0;
//    // �������п��ܵ����ֵ
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
//// ���� a �� b �η�ģ MOD
//long long mod_pow(long long a, long long b, long long mod) {
//    long long result = 1;
//    a = a % mod; // �ȶ� a ȡģ
//    while (b > 0) {
//        if (b % 2 == 1) { // ��� b ������
//            result = (result * a) % mod;
//        }
//        a = (a * a) % mod; // a^2
//        b /= 2;
//    }
//    return result;
//}
//
//// ��������� C(n, k) = n! / (k! * (n-k)!)
////int comb(int n, int k) {
////    if (k > n) return 0;
////    long long numerator = 1; // ����
////    long long denominator = 1; // ��ĸ
////    for (int i = 0; i < k; ++i) {
////        numerator = (numerator * (n - i)) % MOD;
////        denominator = (denominator * (i + 1)) % MOD;
////    }
////    // �����ĸ����Ԫ
////    return (numerator * mod_pow(denominator, MOD - 2, MOD)) % MOD;
////}
////
////// �������������ķǵݼ���������
////int countSequences(int n, int m) {
////    int result = 0;
////
////    // �������ܵ����ֵ
////    for (int xorValue = 1; xorValue <= m; ++xorValue) {
////        int needed = xorValue ^ m; // ��Ҫ����
////        if (needed < 1 || needed > m) continue;
////
////        // ���������
////        result = (result + comb(n - 1 + m - needed, n - 1)) % MOD;
////    }
////
////    return result;
////}
////
////int main() {
////    int n, m;
////    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
////    cout << countSequences(n, m) << endl; // ������
////    return 0;
////}#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MOD = 1e9 + 7;  // ���峣�� MOD������ȡģ����
//
//int countSequences(int n, int m) {
//    // dp[i][j] ��ʾ����Ϊ i �ķǵݼ������У����ֵΪ j ������
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    dp[0][0] = 1; // �����У����ֵΪ0�����
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
//    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
//    cout << countSequences(n, m) << endl; // ������
//    return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//const int MOD = 1e9 + 7; // ȡģ����
//int countSequences(int n, int m) {
//    // dp[i][j]��ʾ����Ϊi�ķǵݼ������У����ֵΪj������
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    dp[0][0] = 1; // �����У����ֵΪ0�����
//
//    // �������г���
//    for (int length = 1; length <= n; ++length) {
//        // ����ÿһ���ȶ�Ӧ��dp����
//        for (int j = 0; j <= m; ++j) {
//            for (int k = 1; k <= m; ++k) {
//                // �����µ����ֵ
//                int newXor = j ^ k;
//                if (newXor <= m) {
//                    dp[length][newXor] = (dp[length][newXor] + dp[length - 1][j]) % MOD;
//                }
//            }
//        }
//    }
//    return dp[n][m]; // ���س���Ϊn�����ֵΪm����������
//}
//int main() {
//    int n, m;
//    cin >> n >> m; // �������г���n��ȡֵ��Χm
//    cout << countSequences(n, m) << endl; // ������
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include<string>
//using namespace std;
//
//const int MOD = 1e9 + 7; // ȡģ����
//unordered_map<string, long long> memo; // ���仯�洢
//
//long long count(int n, int m, int length, int prev, int currentXor) {
//    // ��������
//    if (length == n) {
//        return currentXor == m ? 1 : 0;
//    }
//
//    // ���ɼ��仯��
//    string key = to_string(length) + "," + to_string(prev) + "," + to_string(currentXor);
//    if (memo.find(key) != memo.end()) {
//        return memo[key];
//    }
//
//    long long result = 0;
//
//    // �� prev �� m ѡ����һ������
//    for (int k = prev; k <= m; ++k) {
//        result = (result + count(n, m, length + 1, k, currentXor ^ k)) % MOD;
//    }
//
//    memo[key] = result; // ���仯�洢���
//    return result;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; // �������г��� n ��ȡֵ��Χ m
//    cout << count(n, m, 0, 1, 0) << endl; // �ӳ��� 0 ��ʼ��ǰһ�����ִ� 1 ��ʼ����ʼ���ֵΪ 0
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
//    // dp[i][j]��ʾ����Ϊi�����ֵΪj�ķǵݼ���������
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
//    dp[0][0] = 1; // ��ʼ��
//
//    // ������
//    for (int length = 1; length <= n; ++length) {
//        for (int k = 1; k <= m; ++k) {
//            for (int xorValue = 0; xorValue <= m; ++xorValue) {
//                // ����������
//                if (dp[length - 1][xorValue] > 0) {
//                    int newXor = xorValue ^ k;
//                    dp[length][newXor] = (dp[length][newXor] + dp[length - 1][xorValue]) % MOD;
//                }
//            }
//        }
//    }
//
//    // ������
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
//#include "C++�ڴ����.cpp"
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