class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next)
            return;

        // Find the middle by moving fast & slow iterators
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
…            p1 = temp1;
            p2 = temp2;
        }
    }
};
