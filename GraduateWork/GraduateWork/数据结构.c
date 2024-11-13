#include<stdio.h>
//#define N 7
//typedef int SLDataType;
////��̬˳���
//typedef struct SeqList
//{
//	SLDataType array[N];
//	size_t size;
//}SeqList;
////��̬˳���
//typedef struct Seqlist
//{
//	SLDataType* array;
//	size_t size;
//	size_t capacity;
//}Seqlist;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
//    {
//        if (headA == nullptr || headB == nullptr)
//            return nullptr;
//        ListNode* pA = headA, * pB = headB;
//        while (pA != pB)
//        {
//            pA = pA == nullptr ? headB : pA->next;
//            pB = pB == nullptr ? headA : pB->next;
//        }
//        return pA;
//    }
//};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//    bool isPalindrome(ListNode* head)
//    {
//        vector<int> temp;
//        while (head != nullptr)
//        {
//            temp.emplace_back(head->val);
//            head = head->next;
//        }
//        for (int i = 0, j = temp.size() - 1; i < j; i++, j--)
//        {
//            if (temp[i] != temp[j])
//                return false;
//        }
//        return true;
//    }
//};

//typedef int STDataType;
//#define N 10
//typedef struct Stack
//{
//	STDataType _a[N];
//	int _top;
//}Stack;

//typedef int DataType;
//typedef struct Stack
//{
//	DataType* _a;
//	int _top;
//	int _capacity;
//}Stack;
//typedef int QDatatype;
//typedef struct QListNode
//{
//	QDatatype _data;
//	struct QListNode* _pNext;
//}QNode;
//typedef struct Queue
//{
//	QNode* _front;
//	QNode* _rear;
//}Queue;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
//    {
//        ListNode* start = new ListNode(-1);
//        ListNode* pre = start;
//        while (list1 != nullptr && list2 != nullptr)
//        {
//            if (list1->val > list2->val)
//            {
//                pre->next = list2;
//                list2 = list2->next;
//            }
//            else
//            {
//                pre->next = list1;
//                list1 = list1->next;
//            }
//            pre = pre->next;
//        }
//        if (list1 == nullptr)
//            pre->next = list2;
//        if (list2 == nullptr)
//            pre->next = list1;
//        return start->next;
//    }
//};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n)
//    {
//        int count = 0;
//        ListNode* cur = head;
//        if (head == nullptr) return head;
//        while (cur != nullptr)
//        {
//            cur = cur->next;
//            count++;
//        }
//        if (n == count)
//        {
//            ListNode* cur = head;
//            head = cur->next;
//            delete cur;
//            return head;
//        }
//        ListNode* cur1 = head;
//        for (int i = 1; i < count - n; i++)
//            cur1 = cur1->next;
//        ListNode* cur2 = cur1->next;
//        if (cur1 && cur2)
//        {
//            cur1->next = cur2->next;
//            delete cur2;
//        }
//        if (cur2 == nullptr)
//        {
//            head = nullptr;
//            delete cur2;
//        }
//        return head;
//    }
//};

//class Solution {
//public:
//    int maxProfit(vector<int>& prices)
//    {
//        int profit = 0;
//        int passtemp = prices[0];
//        for (int buy = 0; buy < prices.size() - 1; buy++)
//        {
//            if (passtemp < prices[buy]) continue;
//            int perprofit = 0;
//            for (int sole = buy + 1; sole < prices.size(); sole++)
//            {
//                if (prices[buy] >= prices[sole]) continue;
//                else {
//                    perprofit = prices[sole] - prices[buy];
//                    profit = max(perprofit, profit);
//                }
//            }
//            passtemp = min(passtemp, prices[buy]);
//        }
//        return profit;
//    }
//};
//class Solution {
//public:
//    bool canJump(vector<int>& nums)
//    {
//        int length = nums.size();
//        int maxlength = 0;
//        for (int i = 0; i < length; ++i)
//        {
//            if (i <= maxlength)
//            {
//                maxlength = max(maxlength, i + nums[i]);
//                if (maxlength >= length - 1)
//                    return true;
//            }
//        }
//        return false;
//    }
//};
//class Solution {
//public:
//    int findDuplicate(vector<int>& nums)
//    {
//        int length = nums.size();
//        for (int i = 0; i < length - 1; i++)
//        {
//            for (int j = i + 1; j < length; j++)
//            {
//                if (nums[i] == nums[j])
//                    return nums[i];
//            }
//        }
//        return nums[length - 1];
//    }
//};
//class Solution {
//public:
//    int findDuplicate(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        for (int i = 0, j = 1; i < nums.size() - 1; i++, ++j)
//        {
//            if (nums[i] == nums[j]) return nums[j];
//        }
//        return nums[0];
//    }
//};
//class Solution {
//public:
//    int maxArea(vector<int>& height)
//    {
//        int left = 0;
//        int right = height.size() - 1;
//        int result = 0;
//        while (left < right)
//        {
//            int sum = min(height[right], height[left]) * (right - left);
//            result = max(sum, result);
//            if (height[left] < height[right])
//                left++;
//            else
//                right--;
//        }
//        return result;
//    }
//};

