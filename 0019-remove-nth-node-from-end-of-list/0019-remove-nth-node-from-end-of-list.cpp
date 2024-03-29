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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){return NULL;};
        if(n<0){return NULL;};
        ListNode* temp = head;
        for(int i = 0 ; i<n;i++){
            temp = temp->next;
        }
        if(temp == NULL){
            return head->next;
        }

        ListNode* slow = head;
        while(temp->next != NULL){
            temp = temp->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};