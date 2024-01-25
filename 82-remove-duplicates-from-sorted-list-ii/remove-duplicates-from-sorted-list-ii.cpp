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
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            bool flag = false;

            while (curr->next != nullptr && curr->val == curr->next->val) {
                curr = curr->next;
                flag = true;
            }

            if (flag == true) 
                prev->next = curr->next;
            else 
                prev = prev->next;

            curr = curr->next;
        }

        head = dummy->next;
        delete dummy;
        return head;
    }
};
