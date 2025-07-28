class Solution {
public:
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
        ListNode* p = List1;
        ListNode* q = List2;
        ListNode* res = new ListNode(0);
        ListNode* h3 = res;

        while (p != nullptr && q != nullptr) {
            if (p->val < q->val){
                h3->next = new ListNode(p->val);
                p = p->next;
            }
            else if (q->val < p->val){
                h3->next = new ListNode(q->val);
                q = q->next;
            }
            else {
                h3->next = new ListNode(p->val);
                p = p->next;
            }
            h3 = h3->next;
        }

        while (p != nullptr) {
            h3->next = new ListNode(p->val);
            p = p->next;
            h3 = h3->next;
        }

        while (q != nullptr) {
            h3->next = new ListNode(q->val);
            q = q->next;
            h3 = h3->next;
        }

        return res->next;
    }
};
