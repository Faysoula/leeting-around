/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteDuplicates(ListNode *head)
        {
            if (head == NULL)
            {
                return head;
            }
            ListNode *prev = head;
            ListNode *curr;
            if (head->next != NULL)
            {
                curr = head->next;
            }
            int dup = head->val;

            while (curr != NULL)
            {
                if (curr->val == dup)
                {
                    prev->next = curr->next;
                }
                else
                {
                    prev = curr;
                    dup = curr->val;
                }
                curr = curr->next;
            }
            return head;
        }
};