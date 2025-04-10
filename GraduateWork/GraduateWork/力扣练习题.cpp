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
//#include<netdb.h>
//#include<sys/socket.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<memory.h>
//#include<unistd>
//int main(int argc,char*argv[])
//{
//	if (argc < 3)
//	{
//		printf("usage:%s ip port\n", argv[0]);
//		exit(1);
//	}
//	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
//	if (sockfd < 0)
//	{
//		perror("socket error");
//		exit(1);
//	}
//	struct sockaddr_in serveraddr;
//	memset(&serveraddr, 0, sizeof(serveraddr));
//	serveraddr.sin_family = AF_INET;
//	serveraddr.sin_port = htons(atoi(argv[2]));
//	inet_pton(AF_INET, argv[1], &serveraddr.sin_addr.s_addr);
//	if (connect(sockfd, (struct sockaddr*)&serveraddr), sizeof(serveraddr) < 0) {
//		perror("connect error");
//		exit(1);
//	}
//	char buffer[1024];
//	memset(buffer, 0, sizeof(buffer));
//	size_t size;
//	if ((size = read(sockfd, buffer, sizeof(buffer))) < 0)
//		perror("read error");
//	if (write(STDOUT_FILENO, buffer, size) != size)
//	{
//		perror("write error");
//	}
//	close(sockfd);
//	return 0;
//}
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
//    bool hasCycle(ListNode* head) {
//        unordered_set<ListNode*> seen;
//        while (head != nullptr) {
//            if (seen.count(head)) {
//                return true;
//            }
//            seen.insert(head);
//            head = head->next;
//        }
//        return false;
//    }
//};
//#include <iostream>
//#include <algorithm> // 用于std::swap函数
//
//using namespace std;
//
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        bool swapped = false; // 优化标志位
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) break; // 本轮未交换说明已有序
//    }
//}
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "原始数组: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//
//    bubbleSort(arr, size);
//
//    cout << "\n排序后数组: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//// 调整以i为根的子树为大顶堆
//void heapify(int arr[], int n, int i) {
//    int largest = i;        // 初始化最大值为当前节点
//    int left = 2 * i + 1;   // 左子节点索引
//    int right = 2 * i + 2;  // 右子节点索引
//
//    // 如果左子节点存在且大于当前最大值
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    // 如果右子节点存在且大于当前最大值
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    // 如果最大值不是当前节点，交换并继续调整
//    if (largest != i) {
//        swap(arr[i], arr[largest]);
//        heapify(arr, n, largest);  // 递归调整受影响的子树
//    }
//}
//
//// 构建大顶堆
//void buildHeap(int arr[], int n) {
//    // 从最后一个非叶子节点开始调整（n/2 - 1）
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//}
//
//// 堆排序主函数
//void heapSort(int arr[], int n) {
//    // 1. 构建初始大顶堆
//    buildHeap(arr, n);
//
//    // 2. 逐个提取堆顶元素（最大值）
//    for (int i = n - 1; i > 0; i--) {
//        // 将当前堆顶移到数组末尾
//        swap(arr[0], arr[i]);
//
//        // 调整剩余元素为新堆（大小减1）
//        heapify(arr, i, 0);
//    }
//}
//
//// 打印数组
//void printArray(int arr[], int n) {
//    for (int i = 0; i < n; ++i)
//        cout << arr[i] << " ";
//    cout << "\n";
//}
//
//int main() {
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "原始数组: ";
//    printArray(arr, n);
//
//    heapSort(arr, n);
//
//    cout << "排序后数组: ";
//    printArray(arr, n);
//
//    return 0;
//}
//#include <iostream>
//#include <thread>
//using namespace std;
//
//// 线程函数：共享进程资源
//void printMessage(const string& msg) {
//    cout << "Thread: " << msg << endl; // 共享cout资源
//}
//
//int main() {
//    // 创建两个线程（属于同一进程）
//    thread t1(printMessage, "Hello");
//    thread t2(printMessage, "World");
//
//    // 等待线程结束
//    t1.join();
//    t2.join();
//
//    return 0;
//}
//#include <pthread.h>
//#include <semaphore.h>
//#include <stdio.h>
//
//sem_t sem;
//
//void* thread_function(void* arg) {
//    sem_wait(&sem);  // 获取信号量
//    printf("Thread is in the critical section.\n");
//    sem_post(&sem);  // 释放信号量
//    return NULL;
//}
//
//int main() {
//    pthread_t threads[3];
//
//    sem_init(&sem, 0, 1);  // 初始化信号量，初始值为 1，表示一个资源
//
//    // 创建多个线程
//    for (int i = 0; i < 3; i++) {
//        pthread_create(&threads[i], NULL, thread_function, NULL);
//    }
//
//    // 等待线程结束
//    for (int i = 0; i < 3; i++) {
//        pthread_join(threads[i], NULL);
//    }
//
//    sem_destroy(&sem);  // 销毁信号量
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <sys/epoll.h>
//
//#define MAX_EVENTS 10
//
//int main() {
//    int listen_fd, epoll_fd;
//    struct epoll_event ev, events[MAX_EVENTS];
//
//    // 创建监听套接字
//    listen_fd = socket(AF_INET, SOCK_STREAM, 0);
//    if (listen_fd == -1) {
//        perror("socket");
//        exit(1);
//    }
//
//    // 设置监听套接字
//    struct sockaddr_in addr;
//    addr.sin_family = AF_INET;
//    addr.sin_addr.s_addr = INADDR_ANY;
//    addr.sin_port = htons(8080);
//    bind(listen_fd, (struct sockaddr*)&addr, sizeof(addr));
//    listen(listen_fd, 10);
//
//    // 创建 epoll 实例
//    epoll_fd = epoll_create(1);
//    if (epoll_fd == -1) {
//        perror("epoll_create");
//        exit(1);
//    }
//
//    // 将监听套接字添加到 epoll 实例中
//    ev.events = EPOLLIN;
//    ev.data.fd = listen_fd;
//    if (ep
//#include <stdio.h>
//#include <signal.h>
//#include <stdlib.h>
//
//void signal_handler(int signum) {
//    printf("Received signal %d\n", signum);
//    exit(0);
//}
//
//int main() {
//    signal(SIGINT, signal_handler);  // 捕获 SIGINT 信号
//    while (1);  // 持续运行，等待信号
//}
//#include <stdio.h>
//#include <signal.h>
//#include <stdlib.h>
//
//void signal_handler(int signum) {
//    printf("Caught signal %d\n", signum);
//    exit(0);
//}
//
//int main() {
//    struct sigaction sa;
//    sa.sa_handler = signal_handler;
//    sigemptyset(&sa.sa_mask);  // 设置空的信号集
//    sa.sa_flags = 0;  // 默认行为
//    sigaction(SIGINT, &sa, NULL);  // 捕获 SIGINT 信号
//    while (1);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <sys/epoll.h>
//
//#define MAX_EVENTS 10
//
//int main() {
//    int listen_fd, epoll_fd;
//    struct epoll_event ev, events[MAX_EVENTS];
//
//    // 创建监听套接字
//    listen_fd = socket(AF_INET, SOCK_STREAM, 0);
//    if (listen_fd == -1) {
//        perror("socket");
//        exit(1);
//    }
//
//    // 设置监听套接字
//    struct sockaddr_in addr;
//    addr.sin_family = AF_INET;
//    addr.sin_addr.s_addr = INADDR_ANY;
//    addr.sin_port = htons(8080);
//    bind(listen_fd, (struct sockaddr*)&addr, sizeof(addr));
//    listen(listen_fd, 10);
//
//    // 创建 epoll 实例
//    epoll_fd = epoll_create(1);
//    if (epoll_fd == -1) {
//        perror("epoll_create");
//        exit(1);
//    }
//
//    // 将监听套接字添加到 epoll 实例中
//    ev.events = EPOLLIN;
//    ev.data.fd = listen_fd;
//    if (ep
//#include <iostream>
//#include <set>
//
//int main() {
//    std::set<int> s = { 3, 1, 4, 1, 5 }; // 重复元素会被忽略
//    s.insert(2);
//    for (int x : s) {
//        std::cout << x << " "; // 输出 "1 2 3 4 5"
//    }
//    return 0;
//}
//#include <iostream>
//#include <map>
//
//int main() {
//    std::map<std::string, int> m = { {"apple", 1}, {"banana", 2} };
//    m["orange"] = 3; // 插入或修改
//    for (const auto& kv : m) {
//        std::cout << kv.first << ": " << kv.second << std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <set>
//
//int main() {
//    std::multiset<int> ms = { 3, 1, 4, 1, 5 }; // 允许重复元素
//    ms.insert(2);
//    for (int x : ms) {
//        std::cout << x << " "; // 输出 "1 1 2 3 4 5"
//    }
//    return 0;
//}
//#include <iostream>
//#include <map>
//
//int main() {
//    std::multimap<std::string, int> mm = { {"apple", 1}, {"banana", 2}, {"apple", 3} };
//    mm.insert({ "orange", 4 });
//    for (const auto& kv : mm) {
//        std::cout << kv.first << ": " << kv.second << std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <unordered_set>
//
//int main() {
//    std::unordered_set<int> us = { 3, 1, 4, 1, 5 }; // 重复元素会被忽略
//    us.insert(2);
//    for (int x : us) {
//        std::cout << x << " "; // 输出顺序不确定
//    }
//    return 0;
//}
//#include <iostream>
//#include <unordered_map>
//
//int main() {
//    std::unordered_map<std::string, int> um = { {"apple", 1}, {"banana", 2} };
//    um["orange"] = 3; // 插入或修改
//    for (const auto& kv : um) {
//        std::cout << kv.first << ": " << kv.second << std::endl;
//    }
//    return 0;
//}

