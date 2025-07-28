
/*
 * Node structure is already defined as:
 * struct Node {
 *     int data;
 *     struct Node *next;
 *     Node(int x) {
 *         data = x;
 *         next = NULL;
 *     }
 * };
 */

class Solution {
public:
    Node* segregate(Node* head) {
        // Edge case: if the list has 0 or 1 element, return as it is
        if (head == nullptr || head->next == nullptr) return head;

        // Create dummy nodes for 0s, 1s, and 2s lists
        Node* zeroDummy = new Node(-1);
        Node* oneDummy = new Node(-1);
        Node* twoDummy = new Node(-1);

        // Create tail pointers for each list (we'll attach nodes here)
        Node* zeroTail = zeroDummy;
        Node* oneTail = oneDummy;
        Node* twoTail = twoDummy;

        // Traverse the original list and divide nodes into 0s, 1s, and 2s
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == 0) {
                zeroTail->next = temp;    // attach to 0s list
                zeroTail = temp;          // move the tail forward
            } else if (temp->data == 1) {
                oneTail->next = temp;     // attach to 1s list
                oneTail = temp;
            } else {
                twoTail->next = temp;     // attach to 2s list
                twoTail = temp;
            }
            temp = temp->next;
        }

        // Now connect the three lists together

        // If 1s list is not empty, attach 0s -> 1s -> 2s
        if (oneDummy->next != nullptr) {
            zeroTail->next = oneDummy->next;
            oneTail->next = twoDummy->next;
        }
        // If 1s list is empty, attach 0s -> 2s
        else {
            zeroTail->next = twoDummy->next;
        }

        // Important: terminate the list properly
        twoTail->next = nullptr;

        // Final head of sorted list (excluding dummy node)
        return zeroDummy->next;
    }
};
