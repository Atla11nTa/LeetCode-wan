#include <vector>
#include <bits/stdc++.h>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *newList,*p;
        int sum = l1->val + l2->val;
        int num = sum%10;
        int flag = sum/10;
        newList = new ListNode(num);
        p = newList;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 != NULL &&l2 != NULL)
        {
            sum = l1->val + l2->val + flag;
            num = sum%10;
            flag = sum/10;
            p->next = new ListNode(num);
            p = p->next;
            l1= l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL)
        {
            sum = l1->val + flag;
            num = sum%10;
            flag = sum/10;
            p->next = new ListNode(num);
            p = p->next;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            sum = l2->val + flag;
            num = sum%10;
            flag = sum/10;
            p->next = new ListNode(num);
            p = p->next;
            l2 = l2->next;
        }
        if(flag != 0)
        {
            p->next = new ListNode(flag);
        }
        return newList;
    }
};