//#include"index.hpp"
//#include<algorithm>
//#include"util.hpp"
//#include<jsoncpp/json/json.h>
//namespace ns_searcher
//{
//    class Searcher
//    {
//    private:
//        ns_index::Index* index;
//    public:
//        Searcher() {}
//        ~Searcher() {}
//    public:
//        void InitSearcher(const std::string& input)
//        {
//            //1.创建index对象
//            index = ns_index::Index::GetInstance();
//            //2.创建索引
//            index->BuildIndex(input);
//        }
//        void Search(const std::string& query, std::string* json_string)
//        {
//            //1.对query进行分词处理
//            std::vector<std::string> words;
//            ns_util::JiebaUtil::CutString(query, &words);
//            //2.根据各个词，进行index查找
//            ns_index::InvertedList inverted_list_all;
//            for (std::string word : words)
//            {
//                boost::to_lower(word);
//                ns_index::InvertedList* inverted_list = index->GetInvertedList(word);
//                if (nullptr == inverted_list)
//                    continue;
//                inverted_list_all.insert(inverted_list_all.end(), inverted_list.begin(), inverted_list.end());
//            }
//            //3.汇总结果，根据相关性降序排序
//            std::sort(inverted_list_all.begin(), inverted_list_all.end(), [](const ns_index::InvertedElem& e1, const ns_index::InvertedElem& e2) {
//                return e1.weight > e2.weight;
//                });
//            //4.根据结果构建json串
//            Json::Value root;
//            for (auto& item : inverted_list_all)
//            {
//                ns_index::DocInfo* doc = index->GetForwardIndex(item.doc_id);
//                if (nullptr == doc)
//                    continue;
//            }
//            Json::Value elem;
//            elem["title"] = doc->title;
//            elem["desc"] = doc->content;
//            elem["url"] = doc->url;
//
//            root.append(elem);
//        }
//        Json::StyledWriter writer;
//        *json_string = writer.write(root);
//
//    };
//}
//#include"search.hpp"
//#include<cstdio>
//#include<iostream>
//#include<string>
//#include<cstring>
//const std::string input = "data/raw_html/raw.txt";
//int main()
//{
//    ns_searcher::Searcher* search = new ns_searcher::Searcher();
//    search->InitSearcher(input);
//    char buffer[1024];
//    std::string query;
//    std::string json_string;
//    while (true)
//    {
//        std::cout << "please enter your search query:";
//        fgets(buffer, sizeof(buffer) - 1, stdin);
//        buffer[strlen(buffer) - 1] = 0;
//        query = buffer;
//        search->Search(query, &json_string);
//        std::cout << json_string << std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <ctime>
//#define NORMAL 1
//#define WARNING 2
//#define DEBUG 3
//#define FATAL 4
//#define LOG(LEVEL, MESSAGE) log(#LEVEL, MESSAGE, __FILE__, __LINE__)
//void log(std::string level, std::string message, std::string file, int line)
//{
//	std::cout << "[" << level << "]" << "[" << time(nullptr) << "]" << "[" <<
//		message << "]" << "[" << file << " : " << line << "]" << std::endl;
//}
//#include"cpp-httplib/httplib.h"
//#include"search.hpp"
//const std::string root_path = "./wwwroot";
//const std::string input = "data/raw_html/raw.txt";
//int main()
//{
//    ns_searcher::Searcher search;
//    search.InitSearcher(input);
//
//    httplib::Server svr;
//    svr.set_base_dir(root_path.c_str());
//    svr.Get("/s", [&search](const httplib::Request& req, httplib::Response& rsp) {
//        //    rsp.set_content("hello world.","text/plain;charset=utf-8");
//        if (!req.has_param("word"))
//        {
//            rsp.set_content("必须要有关键字才能搜索！", "text/plain;charset=utf-8");
//            return;
//        }
//        std::string word = req.get_param_value("word");
//        std::cout << "用户正在搜索： " << word << std::endl;
//        std::string json_string;
//        search.Search(word, &json_string);
//        rsp.set_content(json_string, "application/json");
//        });
//    svr.listen("0.0.0.0", 8083);
//    return 0;
//}
//#include "cpp-httplib/httplib.h"
//#include "search.hpp"
//#include <mysql-cppconn/jdbc/mysql_driver.h>
//#include <mysql-cppconn/jdbc/mysql_connection.h>
//#include <mysql-cppconn/jdbc/cppconn/statement.h>
//#include <mysql-cppconn/jdbc/cppconn/prepared_statement.h>
//#include <mysql-cppconn/jdbc/cppconn/resultset.h>
//#include <mysql-cppconn/jdbc/cppconn/exception.h>
//#include <jsoncpp/json/json.h>
//#include <iostream>
//#include <sstream>
//
//using namespace httplib;
//
//const std::string root_path = "./wwwroot";
//const std::string input = "data/raw_html/raw.txt";
//
//int main() {
//    ns_searcher::Searcher search;
//    search.InitSearcher(input);
//
//    Server svr;
//    svr.set_base_dir(root_path.c_str());
//
//    // MySQL 配置
//    sql::mysql::MySQL_Driver* driver;
//    sql::Connection* con;
//    try {
//        driver = sql::mysql::get_mysql_driver_instance();
//        con = driver->connect("tcp://127.0.0.1:3306", "root", "HYou99291234.");
//        con->setSchema("search_engine_db");
//    }
//    catch (sql::SQLException& e) {
//        std::cerr << "MySQL Error: " << e.what() << std::endl;
//        return 1;
//    }
//
//    // 创建用户表（如果不存在）
//    sql::Statement* stmt = con->createStatement();
//    stmt->execute("CREATE TABLE IF NOT EXISTS users ("
//        "id INT AUTO_INCREMENT PRIMARY KEY,"
//        "username VARCHAR(50) UNIQUE NOT NULL,"
//        "password VARCHAR(50) NOT NULL)");
//
//    // 搜索接口
//    svr.Get("/s", [&search](const Request& req, Response& rsp) {
//        if (!req.has_param("word")) {
//            rsp.set_content("必须要有关键字才能搜索！", "text/plain;charset=utf-8");
//            return;
//        }
//        std::string word = req.get_param_value("word");
//        std::cout << "用户正在搜索： " << word << std::endl;
//        std::string json_string;
//        search.Search(word, &json_string);
//        rsp.set_content(json_string, "application/json");
//        });
//
//    // 登录接口（保持不变）
//    svr.Post("/login", [&](const Request& req, Response& rsp) {
//        Json::Value response;
//        Json::Reader reader;
//        try {
//            Json::Value data;
//            if (!reader.parse(req.body, data)) {
//                response["success"] = false;
//                response["message"] = "JSON 解析错误";
//                rsp.set_content(response.toStyledString(), "application/json");
//                return;
//            }
//            std::string username = data["username"].asString();
//            std::string password = data["password"].asString();
//            sql::PreparedStatement* pstmt = con->prepareStatement(
//                "SELECT * FROM users WHERE username = ? AND password = ?");
//            pstmt->setString(1, username);
//            pstmt->setString(2, password);
//            sql::ResultSet* result = pstmt->executeQuery();
//            if (result->next()) {
//                response["success"] = true;
//            }
//            else {
//                response["success"] = false;
//                response["message"] = "用户名或密码错误";
//            }
//            delete result;
//            delete pstmt;
//        }
//        catch (const std::exception& e) {
//            response["success"] = false;
//            response["message"] = "服务器错误";
//        }
//        Json::FastWriter writer;
//        rsp.set_content(writer.write(response), "application/json");
//        });
//
//    // 注册接口（保持不变）
//    svr.Post("/register", [&](const Request& req, Response& rsp) {
//        Json::Value response;
//        Json::Reader reader;
//        try {
//            Json::Value data;
//            if (!reader.parse(req.body, data)) {
//                response["success"] = false;
//                response["message"] = "JSON 解析错误";
//                rsp.set_content(response.toStyledString(), "application/json");
//                return;
//            }
//            std::string username = data["username"].asString();
//            std::string password = data["password"].asString();
//            sql::PreparedStatement* checkStmt = con->prepareStatement(
//                "SELECT * FROM users WHERE username = ?");
//            checkStmt->setString(1, username);
//            sql::ResultSet* result = checkStmt->executeQuery();
//            if (result->next()) {
//                response["success"] = false;
//                response["message"] = "用户名已存在";
//            }
//            else {
//                sql::PreparedStatement* insertStmt = con->prepareStatement(
//                    "INSERT INTO users (username, password) VALUES (?, ?)");
//                insertStmt->setString(1, username);
//                insertStmt->setString(2, password);
//                insertStmt->execute();
//                response["success"] = true;
//            }
//            delete result;
//            delete checkStmt;
//        }
//        catch (const std::exception& e) {
//            response["success"] = false;
//            response["message"] = "服务器错误";
//        }
//        Json::FastWriter writer;
//        rsp.set_content(writer.write(response), "application/json");
//        });
//
//    // 获取 lz_test 表所有数据的接口
//    svr.Get("/get_lz_test", [&](const Request& req, Response& rsp) {
//        Json::Value response;
//        Json::Value dataArray;
//
//        try {
//            sql::Statement* stmt = con->createStatement();
//            sql::ResultSet* result = stmt->executeQuery("SELECT * FROM lz_test");
//
//            while (result->next()) {
//                Json::Value item;
//                item["AlarmName"] = result->getString("AlarmName").asStdString();
//                item["DeviceId"] = result->getString("DeviceId").asStdString();
//                item["DeviceNumber"] = result->getInt("DeviceNumber");
//                item["Position"] = result->getString("Position").asStdString();
//                item["AlarmLevel"] = result->getString("AlarmLevel").asStdString();
//                item["AlarmClass"] = result->getString("AlarmClass").asStdString();
//                item["StateValue"] = result->getString("StateValue").asStdString();
//                item["AlarmImage"] = result->isNull("AlarmImage") ? Json::Value(Json::nullValue) : Json::Value(result->getString("AlarmImage").asStdString());
//                item["AlarmTime"] = result->getString("AlarmTime").asStdString();
//                item["ProductClass"] = result->getString("ProductClass").asStdString();
//                item["Confirm"] = result->getString("Confirm").asStdString();
//                dataArray.append(item);
//            }
//
//            response["success"] = true;
//            response["data"] = dataArray;
//
//            delete result;
//            delete stmt;
//        }
//        catch (const sql::SQLException& e) {
//            response["success"] = false;
//            response["message"] = "数据库查询失败: " + std::string(e.what());
//        }
//        catch (const std::exception& e) {
//            response["success"] = false;
//            response["message"] = "服务器错误: " + std::string(e.what());
//        }
//
//        Json::FastWriter writer;
//        rsp.set_content(writer.write(response), "application/json");
//        });
//
//    std::cout << "Server started at http://192.168.1.106:8083" << std::endl;
//    svr.listen("0.0.0.0", 8083);
//
//    delete stmt;
//    delete con;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
#include<iostream>
using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}
//class Date
//{
//public:
//	Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 以下测试函数能通过编译吗？
//void Test()
//{
//	Date d1;
//}
//class A
//{
//public:
//    A(int a)
//        :_a1(a)
//        , _a2(_a1)
//    {}
//
//    void Print() {
//        cout << _a1 << " " << _a2 << endl;
//    }
//private:
//    int _a2;
//    int _a1;
//};
//
//int main() {
//    A aa(1);
//    aa.Print();
//}

