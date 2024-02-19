class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // Detect cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            // If there is a cycle
            if (slow == fast) {
                // Reset one pointer to head
                slow = head;

                // Move both pointers until they meet again
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                // Return the starting node of the cycle
                return slow;
            }
        }

        // No cycle found
        return nullptr;
    }
};
