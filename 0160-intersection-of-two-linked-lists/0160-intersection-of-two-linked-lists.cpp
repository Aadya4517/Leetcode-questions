/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int lenA=0;
       int lenB=0;
       ListNode* tempA=headA;
       ListNode* tempB=headB;
       while(tempA!=NULL)
        {
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL)
        {
            lenB++;
            tempB=tempB->next;
        }
        int diff=abs(lenA-lenB);
        if(lenA>lenB)
        {
            while(diff--)
            headA=headA->next;
        }
        else{
            while(diff--)
            headB=headB->next;
        }
        while(headA!=NULL && headB!=NULL)
        {
            if(headA==headB)
            return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};