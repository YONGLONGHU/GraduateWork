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
//class Solution {
//public:
//    int ifPrime(int x)
//    {
//        for (int i = 2; i * i <= x; ++i)
//        {
//            if (x % i == 0)
//                return 0;
//        }
//        return 1;
//    }
//    int countPrimes(int n)
//    {
//        int ans = 0;
//        for (int i = 2; i < n; ++i)
//            ans += ifPrime(i);
//        return ans;
//    }
//};
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        int length = nums.size();
//        for (int i = 0; i < length - 1; i++)
//        {
//            int j = i + 1;
//            if (nums[i] == nums[i + 1])
//                return true;
//        }
//        return false;
//    }
//};
//反转二叉树
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//        if (root == nullptr) {
//            return nullptr;
//        }
//        TreeNode* left = invertTree(root->left);
//        TreeNode* right = invertTree(root->right);
//        root->left = right;
//        root->right = left;
//        return root;
//    }
//};

//#include <iostream>
//
//// 定义二叉树节点结构体
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//private:
//    int count = 0;
//    int result = 0;
//    // 中序遍历二叉树
//    void inorderTraversal(TreeNode* node, int k) {
//        if (node == nullptr) {
//            return;
//        }
//        // 先递归遍历左子树
//        inorderTraversal(node->left, k);
//        count++;
//        // 当计数等于k时，说明找到了第k小的元素，记录下来并返回
//        if (count == k) {
//            result = node->val;
//            return;
//        }
//        // 再递归遍历右子树
//        inorderTraversal(node->right, k);
//    }
//
//public:
//    int kthSmallest(TreeNode* root, int k) {
//        inorderTraversal(root, k);
//        return result;
//    }
//};

//#include<stdio.h>
//#include<unistd.h>
//#include<stdlib.h>
//#include<pthread.h>
//int tickets = 100;
//pthread_mutex_t mutex;
//void* scalpers(void* arg)
//{
//	pthread_t tid = pthread_self();
//	while (1)
//	{
//		pthread_mutex_lock(&mutex);
//		if (tickets > 0)
//		{
//			printf("%p-get tickets %d\n", tid, tickets);
//			tickets--;
//			pthread_mutex_unlock(&mutex);
//		}
//		else
//		{
//			pthread_mutex_unlock(&mutex);
//			pthread_exit(NULL);
//		}
//	}
//	return;
//}
//int main()
//{
//	pthread_t tid[4];
//	for (int i = 0; i < 4; i++)
//	{
//		int ret = pthread_create(&tid[i],NULL,scalpers,NULL);
//		if(ret != 0)
//		{
//			printf("pthread_create error\n");
//			return -1;
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		pthread_join(tid[i], NULL);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<unistd.h>
//#include<stdlib.h>
//#include<pthread.h>
//int pots = 0;
//pthread_mutex_t mutex;
//pthread_cond_t cond;
//void* student(void* arg)
//{
//	while (1)
//	{
//		//加锁
//		pthread_mutex_lock(&mutex);
//		if (pots == 0)
//		{
//			//陷入阻塞
//			pthread_cond_wait(&cond, &mutex);
//		}
//		printf("begin eating\n");
//		pots = 0;
//		//解锁
//		pthread_mutex_unlock(&mutex);
//		//唤醒阿姨
//		pthread_cond_signal(&cond);
//	}
//	return NULL;
//}
//void* canteen(void* arg)
//{
//	while (1)
//	{
//		//加锁
//		pthread_mutex_lock(&mutex);
//		if (pots == 1)
//		{
//			//阻塞
//			pthread_cond_wait(&cond, &mutex);
//		}
//		printf("OK了\n");
//		pots = 1;
//		//解锁
//		pthread_mutex_unlock)(&mutex);
//		//唤醒学生
//		pthread_cond_signal(&cond);
//	}
//	return NULL;
//}
//int main()
//{
//	pthread_t stu_id, aunt_id;
//	int ret;
//	pthread_mutex_init(&mutex, NULL);
//	pthread_cond_init(&cond, NULL);
//	ret = pthread_create(&stu_id, NULL, student, NULL);
//	if (ret != 0)
//	{
//		printf("create thread error\n");
//		return -1;
//	}
//	ret = pthread_create(&aunt_id, NULL, canteen, NULL);
//	if (ret != 0)
//	{
//		printf("create thread error\n");
//		return -1;
//	}
//	pthread_join(stu_id, NULL);
//	pthread_join(aunt_id, NULL);
//	pthread_mutex_destroy(&mutex);
//	pthread_cond_destroy(&cond);
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<queue>
//#include<pthread.h>
//#define MAXQ 10
//class BlockQueue
//{
//public:
//	BlockQueue(int maxq=MAXQ):_capacity(maxq){
//		pthread_mutex_init(&_mutex, NULL);
//		pthread_cond_init(&_cond_pro, NULL);
//		pthread_cond_init(&_cond_con, NULL);
//	}
//	~BlockQueue(){
//		pthread_mutex_destroy(&_mutex);
//		pthread_cond_destroy(&_cond_pro);
//		pthread_cond_destroy(&_cond_con);
//	}
//	bool Push(int data)
//	{
//
//		return true;
//	}
//	bool Pop(int* data)
//	{
//		return true;
//	}
//private:
//	std::queue<int> _queue;
//	int _capacity;
//	pthread_mutex_t _mutex;
//	pthread_cond_t _cond_pro;
//	pthread_cond_t _cond_con;
//};
//#include <iostream>
//
//bool isPowerOfTwo(int n) {
//    // 基础情况：如果 n 是 1，那么它是 2 的 0 次幂，所以返回 true。
//    if (n == 1) {
//        return true;
//    }
//    // 如果 n 是偶数，递归地检查 n/2 是否是 2 的幂次方。
//    else if (n % 2 == 0) {
//        return isPowerOfTwo(n / 2);
//    }
//    // 如果 n 是奇数，那么它不是 2 的幂次方，所以返回 false。
//    else {
//        return false;
//    }
//}
//
//int main() {
//    int n;
//    std::cout << "请输入一个整数: ";
//    std::cin >> n;
//    if (isPowerOfTwo(n)) {
//        std::cout << n << " 是 2 的幂次方。" << std::endl;
//    }
//    else {
//        std::cout << n << " 不是 2 的幂次方。" << std::endl;
//    }
//    return 0;
//}
#include<netdb.h>
#include<sys/socket.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#include<unistd>
int main(int argc,char*argv[])
{
	if (argc < 3)
	{
		printf("usage:%s ip port\n", argv[0]);
		exit(1);
	}
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0)
	{
		perror("socket error");
		exit(1);
	}
	struct sockaddr_in serveraddr;
	memset(&serveraddr, 0, sizeof(serveraddr));
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htons(atoi(argv[2]));
	inet_pton(AF_INET, argv[1], &serveraddr.sin_addr.s_addr);
	if (connect(sockfd, (struct sockaddr*)&serveraddr), sizeof(serveraddr) < 0) {
		perror("connect error");
		exit(1);
	}
	char buffer[1024];
	memset(buffer, 0, sizeof(buffer));
	size_t size;
	if ((size = read(sockfd, buffer, sizeof(buffer))) < 0)
		perror("read error");
	if (write(STDOUT_FILENO, buffer, size) != size)
	{
		perror("write error");
	}
	close(sockfd);
	return 0;
}