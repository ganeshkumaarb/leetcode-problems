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
    int m;
    ListNode* temp;
    void tr(ListNode* slow,ListNode* fast){
        
        if (fast->next->next!=NULL) tr(slow->next,fast->next->next);
        else temp=slow->next;
        m=max(slow->val+temp->val,m);
        temp=temp->next;

    }
    int pairSum(ListNode* head) {
        m=head->val;
        tr(head,head);
        return m;
  
    }
};