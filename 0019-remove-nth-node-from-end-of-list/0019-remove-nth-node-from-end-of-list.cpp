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
        ListNode* k = new ListNode(0);
        k->next = head;

        ListNode* fast = k;
        ListNode* slow = k;

        for(int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return k->next;
    }
};