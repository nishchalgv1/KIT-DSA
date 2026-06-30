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
//  https://leetcode.com/problems/remove-nth-node-from-end-of-list
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < n; i++){
            fast = fast -> next;
        }
        
        if(fast == NULL){
            ListNode* temp = head;
            head = head -> next;
            delete temp;
            return head;
        }

        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        // slow will point at node before target node
        // slow is null or slow -> next == null
        if(slow != NULL && slow -> next != NULL){
            ListNode* nodeToDelete = slow -> next;
            slow -> next = nodeToDelete -> next;
            delete nodeToDelete;
        }
        return head;
    }
};