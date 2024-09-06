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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
    unordered_set<int>set;
    for(auto a : nums){
        set.insert(a);
    }
    ListNode dummy(0);
    dummy.next = head;
    
    ListNode *curr=head; 
    ListNode *prev=&dummy; 
    
    while(curr != nullptr){
        if(set.find(curr->val) != set.end()){ 
            prev->next = curr->next; 
            delete(curr); 
            curr=prev->next;
        }else{
            prev=curr;
            curr=curr->next;
        }
    }
    return dummy.next;
    }
};