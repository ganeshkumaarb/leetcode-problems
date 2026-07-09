/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int find(struct ListNode* head){
    if (head ==NULL || head->next==NULL) return 0;
    return 1;
}
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    int n=10000;
    if (head==NULL) return false;
    if (find(fast)==0) return false;
    fast=fast->next;
    fast=fast->next;
    slow=slow->next;
    while (n){
        if (fast==slow)return true;
        if (find(fast)==0) return false;
        fast=fast->next;
        fast=fast->next;
        slow=slow->next;
        n--;
    }
    return false;
}