// https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null && fast.next != null){
            // move slow by one step and fast by 2 steps
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
}