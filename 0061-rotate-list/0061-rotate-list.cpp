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
    int count(ListNode* head){
        int i=1;
        while (head->next!=NULL){
            head=head->next;
            i++;
        }
        return i;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL || head->next==NULL) return head;
        int cout=count(head);
        k=k%cout;
        k=cout-k -1;
        ListNode *temp=head ,*temp2=head, *temph;
        while (k--){
            temp=temp->next;
        }
        temph=temp->next;
        temp->next=NULL;
        head=temph;
        while (temph!=NULL && temph->next!=NULL){
            temph=temph->next;
        }
        if (temph!=NULL )temph->next=temp2;
        if (head!=NULL) return head;
        return temp2;

    }
};