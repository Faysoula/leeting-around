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
    ListNode* reverse(ListNode* head){
       ListNode* curr = head;
       ListNode* prev = NULL;
       while(curr != NULL){
           ListNode* furth = curr->next;
           curr->next = prev;
           prev = curr;
           curr = furth;
       }
       return prev;
    }


    void reorderList(ListNode* head) {
        if(head == NULL){return;}
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* nHead = reverse(slow->next);
        slow->next=NULL;
        ListNode* newCurr = head;

        while(nHead!= NULL){
            ListNode* temppt = newCurr->next;
            ListNode* temppt2 = nHead->next;

            newCurr->next = nHead;
            nHead->next = temppt;
            nHead = temppt2;
            newCurr = temppt;
        }
    }    
};