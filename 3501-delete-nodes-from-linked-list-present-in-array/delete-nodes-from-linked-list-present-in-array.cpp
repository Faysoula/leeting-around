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
        set<int> num(nums.begin(), nums.end());

        ListNode* dum = new ListNode();
        dum->next = head;
        ListNode* prev = dum;
        ListNode* curr = head;


        while(curr != NULL){
            if(num.find(curr->val) != num.end()){
                prev->next = curr->next;
                curr = prev->next;
            }else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return dum->next;
    }
};