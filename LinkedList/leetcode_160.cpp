class Solution {
    int getLength(ListNode* head){
        int counter = 0;
        ListNode* temp = head;
        while(temp != NULL){
            counter++;
            temp = temp -> next;
        }
        return counter;
    }

    ListNode* findIntersectionPoint(ListNode* longerHead, ListNode* shorterHead, int diff){
        // skip the extra nodes from longerHead
        while(longerHead != NULL && diff > 0){
            longerHead = longerHead -> next;
            diff--;
        }
        // traverse on both linked lists now 
        while(longerHead != NULL && shorterHead != NULL){
            if(longerHead == shorterHead) return shorterHead;

            longerHead = longerHead -> next;
            shorterHead = shorterHead -> next;
        }
        return NULL;
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // calculate length of l1 andd l2
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        if(lenA >= lenB){
            int diff = lenA - lenB;
            return findIntersectionPoint(headA, headB, diff);
        }else{
            int diff = lenB - lenA;
            return findIntersectionPoint(headB, headA, diff);
        }
    }
};