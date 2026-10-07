/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL)
            return NULL;

        // Create copy nodes
        Node* itr = head;

        while(itr)
        {
            Node* newNode = new Node(itr->val);

            newNode->next = itr->next;
            itr->next = newNode;

            itr = newNode->next;
        }

        // Set random pointers
        itr = head;

        while(itr)
        {
            if(itr->random)
                itr->next->random = itr->random->next;

            itr = itr->next->next;
        }

        // Separate the lists
        Node* original = head;
        Node* copyHead = head->next;
        Node* copy = copyHead;

        while(original)
        {
            original->next = original->next->next;

            if(copy->next)
                copy->next = copy->next->next;

            original = original->next;
            copy = copy->next;
        }

        return copyHead;
    }
};