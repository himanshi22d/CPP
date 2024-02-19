class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Get lengths of both linked lists
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        // Move pointers equidistant from the intersection point
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }
        
        // Traverse both lists simultaneously until intersection point is found
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        
        // Return intersection point or nullptr if there's no intersection
        return headA;
    }
    
private:
    // Helper function to get the length of a linked list
    int getLength(ListNode *head) {
        int length = 0;
        while (head) {
            length++;
            head = head->next;
        }
        return length;
    }
};
