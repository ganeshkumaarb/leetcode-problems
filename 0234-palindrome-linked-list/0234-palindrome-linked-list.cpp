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
    ListNode* temp;
    bool ch=true;
    void tr(ListNode* slow,ListNode* fast){
        
        if (fast->next!=NULL && fast->next->next!=NULL) tr(slow->next,fast->next->next);
        else if (fast->next==NULL) 
        {
            temp=slow->next;
            return ;
        }
        else {
            temp=slow->next;
        }
        if (ch==false) return ;
        if (temp->val!=slow->val) ch=false;
        temp=temp->next;
    }
    bool isPalindrome(ListNode* head) {
        tr(head,head);
        return ch;
    }
};