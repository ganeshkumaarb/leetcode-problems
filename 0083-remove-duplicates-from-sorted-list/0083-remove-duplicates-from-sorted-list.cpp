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
    ListNode* deleteDuplicates(ListNode* head) {

        if (head==NULL || head->next==NULL) return head;
        ListNode* temp1=head , *temp2=head->next;
        
        while (temp2->next!=NULL){
            if (temp1->val==temp2->val) temp2=temp2->next;
            else {
                temp1->next=temp2;
                temp1=temp2;
                temp2=temp2->next;
            }
        }
        if (temp1->val==temp2->val) temp1->next=NULL;
        else{
            temp1->next=temp2;
        }
        return head;
}
};