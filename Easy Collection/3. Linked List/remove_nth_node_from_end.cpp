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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* node=head;
        while(node!=NULL)
        {
            node=node->next;
            c++;
        }
        if(c==1)
            return NULL;
        int x=c-n;
        if(x==0)
        {
            head=head->next;
            return head;
        }
        node=head;
        while(x-1>0)
        {
            node=node->next;
            x--;
        }
        node->next=node->next->next;
        return head;
    }
};
