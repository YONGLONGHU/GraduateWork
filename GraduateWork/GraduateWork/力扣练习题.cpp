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
//��ת������
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
//// ����������ڵ�ṹ��
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
//    // �������������
//    void inorderTraversal(TreeNode* node, int k) {
//        if (node == nullptr) {
//            return;
//        }
//        // �ȵݹ����������
//        inorderTraversal(node->left, k);
//        count++;
//        // ����������kʱ��˵���ҵ��˵�kС��Ԫ�أ���¼����������
//        if (count == k) {
//            result = node->val;
//            return;
//        }
//        // �ٵݹ����������
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
//		//����
//		pthread_mutex_lock(&mutex);
//		if (pots == 0)
//		{
//			//��������
//			pthread_cond_wait(&cond, &mutex);
//		}
//		printf("begin eating\n");
//		pots = 0;
//		//����
//		pthread_mutex_unlock(&mutex);
//		//���Ѱ���
//		pthread_cond_signal(&cond);
//	}
//	return NULL;
//}
//void* canteen(void* arg)
//{
//	while (1)
//	{
//		//����
//		pthread_mutex_lock(&mutex);
//		if (pots == 1)
//		{
//			//����
//			pthread_cond_wait(&cond, &mutex);
//		}
//		printf("OK��\n");
//		pots = 1;
//		//����
//		pthread_mutex_unlock)(&mutex);
//		//����ѧ��
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
//    // ������������ n �� 1����ô���� 2 �� 0 ���ݣ����Է��� true��
//    if (n == 1) {
//        return true;
//    }
//    // ��� n ��ż�����ݹ�ؼ�� n/2 �Ƿ��� 2 ���ݴη���
//    else if (n % 2 == 0) {
//        return isPowerOfTwo(n / 2);
//    }
//    // ��� n ����������ô������ 2 ���ݴη������Է��� false��
//    else {
//        return false;
//    }
//}
//
//int main() {
//    int n;
//    std::cout << "������һ������: ";
//    std::cin >> n;
//    if (isPowerOfTwo(n)) {
//        std::cout << n << " �� 2 ���ݴη���" << std::endl;
//    }
//    else {
//        std::cout << n << " ���� 2 ���ݴη���" << std::endl;
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
//#include <algorithm> // ����std::swap����
//
//using namespace std;
//
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        bool swapped = false; // �Ż���־λ
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) break; // ����δ����˵��������
//    }
//}
//
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "ԭʼ����: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//
//    bubbleSort(arr, size);
//
//    cout << "\n���������: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//// ������iΪ��������Ϊ�󶥶�
//void heapify(int arr[], int n, int i) {
//    int largest = i;        // ��ʼ�����ֵΪ��ǰ�ڵ�
//    int left = 2 * i + 1;   // ���ӽڵ�����
//    int right = 2 * i + 2;  // ���ӽڵ�����
//
//    // ������ӽڵ�����Ҵ��ڵ�ǰ���ֵ
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    // ������ӽڵ�����Ҵ��ڵ�ǰ���ֵ
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    // ������ֵ���ǵ�ǰ�ڵ㣬��������������
//    if (largest != i) {
//        swap(arr[i], arr[largest]);
//        heapify(arr, n, largest);  // �ݹ������Ӱ�������
//    }
//}
//
//// �����󶥶�
//void buildHeap(int arr[], int n) {
//    // �����һ����Ҷ�ӽڵ㿪ʼ������n/2 - 1��
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//}
//
//// ������������
//void heapSort(int arr[], int n) {
//    // 1. ������ʼ�󶥶�
//    buildHeap(arr, n);
//
//    // 2. �����ȡ�Ѷ�Ԫ�أ����ֵ��
//    for (int i = n - 1; i > 0; i--) {
//        // ����ǰ�Ѷ��Ƶ�����ĩβ
//        swap(arr[0], arr[i]);
//
//        // ����ʣ��Ԫ��Ϊ�¶ѣ���С��1��
//        heapify(arr, i, 0);
//    }
//}
//
//// ��ӡ����
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
//    cout << "ԭʼ����: ";
//    printArray(arr, n);
//
//    heapSort(arr, n);
//
//    cout << "���������: ";
//    printArray(arr, n);
//
//    return 0;
//}
//#include <iostream>
//#include <thread>
//using namespace std;
//
//// �̺߳��������������Դ
//void printMessage(const string& msg) {
//    cout << "Thread: " << msg << endl; // ����cout��Դ
//}
//
//int main() {
//    // ���������̣߳�����ͬһ���̣�
//    thread t1(printMessage, "Hello");
//    thread t2(printMessage, "World");
//
//    // �ȴ��߳̽���
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
//    sem_wait(&sem);  // ��ȡ�ź���
//    printf("Thread is in the critical section.\n");
//    sem_post(&sem);  // �ͷ��ź���
//    return NULL;
//}
//
//int main() {
//    pthread_t threads[3];
//
//    sem_init(&sem, 0, 1);  // ��ʼ���ź�������ʼֵΪ 1����ʾһ����Դ
//
//    // ��������߳�
//    for (int i = 0; i < 3; i++) {
//        pthread_create(&threads[i], NULL, thread_function, NULL);
//    }
//
//    // �ȴ��߳̽���
//    for (int i = 0; i < 3; i++) {
//        pthread_join(threads[i], NULL);
//    }
//
//    sem_destroy(&sem);  // �����ź���
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
//    // ���������׽���
//    listen_fd = socket(AF_INET, SOCK_STREAM, 0);
//    if (listen_fd == -1) {
//        perror("socket");
//        exit(1);
//    }
//
//    // ���ü����׽���
//    struct sockaddr_in addr;
//    addr.sin_family = AF_INET;
//    addr.sin_addr.s_addr = INADDR_ANY;
//    addr.sin_port = htons(8080);
//    bind(listen_fd, (struct sockaddr*)&addr, sizeof(addr));
//    listen(listen_fd, 10);
//
//    // ���� epoll ʵ��
//    epoll_fd = epoll_create(1);
//    if (epoll_fd == -1) {
//        perror("epoll_create");
//        exit(1);
//    }
//
//    // �������׽�����ӵ� epoll ʵ����
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
//    signal(SIGINT, signal_handler);  // ���� SIGINT �ź�
//    while (1);  // �������У��ȴ��ź�
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
//    sigemptyset(&sa.sa_mask);  // ���ÿյ��źż�
//    sa.sa_flags = 0;  // Ĭ����Ϊ
//    sigaction(SIGINT, &sa, NULL);  // ���� SIGINT �ź�
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
//    // ���������׽���
//    listen_fd = socket(AF_INET, SOCK_STREAM, 0);
//    if (listen_fd == -1) {
//        perror("socket");
//        exit(1);
//    }
//
//    // ���ü����׽���
//    struct sockaddr_in addr;
//    addr.sin_family = AF_INET;
//    addr.sin_addr.s_addr = INADDR_ANY;
//    addr.sin_port = htons(8080);
//    bind(listen_fd, (struct sockaddr*)&addr, sizeof(addr));
//    listen(listen_fd, 10);
//
//    // ���� epoll ʵ��
//    epoll_fd = epoll_create(1);
//    if (epoll_fd == -1) {
//        perror("epoll_create");
//        exit(1);
//    }
//
//    // �������׽�����ӵ� epoll ʵ����
//    ev.events = EPOLLIN;
//    ev.data.fd = listen_fd;
//    if (ep
//#include <iostream>
//#include <set>
//
//int main() {
//    std::set<int> s = { 3, 1, 4, 1, 5 }; // �ظ�Ԫ�ػᱻ����
//    s.insert(2);
//    for (int x : s) {
//        std::cout << x << " "; // ��� "1 2 3 4 5"
//    }
//    return 0;
//}
//#include <iostream>
//#include <map>
//
//int main() {
//    std::map<std::string, int> m = { {"apple", 1}, {"banana", 2} };
//    m["orange"] = 3; // ������޸�
//    for (const auto& kv : m) {
//        std::cout << kv.first << ": " << kv.second << std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <set>
//
//int main() {
//    std::multiset<int> ms = { 3, 1, 4, 1, 5 }; // �����ظ�Ԫ��
//    ms.insert(2);
//    for (int x : ms) {
//        std::cout << x << " "; // ��� "1 1 2 3 4 5"
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
//    std::unordered_set<int> us = { 3, 1, 4, 1, 5 }; // �ظ�Ԫ�ػᱻ����
//    us.insert(2);
//    for (int x : us) {
//        std::cout << x << " "; // ���˳��ȷ��
//    }
//    return 0;
//}
//#include <iostream>
//#include <unordered_map>
//
//int main() {
//    std::unordered_map<std::string, int> um = { {"apple", 1}, {"banana", 2} };
//    um["orange"] = 3; // ������޸�
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
//            //1.����index����
//            index = ns_index::Index::GetInstance();
//            //2.��������
//            index->BuildIndex(input);
//        }
//        void Search(const std::string& query, std::string* json_string)
//        {
//            //1.��query���зִʴ���
//            std::vector<std::string> words;
//            ns_util::JiebaUtil::CutString(query, &words);
//            //2.���ݸ����ʣ�����index����
//            ns_index::InvertedList inverted_list_all;
//            for (std::string word : words)
//            {
//                boost::to_lower(word);
//                ns_index::InvertedList* inverted_list = index->GetInvertedList(word);
//                if (nullptr == inverted_list)
//                    continue;
//                inverted_list_all.insert(inverted_list_all.end(), inverted_list.begin(), inverted_list.end());
//            }
//            //3.���ܽ������������Խ�������
//            std::sort(inverted_list_all.begin(), inverted_list_all.end(), [](const ns_index::InvertedElem& e1, const ns_index::InvertedElem& e2) {
//                return e1.weight > e2.weight;
//                });
//            //4.���ݽ������json��
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
//            rsp.set_content("����Ҫ�йؼ��ֲ���������", "text/plain;charset=utf-8");
//            return;
//        }
//        std::string word = req.get_param_value("word");
//        std::cout << "�û����������� " << word << std::endl;
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
//    // MySQL ����
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
//    // �����û�����������ڣ�
//    sql::Statement* stmt = con->createStatement();
//    stmt->execute("CREATE TABLE IF NOT EXISTS users ("
//        "id INT AUTO_INCREMENT PRIMARY KEY,"
//        "username VARCHAR(50) UNIQUE NOT NULL,"
//        "password VARCHAR(50) NOT NULL)");
//
//    // �����ӿ�
//    svr.Get("/s", [&search](const Request& req, Response& rsp) {
//        if (!req.has_param("word")) {
//            rsp.set_content("����Ҫ�йؼ��ֲ���������", "text/plain;charset=utf-8");
//            return;
//        }
//        std::string word = req.get_param_value("word");
//        std::cout << "�û����������� " << word << std::endl;
//        std::string json_string;
//        search.Search(word, &json_string);
//        rsp.set_content(json_string, "application/json");
//        });
//
//    // ��¼�ӿڣ����ֲ��䣩
//    svr.Post("/login", [&](const Request& req, Response& rsp) {
//        Json::Value response;
//        Json::Reader reader;
//        try {
//            Json::Value data;
//            if (!reader.parse(req.body, data)) {
//                response["success"] = false;
//                response["message"] = "JSON ��������";
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
//                response["message"] = "�û������������";
//            }
//            delete result;
//            delete pstmt;
//        }
//        catch (const std::exception& e) {
//            response["success"] = false;
//            response["message"] = "����������";
//        }
//        Json::FastWriter writer;
//        rsp.set_content(writer.write(response), "application/json");
//        });
//
//    // ע��ӿڣ����ֲ��䣩
//    svr.Post("/register", [&](const Request& req, Response& rsp) {
//        Json::Value response;
//        Json::Reader reader;
//        try {
//            Json::Value data;
//            if (!reader.parse(req.body, data)) {
//                response["success"] = false;
//                response["message"] = "JSON ��������";
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
//                response["message"] = "�û����Ѵ���";
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
//            response["message"] = "����������";
//        }
//        Json::FastWriter writer;
//        rsp.set_content(writer.write(response), "application/json");
//        });
//
//    // ��ȡ lz_test ���������ݵĽӿ�
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
//            response["message"] = "���ݿ��ѯʧ��: " + std::string(e.what());
//        }
//        catch (const std::exception& e) {
//            response["success"] = false;
//            response["message"] = "����������: " + std::string(e.what());
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