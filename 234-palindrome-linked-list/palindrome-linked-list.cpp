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
        stack<int>GD;
        ListNode* current = head;
        while(current != nullptr){
            GD.push(current->val);
            current = current->next;
        }
        current = head;
        while(!GD.empty()){
            int val = GD.top();
            GD.pop();
            if(current->val != val){
                return false;
            }
            current = current->next;
        }
        return true;
    }
};