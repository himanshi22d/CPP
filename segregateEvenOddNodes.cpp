class Solution{
    Node divide(int N, Node head){
        if (head == null || head.next == null)
            return head; // No modification needed if the list is empty or has only one node
        
        Node evenHead = null, evenTail = null;
        Node oddHead = null, oddTail = null;
        
        Node curr = head;
        
        while (curr != null) {
            if (curr.data % 2 == 0) { // Even node
                if (evenHead == null) {
                    evenHead = evenTail = curr;
                } else {
                    evenTail.next = curr;
                    evenTail = curr;
                }
            } else { // Odd node
                if (oddHead == null) {
                    oddHead = oddTail = curr;
                } else {
                    oddTail.next = curr;
                    oddTail = curr;
                }
            }
            curr = curr.next;
        }
        
        // Connect even and odd lists
        if (evenHead != null) {
            head = evenHead; // Update head to the new head of the list
            evenTail.next = oddHead; // Connect even list with odd list
        } else {
            head = oddHead; // If there are no even nodes, head will be the head of odd list
        }
        
        if (oddTail != null)
            oddTail.next = null; // Mark the end of the odd list
        
        return head;
    }
}
