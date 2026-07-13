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
    ListNode *temp , *Temp;

    void tryit(ListNode*head){
        Temp=head;
        if (head->next!=NULL){
            tryit(head->next);
            head->next->next=head;
            head->next=NULL;
        }
        else {
            temp=head;
            return ;
        }  
    }
    ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next== NULL ) return head;
        tryit(head);
        head=NULL;
        return temp;

    }
};