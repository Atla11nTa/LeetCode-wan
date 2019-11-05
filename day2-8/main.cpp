#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        auto *dump = new ListNode(0);
        dump->next = head;
        ListNode *p = dump;
        while(p->next!=NULL)
        {
            if(p->next->val == val)
            {
                ListNode *temp = p->next;
                p->next = p->next->next;
                delete temp;
                continue;
            }else{
                p = p->next;
            }
        }
        return dump->next;
    }
};