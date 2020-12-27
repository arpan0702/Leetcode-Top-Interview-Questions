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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        int c=0;
        ListNode* node=head;
        while(node!=NULL)
        {
            c++;
            node=node->next;
        }
        vector<int> v;
        int x=c/2;
        int z=x;
        node=head;
        ListNode* temp=head;
        while(z>0)
        {
            z--;
            v.push_back(node->val);
            node=node->next;
        }
        if(c%2==0)
            temp=node;
        else
            temp=node->next;
        int i=0;
        //cout<<x<<z<<endl;
        //for(auto zz:v)
            //cout<<zz<<endl;
        reverse(v.begin(),v.end());
        while(temp!=NULL)
        {
            //cout<<"YO!";
            if(v[i]!=temp->val)
                return false;
            i++;
            temp=temp->next;
        }
        return true;
    }
};
