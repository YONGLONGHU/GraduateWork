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