#pragma once

#include <iostream>
using namespace std;
#include <assert.h>

// 注意这里namespace大家下去就不要取名为bit了，否则被面试官看到问bit是啥就尴尬了
namespace bit
{
	template<class T>
	class vector
	{
	public:
		// Vector的迭代器是一个原生指针
		typedef T* iterator;
		typedef const T* const_iterator;

		///////////////////////////////////////////////////
		// 构造和销毁
		vector()
			: _start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{}

		vector(size_t n, const T& value = T())
			: _start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{
			reserve(n);
			while (n--)
			{
				push_back(value);
			}
		}

		/*
		* 理论上将，提供了vector(size_t n, const T& value = T())之后
		* vector(int n, const T& value = T())就不需要提供了，但是对于：
		* vector<int> v(10, 5);
		* 编译器在编译时，认为T已经被实例化为int，而10和5编译器会默认其为int类型
		* 就不会走vector(size_t n, const T& value = T())这个构造方法，
		* 最终选择的是：vector(InputIterator first, InputIterator last)
		* 因为编译器觉得区间构造两个参数类型一致，因此编译器就会将InputIterator实例化为int
		* 但是10和5根本不是一个区间，编译时就报错了
		* 故需要增加该构造方法
		*/
		vector(int n, const T& value = T())
			: _start(new T[n])
			, _finish(_start + n)
			, _endOfStorage(_finish)
		{
			for (int i = 0; i < n; ++i)
			{
				_start[i] = value;
			}
		}

