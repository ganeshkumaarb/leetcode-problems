/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> mp;
        while (headA->next!=NULL){
            mp[headA]++;
            headA=headA->next;
        }
        mp[headA]++;
        if(mp[headB]) return headB;
        while (headB->next!=NULL){
            if (mp[headB->next]) return headB->next;
            headB=headB->next;
        }
        return NULL;
    }
};