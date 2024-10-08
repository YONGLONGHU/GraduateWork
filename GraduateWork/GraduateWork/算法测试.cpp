#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 0;  // 已经在目标位置

    int jumps = 0;  // 记录跳跃次数
    int farthest = 0;  // 当前可以跳到的最远位置
    int end = 0;  // 当前跳跃的边界

    for (int i = 0; i < n - 1; ++i) {
        farthest = max(farthest, i + nums[i]);  // 更新最远位置
        if (i == end) {  // 到达当前跳跃边界，必须跳跃
            jumps++;
            end = farthest;  // 更新跳跃边界
        }
        if (end >= n - 1) {  // 如果已经可以到达终点
            break;
        }
    }

    return jumps;
}

int main() {
    vector<int> nums = { 3, 1, 2, 2, 3, 3, 2, 4, 0, 2, 2, 0 };  // 输入数据
    cout << "最小跳跃次数: " << minJumps(nums) << endl;  // 输出结果
    return 0;
}
