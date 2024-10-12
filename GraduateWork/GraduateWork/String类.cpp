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
        // ��ǰԪ��Ϊ������ֱ�Ӽӵ���ǰ����  
        if (a[i] > 0) {
            currentSum += a[i];
        }
        else {
            // ��ǰԪ��Ϊ����������Ƿ���Է�ת����Ԫ������󻯵�ǰ��  
            if (i > 0 && a[i - 1] > 0) {
                // ���ǰһ��Ԫ������������ת���ǣ�����ǰԪ�ر�Ϊ������ǰһ��Ԫ�ر�Ϊ����  
                // ����������ֻ��Ҫ�������ͣ����ֱ�Ӽ�������ǰԪ�صľ���ֵ  
                currentSum += -2 * a[i];
            }
            else if (i < N - 1 && a[i + 1] > 0) {
                // �����һ��Ԫ������������ת����  
                currentSum += -2 * a[i];
            }
            else {
                // ��ǰԪ���Ǹ�����û�����ڵ��������Է�ת����ֱ�Ӽӵ���ǰ���У���Ϊ��ת�ް�����  
                currentSum += a[i];
            }
        }
        // ��ÿһ���и�������  
        maxSum = max(maxSum, currentSum);
    }

    // �����������������󣬿��ܴ��ڵ������ĳЩ�����ڿ�ʼʱû��������������������������ʹ�䷭ת  
    // ��ˣ�������Ҫ�ٱ���һ�����飬�������и�������ת��ĺ�  
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
