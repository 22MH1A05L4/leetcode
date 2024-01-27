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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_heap;
        for(int i=0;i<lists.size();++i){
            if(lists[i]) min_heap.push({lists[i]->val,i});
        }
        ListNode*dummy = new ListNode(0);
        ListNode*tail = dummy;
        while(!min_heap.empty()){
            auto[val,i] = min_heap.top();min_heap.pop();
            tail->next=lists[i];
            tail = tail->next;
            lists[i] = lists[i]->next;
            if(lists[i])
            min_heap.push({lists[i]->val,i});
        }
        return dummy->next;
    }
};