class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle cases where the head might need to be removed
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // Move the fast pointer n+1 steps ahead
        for (int i = 0; i < n + 1; ++i) {
            fast = fast->next;
        }
        
        // Move both pointers until the fast pointer reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from the end
        slow->next = slow->next->next;
        
        return dummy->next; // Return the modified list
    }
};
