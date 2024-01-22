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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        while(temp != NULL){
            ListNode* x = new ListNode(temp->val);
            if(dummy->next == NULL){
                dummy->next = x;
            }
            else{
                x->next = dummy->next;
                dummy->next = x;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};