//#pragma once
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <cassert>
//#include <string>
//
//#include <unistd.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <arpa/inet.h>
//typedef struct sockaddr sockaddr;
//typedef struct sockaddr_in sockaddr_in;
//
//class UdpSocket {
//public:
//	UdpSocket() : fd_(-1) {
//	}
//	bool Socket() {
//		fd_ = socket(AF_INET, SOCK_DGRAM, 0);
//		if (fd_ < 0) {
//			perror("socket");
//			return false;
//		}
//		return true;
//	}
//
//	bool Close() {
//		close(fd_);
//		return true;
//	}
//
//	bool Bind(const std::string& ip, uint16_t port) {
//		sockaddr_in addr;
//		addr.sin_family = AF_INET;
//		addr.sin_addr.s_addr = inet_addr(ip.c_str());
//		addr.sin_port = htons(port);
//		int ret = bind(fd_, (sockaddr*)&addr, sizeof(addr));
//		if (ret < 0) {
//			perror("bind");
//			return false;
//		}
//		return true;
//	}
//	bool RecvFrom(std::string* buf, std::string* ip = NULL, uint16_t* port = NULL) {
//		char tmp[1024 * 10] = { 0 };
//		sockaddr_in peer;
//		socklen_t len = sizeof(peer);
//		ssize_t read_size = recvfrom(fd_, tmp,
//			sizeof(tmp) - 1, 0, (sockaddr*)&peer, &len);
//		if (read_size < 0) {
//			perror("recvfrom");
//			return false;
//		}
//		// �������Ļ��������ݷŵ����������
//		buf->assign(tmp, read_size);
//		if (ip != NULL) {
//			*ip = inet_ntoa(peer.sin_addr);
//		}
//		if (port != NULL) {
//			*port = ntohs(peer.sin_port);
//		}
//		return true;
//	}
//typedef int Datatype;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* _pLeft;
//	struct BinaryTreeNode* _pRight;
//	Datatype _data;
//}BinaryTreeNode;

//typedef int Datatype;
//typedef struct Heap
//{
//	Datatype* _a;
//	int _size;
//	int _capacity;
//}Heap;
//// �ѵĹ���
//void HeapCreate(Heap* hp, Datatype* a, int n);
//// �ѵ�����
//void HeapDestory(Heap* hp);
//// �ѵĲ���
//void HeapPush(Heap* hp, Datatype x);
//// �ѵ�ɾ��
//void HeapPop(Heap* hp);
//// ȡ�Ѷ�������
//Datatype HeapTop(Heap* hp);
//// �ѵ����ݸ���
//int HeapSize(Heap* hp);
//// �ѵ��п�
//int HeapEmpty(Heap* hp);
//#include <iostream>
//#include <vector>
//#include <stack>
//
//// ����������ڵ�ṹ
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//// ��������ķǵݹ�ʵ��
//std::vector<int> inorderTraversal(TreeNode* root) {
//    std::vector<int> result;
//    std::stack<TreeNode*> stack;
//    TreeNode* current = root;
//
//    while (current != nullptr || !stack.empty()) {
//        while (current != nullptr) {
//            stack.push(current);
//            current = current->left;
//        }
//        current = stack.top();
//        stack.pop();
//        result.push_back(current->val);
//        current = current->right;
//    }
//    return result;
//}
//
//int main() {
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(5);
//
//    std::vector<int> result = inorderTraversal(root);
//    for (int val : result) {
//        std::cout << val << " ";
//    }
//    // ���: 4 2 5 1 3
//    return 0;
//}
//#include <iostream>
//#include <vector>
//
//// ð��������
//void bubbleSort(std::vector<int>& arr) {
//    bool swapped = true;
//    int n = arr.size();
//    while (swapped) {
//        swapped = false;
//        for (int i = 1; i < n; i++) {
//            if (arr[i - 1] > arr[i]) {
//                // ���� arr[i - 1] �� arr[i]
//                std::swap(arr[i - 1], arr[i]);
//                swapped = true;
//            }
//        }
//        // ÿ�α���������Ԫ�ػᱻ�ŵ�������ÿ�μ��ٱȽϵķ�Χ
//        n--;
//    }
//}
//
//// ���ڴ�ӡ����ĺ���
//void printArray(const std::vector<int>& arr) {
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//}
//
//// ������
//int main() {
//    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
//    std::cout << "Original array: ";
//    printArray(arr);
//
//    bubbleSort(arr);
//
//    std::cout << "Sorted array: ";
//    printArray(arr);
//
//    return 0;
//}
//#include <stdio.h>
//
//// ð��������
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        // ǰ���趨û�з�������
//        int swapped = 0;
//        // ���i��Ԫ���Ѿ����ź�����ˣ�����Ҫ�ٱȽ�
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                // ���� arr[j] �� arr[j + 1]
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//                swapped = 1;
//            }
//        }
//        // �����һ�α�����û�н����������������Ѿ�����ã�������ǰ�˳�
//        if (swapped == 0)
//            break;
//    }
//}
//
//// ���ڴ�ӡ����ĺ���
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//// ������
//int main() {
//    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    printf("Original array: ");
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    printf("Sorted array: ");
//    printArray(arr, n);
//
//    return 0;
//}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//class Solution {
//public:
//    int cal_meter(TreeNode* root, int& diameter)
//    {
//        if (root == nullptr)
//            return 0;
//        int leftheight = cal_meter(root->left, diameter);
//        int rightheight = cal_meter(root->right, diameter);
//        diameter = max(diameter, leftheight + rightheight);
//        return max(leftheight, rightheight) + 1;
//    }
//    int diameterOfBinaryTree(TreeNode* root) {
//        int diameter = 0;
//        cal_meter(root, diameter);
//        return diameter;
//    }
//};
//class Solution {
//public:
//    void setZeroes(vector<vector<int>>& matrix)
//    {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        vector<int> row(m), col(n);
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (matrix[i][j] == 0)
//                    row[i] = col[j] = true;
//            }
//        }
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (row[i] || col[j])
//                    matrix[i][j] = 0;
//            }
//        }
//    }
//};

