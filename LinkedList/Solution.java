package LinkedList;
public class Solution {
    public int calculateLength(ListNode head){
        int counter = 0;
        ListNode temp = head;
        while(temp != null){
            counter++;
            temp = temp.next;
        }
        return counter;
    }
    public ListNode middleNode(ListNode head) {
        int length = calculateLength(head);
        int middle_pos = (length / 2) + 1;

        ListNode temp = head;
        int counter = 1;
        while(temp != null && counter < middle_pos){
            temp = temp.next;
            counter++;
        }
        return temp;
    }
} {
    
}
