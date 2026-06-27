// https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
class Solution {
    int calculateLength(Node* head){
        int counter = 0;
        Node* temp = head;
        while(temp != nullptr){
            counter++;
            temp = temp -> next;
        }
        return counter;
    }
    
    int getIthFromStart(Node* head, int pos){
        int counter = 1;
        Node* temp = head;
        while(temp != nullptr){
            if(counter == pos) return temp -> data;
            counter++;
            temp = temp -> next;
        }
        return -1;
    }
  public:
    int getKthFromLast(Node* head, int k) {
        // calculate length of the linked list
        int length = calculateLength(head);
        int pos = length - k + 1; // position of ith node from beginning
        
        int output = getIthFromStart(head, pos);
        return output;
    }
};