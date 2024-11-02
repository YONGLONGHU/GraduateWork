#include<stdio.h>
//#define N 7
//typedef int SLDataType;
////¾²Ì¬Ë³Ðò±í
//typedef struct SeqList
//{
//	SLDataType array[N];
//	size_t size;
//}SeqList;
////¶¯Ì¬Ë³Ðò±í
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

