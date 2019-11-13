#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
        int val;
        ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre,*p,*temp;
        if(head == NULL)
            return head;
        pre = head;
        p = head->next;
        head->next = NULL;
        while(p != NULL)
        {
            temp = p->next;
            p->next = pre;
            pre = p;
            p = temp;
        }
        return pre;
    }
};