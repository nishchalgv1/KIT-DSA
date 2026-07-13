package LinkedList;
// gfg problem
// https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

  /* Node Structure
class Node {
    int data;
    Node next;
    Node(int x) {
        data = x;
        next = null;
    }
} */

class Solution {
    public int calculateLength(Node head){
        int counter = 0;
        Node temp = head;
        while(temp != null){
            counter++;
            temp = temp.next;
        }
        return counter;
    }
    public int getIthFromStart(Node head, int pos){
        int counter = 1;
        Node temp = head;
        while(temp != null){
            if(counter == pos) return temp.data;
            counter++;
            temp = temp.next;
        }
        return -1;
    }
    public int getKthFromLast(Node head, int k) {
        int length = calculateLength(head);
        int pos = length - k + 1; // position of ith node from beginning
        
        int output = getIthFromStart(head, pos);
        return output;
    }
}