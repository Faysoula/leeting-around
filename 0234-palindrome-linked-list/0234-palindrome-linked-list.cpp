/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        bool isPalindrome(ListNode *head) {
            ListNode* otherlist =  reverseAndClone(head);
            return (isequal(otherlist,head));
        }

    ListNode* reverseAndClone(ListNode *original)
    {
        ListNode *chead = NULL;
        while (original != NULL)
        {
            ListNode *nNode = new(nothrow) ListNode(original->val);
            nNode->next = chead;
            chead = nNode;
            original = original->next;
        }
        return chead;
    }

    bool isequal(ListNode *first, ListNode *sec){
        while(first -> next != NULL && sec -> next != NULL){
            if(first->val != sec->val){
                return false;
            }
            first = first-> next;
            sec = sec-> next;
        }
        return true;
    }
};