		// 若使用iterator做迭代器，会导致初始化的迭代器区间[first,last)只能是vector的迭代器
		// 重新声明迭代器，迭代器区间[first,last)可以是任意容器的迭代器
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		vector(const vector<T>& v)
			: _start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{
			reserve(v.capacity());
			iterator it = begin();
			const_iterator vit = v.cbegin();
			while (vit != v.cend())
			{
				*it++ = *vit++;
			}
			_finish = it;
		}

		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endOfStorage = nullptr;
			}
		}

		/////////////////////////////////////////////////////
		// 迭代器相关
		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator cbegin() const
		{
			return _start;
		}

		const_iterator cend() const
		{
			return _finish;
		}

		//////////////////////////////////////////////////
		// 容量相关
		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _endOfStorage - _start;
		}

		bool empty() const
		{
			return _start == _finish;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t oldSize = size();
				// 1. 开辟新空间
				T* tmp = new T[n];

				// 2. 拷贝元素
				// 这里直接使用memcpy会有问题吗？同学们思考下
				//if (_start)
				//	memcpy(tmp, _start, sizeof(T)*size);

				if (_start)
				{
					for (size_t i = 0; i < oldSize; ++i)
						tmp[i] = _start[i];

					// 3. 释放旧空间
					delete[] _start;
				}

				_start = tmp;
				_finish = _start + oldSize;
				_endOfStorage = _start + n;
			}
		}

		void resize(size_t n, const T& value = T())
		{
			// 1.如果n小于当前的size，则数据个数缩小到n
			if (n <= size())
			{
				_finish = _start + n;
				return;
			}

			// 2.空间不够则增容
			if (n > capacity())
				reserve(n);

			// 3.将size扩大到n
			iterator it = _finish;
			_finish = _start + n;
			while (it != _finish)
			{
				*it = value;
				++it;
			}
		}

		///////////////////////////////////////////////////////////
		// 元素访问
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}

		T& front()
		{
			return *_start;
		}

		const T& front()const
		{
			return *_start;
		}

		T& back()
		{
			return *(_finish - 1);
		}

		const T& back()const
		{
			return *(_finish - 1);
		}
		/////////////////////////////////////////////////////
		// vector的修改操作
		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void pop_back()
		{
			erase(end() - 1);
		}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endOfStorage, v._endOfStorage);
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);

			// 空间不够先进行增容
			if (_finish == _endOfStorage)
			{
				//size_t size = size();
				size_t newCapacity = (0 == capacity()) ? 1 : capacity() * 2;
				reserve(newCapacity);

				// 如果发生了增容，需要重置pos
				pos = _start + size();
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}

			*pos = x;
			++_finish;
			return pos;
		}

		// 返回删除数据的下一个数据
		// 方便解决:一边遍历一边删除的迭代器失效问题
		iterator erase(iterator pos)
		{
			// 挪动数据进行删除
			iterator begin = pos + 1;
			while (begin != _finish) {
				*(begin - 1) = *begin;
				++begin;
			}

			--_finish;
			return pos;
		}
	private:
		iterator _start;		// 指向数据块的开始
		iterator _finish;		// 指向有效数据的尾
		iterator _endOfStorage;  // 指向存储容量的尾
	};
}

