/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        ListNode* res = NULL;
        ListNode* temp = NULL;
        ListNode* prev = NULL;
        int carry = 0, sum;

        while (first != NULL || second != NULL) {
            sum = carry + (first ? first->val : 0) + (second ? second->val : 0);
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;
            temp = new ListNode(sum);

            if (res == NULL)
                res = temp;
            else
                prev->next = temp;

            prev = temp;

            if (first)
                first = first->next;
            if (second)
                second = second->next;
        }

        if (carry > 0)
            temp->next = new ListNode(carry);

        return res;
    }
};
