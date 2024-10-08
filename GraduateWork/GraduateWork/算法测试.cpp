#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 0;  // �Ѿ���Ŀ��λ��

    int jumps = 0;  // ��¼��Ծ����
    int farthest = 0;  // ��ǰ������������Զλ��
    int end = 0;  // ��ǰ��Ծ�ı߽�

    for (int i = 0; i < n - 1; ++i) {
        farthest = max(farthest, i + nums[i]);  // ������Զλ��
        if (i == end) {  // ���ﵱǰ��Ծ�߽磬������Ծ
            jumps++;
            end = farthest;  // ������Ծ�߽�
        }
        if (end >= n - 1) {  // ����Ѿ����Ե����յ�
            break;
        }
    }

    return jumps;
}

int main() {
    vector<int> nums = { 3, 1, 2, 2, 3, 3, 2, 4, 0, 2, 2, 0 };  // ��������
    cout << "��С��Ծ����: " << minJumps(nums) << endl;  // ������
    return 0;
}