/// /////////////////////////////////
/// 对模拟实现的vector进行严格测试
void TestBitVector1()
{
	bit::vector<int> v1;
	bit::vector<int> v2(10, 5);

	int array[] = { 1,2,3,4,5 };
	bit::vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));

	bit::vector<int> v4(v3);

	for (size_t i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	auto it = v3.begin();
	while (it != v3.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v4)
	{
		cout << e << " ";
	}
	cout << endl;
}

void TestBitVector2()
{
	bit::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << v[0] << endl;
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.pop_back();
	v.pop_back();
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin(), 0);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.erase(v.begin() + 1);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//class Solution {
//public:
//	int subarraySum(vector<int>& nums, int k) {
//		unordered_map<int, int> mp;
//		mp[0] = 1;
//		int count = 0, pre = 0;
//		for (auto& x : nums) {
//			pre += x;
//			if (mp.find(pre - k) != mp.end()) {
//				count += mp[pre - k];
//			}
//			mp[pre]++;
//		}
//		return count;
//	}
//};

#include <iostream>
using namespace std;
#include <list>
#include <vector>


////////////////////////////////////////////////////////////
// list的构造
void TestList1()
{
	list<int> l1;                         // 构造空的l1
	list<int> l2(4, 100);                 // l2中放4个值为100的元素
	list<int> l3(l2.begin(), l2.end());  // 用l2的[begin(), end()）左闭右开的区间构造l3
	list<int> l4(l3);                    // 用l3拷贝构造l4

	// 以数组为迭代器区间构造l5
	int array[] = { 16,2,77,29 };
	list<int> l5(array, array + sizeof(array) / sizeof(int));

	// 列表格式初始化C++11
	list<int> l6{ 1,2,3,4,5 };

	// 用迭代器方式打印l5中的元素
	list<int>::iterator it = l5.begin();
	while (it != l5.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	// C++11范围for的方式遍历
	for (auto& e : l5)
		cout << e << " ";

	cout << endl;
}

////////////////////////////////////////////////////////////
// list迭代器的使用
// 注意：遍历链表只能用迭代器和范围for
void PrintList(const list<int>& l)
{
	// 注意这里调用的是list的 begin() const，返回list的const_iterator对象
	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
	{
		cout << *it << " ";
		// *it = 10; 编译不通过
	}

	cout << endl;
}

void TestList2()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
	// 使用正向迭代器正向list中的元素
	// list<int>::iterator it = l.begin();   // C++98中语法
	auto it = l.begin();                     // C++11之后推荐写法
	while (it != l.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	// 使用反向迭代器逆向打印list中的元素
	// list<int>::reverse_iterator rit = l.rbegin();
	auto rit = l.rbegin();
	while (rit != l.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

////////////////////////////////////////////////////////////
// list插入和删除
// push_back/pop_back/push_front/pop_front
void TestList3()
{
	int array[] = { 1, 2, 3 };
	list<int> L(array, array + sizeof(array) / sizeof(array[0]));

	// 在list的尾部插入4，头部插入0
	L.push_back(4);
	L.push_front(0);
	PrintList(L);

	// 删除list尾部节点和头部节点
	L.pop_back();
	L.pop_front();
	PrintList(L);
}

// insert /erase 
void TestList4()
{
	int array1[] = { 1, 2, 3 };
	list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));

	// 获取链表中第二个节点
	auto pos = ++L.begin();
	cout << *pos << endl;

	// 在pos前插入值为4的元素
	L.insert(pos, 4);
	PrintList(L);

	// 在pos前插入5个值为5的元素
	L.insert(pos, 5, 5);
	PrintList(L);

	// 在pos前插入[v.begin(), v.end)区间中的元素
	vector<int> v{ 7, 8, 9 };
	L.insert(pos, v.begin(), v.end());
	PrintList(L);

	// 删除pos位置上的元素
	L.erase(pos);
	PrintList(L);

	// 删除list中[begin, end)区间中的元素，即删除list中的所有元素
	L.erase(L.begin(), L.end());
	PrintList(L);
}

// resize/swap/clear
void TestList5()
{
	// 用数组来构造list
	int array1[] = { 1, 2, 3 };
	list<int> l1(array1, array1 + sizeof(array1) / sizeof(array1[0]));
	PrintList(l1);

	// 交换l1和l2中的元素
	list<int> l2;
	l1.swap(l2);
	PrintList(l1);
	PrintList(l2);

	// 将l2中的元素清空
	l2.clear();
	cout << l2.size() << endl;
}

//class Solution {
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		int fi = nums[0];
//		int maxfi = nums[0];
//		for (int i = 1; i < nums.size(); ++i)
//		{
//			fi = max(nums[i], nums[i] + fi);
//			maxfi = max(maxfi, fi);
//		}
//		return maxfi;
//	}
//};

//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>  // 提供 fork() 和 sleep() 函数
//#include <sys/wait.h>  // 提供 wait() 函数
//
//int main() {
//	pid_t pid;  // 用于存储进程 ID
//
//	// 创建子进程
//	pid = fork();
//
//	if (pid < 0) {
//		// fork() 失败
//		fprintf(stderr, "Fork failed\n");
//		exit(1);
//	}
//	else if (pid == 0) {
//		// 子进程
//		printf("Child process: PID = %d\n", getpid());
//		sleep(2);  // 模拟子进程执行任务
//		printf("Child process: Task completed, exiting...\n");
//		exit(0);  // 子进程正常终止
//	}
//	else {
//		// 父进程
//		printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
//		printf("Parent process: Waiting for child to finish...\n");
//
//		// 等待子进程结束
//		int status;
//		wait(&status);  // 阻塞等待子进程结束
//
//		if (WIFEXITED(status)) {
//			// 子进程正常终止
//			printf("Parent process: Child exited with status %d\n", WEXITSTATUS(status));
//		}
//		else {
//			// 子进程异常终止
//			printf("Parent process: Child process terminated abnormally\n");
//		}
//
//		printf("Parent process: Exiting...\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <fcntl.h>
//#include <unistd.h>
//
//int main() {
//	int fd;
//
//	// 创建或者打开一个新的文件 test.txt 进行写入操作
//	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
//	if (fd == -1) {
//		perror("open failed");
//		exit(EXIT_FAILURE);
//	}
//
//	// 将标准输出重定向到刚刚创建好的文件 descriptor 上去
//	if (dup2(fd, STDOUT_FILENO) == -1) {
//		perror("dup2 failed");
//		close(fd);
//		exit(EXIT_FAILURE);
//	}
//
//	// 关闭原来的文件句柄以防泄漏
//	close(fd);
//
//	printf("This message will be written to the file instead of terminal.\n");
//
//	return 0;
//}

//#include <iostream>
//#include <signal.h>
//#include <unistd.h>
//void hander(int sig)
//{
//	std::cout << "get a sig" << sig << std::endl;
//}
//int main()
//{
//	signal(2, hander);
//	while (true)
//	{
//		std::cout << "hello bit, pid: " << getpid() << std::endl;
//		sleep(1);
//	}
//}
//
//#include<iostream>
//#include<pthread.h>
//#include<stdio.h>
//#include<cstring>
//#include<string>
//#include<assert.h>
//#include<unistd.h>
//
//using namespace std;
//string changeId(const pthread_t& thread_id)
//{
//	char buf[64];
//	snprintf(buf, sizeof buf, "0x%x", thread_id);
//	return buf;
//}
//void* start_routine(void* args)
//{
//	string name = static_cast<const char*>(args);
//	pthread_detach(pthread_self());//设置自己为分离状态
//	int cnt = 5;
//	while (cnt--)
//	{
//		string tid = changeId(pthread_self());
//		cout << "我是新线程" << "线程名：" << name << " " << tid << endl;
//		sleep(1);
//	}
//	return nullptr;
//}
//int main()
//{
//	pthread_t tid;
//	pthread_create(&tid, nullptr, start_routine, (void*)"thread 1");
//	cout << "新线程id: " << changeId(tid) << endl;
//	//主线程id:
//	string id = changeId(pthread_self());
//	cout << "我是主线程" << "主线程id: " << id << endl;
//	//一个线程默认是joinable的，如果设置了分离状态，就不会再进行等待了
//	int wait = pthread_join(tid, nullptr);
//	cout << "result: " << wait << ": " << strerror(wait) << endl;
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//#include<pthread.h>
//#include<unistd.h>
//using namespace std;
//
//int tickets = 10000;
//pthread_mutex_t lock;
//void* getTickets(void* args)
//{
//	string use_name = static_cast<const char*>(args);
//	while (true)
//	{
//		//加锁：
//		pthread_mutex_lock(&lock);
//		if (tickets > 0)
//		{
//			usleep(1234);
//			cout << use_name << " 正在进行抢票 " << tickets-- << endl;
//			//解锁
//			pthread_mutex_unlock(&lock);
//		}
//		else
//		{
//			//解锁
//			pthread_mutex_unlock(&lock);
//			break;
//		}
//		//让该线程生成订单，其它线程再申请抢票
//		usleep(1234);
//	}
//}
//int main()
//{
//	//初始化锁
//	pthread_mutex_init(&lock, nullptr);
//	pthread_t t1, t2, t3, t4;
//	pthread_create(&t1, nullptr, getTickets, (void*)"thread 1");
//	pthread_create(&t2, nullptr, getTickets, (void*)"thread 2");
//	pthread_create(&t3, nullptr, getTickets, (void*)"thread 3");
//	pthread_create(&t4, nullptr, getTickets, (void*)"thread 4");
//
//	pthread_join(t1, nullptr);
//	pthread_join(t2, nullptr);
//	pthread_join(t3, nullptr);
//	pthread_join(t4, nullptr);
//	//销毁锁
//	pthread_mutex_destroy(&lock);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <pthread.h>
//#include <unistd.h>
//
//// 定义共享缓冲区和相关变量
//#define BUFFER_SIZE 5
//int buffer[BUFFER_SIZE];
//int count = 0; // 缓冲区中的数据个数
//
//// 互斥锁和条件变量
//pthread_mutex_t mutex;
//pthread_cond_t cond_full;  // 缓冲区满时的条件变量
//pthread_cond_t cond_empty; // 缓冲区空时的条件变量
//
//// 生产者函数
//void* producer(void* arg) {
//	int item = 0;
//	while (1) {
//		// 加锁
//		pthread_mutex_lock(&mutex);
//
//		// 如果缓冲区满，等待消费者消费
//		while (count == BUFFER_SIZE) {
//			printf("Producer: Buffer full, waiting...\n");
//			pthread_cond_wait(&cond_full, &mutex);
//		}
//
//		// 生产数据
//		buffer[count] = item;
//		printf("Producer: Produced item %d\n", item);
//		count++;
//		item++;
//
//		// 通知消费者缓冲区非空
//		if (count == 1) {
//			pthread_cond_signal(&cond_empty);
//		}
//
//		// 解锁
//		pthread_mutex_unlock(&mutex);
//
//		// 模拟生产耗时
//		sleep(1);
//	}
//	return NULL;
//}
//
//// 消费者函数
//void* consumer(void* arg) {
//	while (1) {
//		// 加锁
//		pthread_mutex_lock(&mutex);
//
//		// 如果缓冲区空，等待生产者生产
//		while (count == 0) {
//			printf("Consumer: Buffer empty, waiting...\n");
//			pthread_cond_wait(&cond_empty, &mutex);
//		}
//
//		// 消费数据
//		count--;
//		int item = buffer[count];
//		printf("Consumer: Consumed item %d\n", item);
//
//		// 通知生产者缓冲区非满
//		if (count == BUFFER_SIZE - 1) {
//			pthread_cond_signal(&cond_full);
//		}
//
//		// 解锁
//		pthread_mutex_unlock(&mutex);
//
//		// 模拟消费耗时
//		sleep(2);
//	}
//	return NULL;
//}
//
//int main() {
//	pthread_t prod_thread, cons_thread;
//
//	// 初始化互斥锁和条件变量
//	if (pthread_mutex_init(&mutex, NULL) != 0) {
//		perror("Mutex init failed");
//		exit(1);
//	}
//	if (pthread_cond_init(&cond_full, NULL) != 0) {
//		perror("Cond full init failed");
//		exit(1);
//	}
//	if (pthread_cond_init(&cond_empty, NULL) != 0) {
//		perror("Cond empty init failed");
//		exit(1);
//	}
//
//	// 创建生产者和消费者线程
//	if (pthread_create(&prod_thread, NULL, producer, NULL) != 0) {
//		perror("Producer thread creation failed");
//		exit(1);
//	}
//	if (pthread_create(&cons_thread, NULL, consumer, NULL) != 0) {
//		perror("Consumer thread creation failed");
//		exit(1);
//	}
//
//	// 主线程等待子线程结束（这里用无限循环模拟持续运行）
//	pthread_join(prod_thread, NULL);
//	pthread_join(cons_thread, NULL);
//
//	// 销毁互斥锁和条件变量（实际不会到达这里，因线程无限循环）
//	pthread_mutex_destroy(&mutex);
//	pthread_cond_destroy(&cond_full);
//	pthread_cond_destroy(&cond_empty);
//
//	return 0;
//}
//
//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <chrono>
//#include <array>
//
//// 定义共享缓冲区和相关变量
//const int BUFFER_SIZE = 5;
//std::array<int, BUFFER_SIZE> buffer;
//int count = 0; // 缓冲区中的数据个数
//
//// 互斥锁和条件变量
//std::mutex mtx;
//std::condition_variable cond_full;  // 缓冲区满时的条件变量
//std::condition_variable cond_empty; // 缓冲区空时的条件变量
//
//// 生产者函数
//void producer() {
//	int item = 0;
//	while (true) {
//		// 加锁
//		std::unique_lock<std::mutex> lock(mtx);
//
//		// 如果缓冲区满，等待消费者消费
//		while (count == BUFFER_SIZE) {
//			std::cout << "Producer: Buffer full, waiting...\n";
//			cond_full.wait(lock); // 等待缓冲区非满
//		}
//
//		// 生产数据
//		buffer[count] = item;
//		std::cout << "Producer: Produced item " << item << "\n";
//		count++;
//		item++;
//
//		// 通知消费者缓冲区非空
//		if (count == 1) {
//			cond_empty.notify_one();
//		}
//
//		// 解锁（unique_lock 析构时自动解锁）
//		lock.unlock();
//
//		// 模拟生产耗时
//		std::this_thread::sleep_for(std::chrono::seconds(1));
//	}
//}
//
//// 消费者函数
//void consumer() {
//	while (true) {
//		// 加锁
//		std::unique_lock<std::mutex> lock(mtx);
//
//		// 如果缓冲区空，等待生产者生产
//		while (count == 0) {
//			std::cout << "Consumer: Buffer empty, waiting...\n";
//			cond_empty.wait(lock); // 等待缓冲区非空
//		}
//
//		// 消费数据
//		count--;
//		int item = buffer[count];
//		std::cout << "Consumer: Consumed item " << item << "\n";
//
//		// 通知生产者缓冲区非满
//		if (count == BUFFER_SIZE - 1) {
//			cond_full.notify_one();
//		}
//
//		// 解锁
//		lock.unlock();
//
//		// 模拟消费耗时
//		std::this_thread::sleep_for(std::chrono::seconds(2));
//	}
//}
//
//int main() {
//	// 创建生产者和消费者线程
//	std::thread prod_thread(producer);
//	std::thread cons_thread(consumer);
//
//	// 主线程等待子线程结束
//	prod_thread.join();
//	cons_thread.join();
//
//	return 0;
//}
//#include <cassert>
//#include <iostream>
//using namespace std;
//
//bool Win(int* arr, string S, size_t lenth)
//{
//	int i = 0;
//	int row = arr[0];
//	int col = arr[1];
//	while (i < lenth)  // 使用 lenth 控制循环
//	{
//		char c = S[i];
//		if (c == 'W')
//			col = col + 1;
//		else if (c == 'A')
//			row = row - 1;
//		else if (c == 'S')
//			col = col - 1;
//		else if (c == 'D')
//			row = row + 1;  // 修正为 row + 1
//		i++;  // 更新 i
//	}
//	if (row == 0 && col == 0)
//		return true;
//	return false;
//}
//
//int main() {
//	int T;
//	cin >> T;
//	assert(T > 0);
//	for (int i = 0; i < T; i++)
//	{
//		int arr[2];
//		cin >> arr[0] >> arr[1];  // 读取初始位置
//		string S;
//		cin >> S;
//		int len = S.length();
//		bool flag = Win(arr, S, len);
//		if (flag)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;  // 修正输出逻辑
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 判断一个子串是否是回文
//bool isPalindrome(const string& s, int left, int right) {
//	while (left < right) {
//		if (s[left] != s[right]) {
//			return false;
//		}
//		left++;
//		right--;
//	}
//	return true;
//}
//
//// 计算一个字符串中回文子串的个数
//int countPalindromicSubstrings(const string& s) {
//	int n = s.length();
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			if (isPalindrome(s, i, j)) {
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main() {
//	int n;
//	cout << "请输入字符串的个数: ";
//	cin >> n;
//
//	if (n <= 0) {
//		cout << "字符串的个数必须大于 0！" << endl;
//		return 1; // 退出程序
//	}
//
//	vector<string> strings(n);
//	cout << "请输入 " << n << " 个字符串:" << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> strings[i];
//	}
//
//	cout << "每个字符串中回文子串的个数为:" << endl;
//	for (int i = 0; i < n; i++) {
//		int count = countPalindromicSubstrings(strings[i]);
//		cout << count << endl;
//	}
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void Print(vector<string>str)
//{
//	for (auto s : str)
//		cout << s << endl;
//}
//void Print(int arr[], int len)
//{
//	for (int i = 0; i < len; ++i)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int n = 0;
//	cout << "输入插入数组的长度:";
//	cin >> n;
//	int* arr = new int[n];
//	cout << "输入数组的数值:";
//	for (int i = 0; i < n; ++i)
//		cin >> arr[i];
//	int T = 0;
//	cout << "输入检测字符串的个数:";
//	cin >> T;
//	vector<string>str(T);
//	for (auto& s : str)
//	{
//		cin >> s;
//	}
//	cout << "输入的数组为：";
//	Print(arr, n);
//	cout << "输入的字符串为："<<endl;
//	Print(str);
//	return 0;
//}
//
//#ifndef __M_TP_H__
//#define __M_TP_H__
//#include <iostream>
//#include <queue>
//#include <pthread.h>
//#define MAX_THREAD 5
//typedef bool (*handler_t)(int);
//class ThreadTask
//{
//private:
//	int _data;
//	handler_t _handler;
//public:
//	ThreadTask() :_data(-1), _handler(NULL) {}
//	ThreadTask(int data, handler_t handler) {
//		_data = data;
//		_handler = handler;
//	}
//	void SetTask(int data, handler_t handler) {
//		_data = data;
//		_handler = handler;
//	}
//	void Run() {
//		_handler(_data);
//	}
//};
//class ThreadPool
//{
//private:
//	int _thread_max;
//	int _thread_cur;
//	bool _tp_quit;
//	std::queue<ThreadTask*> _task_queue;
//	pthread_mutex_t _lock;
//	pthread_cond_t _cond;
//private:
//	void LockQueue() {
//		pthread_mutex_lock(&_lock);
//	}
//	void UnLockQueue() {
//		pthread_mutex_unlock(&_lock);
//	}
//	void WakeUpOne() {
//		pthread_cond_signal(&_cond);
//	}
//	void WakeUpAll() {
//		pthread_cond_broadcast(&_cond);
//	}
//	void ThreadQuit() {
//		_thread_cur--;
//		UnLockQueue();
//		pthread_exit(NULL);
//	}
//	void ThreadWait() {
//		if (_tp_quit) {
//			ThreadQuit();
//		}
//		pthread_cond_wait(&_cond, &_lock);
//	}
//	bool IsEmpty() {
//		return _task_queue.empty();
//	}
//	static void* thr_start(void* arg) {
//		ThreadPool* tp = (ThreadPool*)arg;
//		while (1) {
//			tp->LockQueue();
//			while (tp->IsEmpty()) {
//				tp->ThreadWait();
//			}
//			ThreadTask* tt;
//			tp->PopTask(&tt);
//			tp->UnLockQueue();
//			tt->Run();
//			delete tt;
//		}
//		return NULL;
//	}
//public:
//	ThreadPool(int max = MAX_THREAD) :_thread_max(max), _thread_cur(max),
//		_tp_quit(false) {
//		pthread_mutex_init(&_lock, NULL);
//		pthread_cond_init(&_cond, NULL);
//	}
//	~ThreadPool() {
//		pthread_mutex_destroy(&_lock);
//		pthread_cond_destroy(&_cond);
//	}
//	bool PoolInit() {
//		pthread_t tid;
//		for (int i = 0; i < _thread_max; i++) {
//			int ret = pthread_create(&tid, NULL, thr_start, this);
//			if (ret != 0) {
//				std::cout << "create pool thread error\n";
//				return false;
//			}
//		}
//		return true;
//	}
//	bool PushTask(ThreadTask* tt) {
//		LockQueue();
//		if (_tp_quit) {
//			UnLockQueue();
//			return false;
//		}
//		_task_queue.push(tt);
//		WakeUpOne();
//		UnLockQueue();
//		return true;
//	}
//	bool PopTask(ThreadTask** tt) {
//		*tt = _task_queue.front();
//		_task_queue.pop();
//		return true;
//	}
//	bool PoolQuit() {
//		LockQueue();
//		_tp_quit = true;
//		UnLockQueue();
//		while (_thread_cur > 0) {
//			WakeUpAll();
//			usleep(1000);
//		}
//		return true;
//	}
//};
//#endif
///*main.cpp*/
//bool handler(int data)
//{
//	srand(time(NULL));
//	int n = rand() % 5;
//	printf("Thread: %p Run Tast: %d--sleep %d sec\n", pthread_self(), data, n);
//	sleep(n);
//	return true;
//}
//int main()
//{
//	int i;
//	ThreadPool pool;
//	pool.PoolInit();
//	for (i = 0; i < 10; i++) {
//		ThreadTask* tt = new ThreadTask(i, handler);
//		pool.PushTask(tt);
//	}
//	pool.PoolQuit();
//	return 0;
//}

//template <class T>
//void ShowList(const T& t)
//{
//	cout << t << endl;
//}
//// 展开函数
//template <class T, class ...Args>
//void ShowList(T value, Args... args)
//{
//	cout << value << " ";
//	ShowList(args...);
//}
//int main()
//{
//	ShowList(1);
//	ShowList(1, 'A');
//	ShowList(1, 'A', std::string("sort"));
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <utility>
//char* ptr = nullptr;
//void process(std::string&& s) {
//	std::cout << "Moved string: " << s << std::endl;
//	s = "vdsdhgaehra";
//	ptr = &s[0];
//	std::cout << ptr << endl;
//}

//int main() {
//	std::string str = "hello";
//	process("ffffff");
//	std::cout << "After move: " << str << std::endl; // str 可能为空
//	return 0;
//}