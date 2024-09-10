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

    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL){
            return head;
        }
        ListNode* a = head;
        ListNode* b = head->next;

        while(b != NULL){
        ListNode* c = new ListNode(gcd(a->val,b->val));
        a->next = c;
        c->next = b;
        a = b;
        b = b->next;
        }
        return head;
    }
};