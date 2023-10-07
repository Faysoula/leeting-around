//faster solution
/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    private:
        ListNode* floydDetect(ListNode *head)
        {
            if (head == NULL)
            {
                return NULL;
            }
            ListNode *fast = head;
            ListNode *slow = head;

            while (slow != NULL && fast != NULL)
            {
                fast = fast->next;
                if (fast != NULL)
                {
                    fast = fast->next;
                }
                slow = slow->next;

                if (slow == fast)
                {
                    return slow;
                }
            }
            return NULL;
        }

    public:
        ListNode* detectCycle(ListNode *head)
        {
            if (head == NULL)
            {
                return NULL;
            }
            ListNode *intersect = floydDetect(head);
            ListNode *slow = head;

            while (slow != intersect)
            {
                slow = slow->next;

                if (intersect != NULL)
                {
                    intersect = intersect->next;
                }
            }
                return slow;
        }
};
