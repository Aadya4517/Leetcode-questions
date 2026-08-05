class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL)
            return head;

        ListNode* temp = head;
        ListNode* itr = head->next;

        while (itr) {

            if (temp->val == itr->val) {
                temp->next = itr->next;
                itr = temp->next;
            }
            else {
                temp = itr;
                itr = itr->next;
            }
        }

        return head;
    }
};