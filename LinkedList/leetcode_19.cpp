/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  https://leetcode.com/problems/remove-nth-node-from-end-of-list/
class Solution {
    int calculateLength(ListNode* head){
        ListNode* temp = head;
        int counter = 0;
        while(temp != NULL){
            counter++;
            temp = temp -> next;
        }
        return counter;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        // move fast by n steps
        // let say n == length of linked list
        // In this case, fast will reach to NULL, so return head -> next
       
        // move the fast first by n steps
        for(int i = 0; i < n; ++i){
            fast = fast -> next;
        }
        if(fast == NULL){
            return head -> next;
        }
    //    if(fast -> next == NULL){
    //     cout << "NULL"  << endl;
    //    }
        // move slow and fast by 1step together
        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        // Once the while loop ends, slow will point to node prior to target Node
        if(slow == NULL || slow -> next == NULL) return head;
        ListNode* deleteNode = slow -> next;
        slow -> next = deleteNode -> next;
        delete deleteNode;

        return head;
    }
};