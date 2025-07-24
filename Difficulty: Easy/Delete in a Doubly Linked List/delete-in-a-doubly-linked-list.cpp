
/* 
Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position x (1-based index)
    Node* deleteNode(Node* head, int x) {
        
        // Start from head
        Node* temp = head;

        // Counter to reach position x
        int cnt = 0;

        // Traverse the list to reach x-th node
        while (temp != NULL) {
            cnt++;
            if (cnt == x) break; // found the node to delete
            temp = temp->next;
        }

        // Store previous and next of node to be deleted
        Node* prevOne = temp->prev;
        Node* front = temp->next;

        // 🧱 Case 1: Only one node in the list
        if (prevOne == NULL && front == NULL) {
            delete(temp);  // delete the only node
            return NULL;   // now list is empty
        }

        // 🧱 Case 2: Deleting the head node
        else if (prevOne == NULL) {
            head = temp->next;      // move head to next node
            head->prev = NULL;      // remove backward link
            delete(temp);           // delete old head
        }

        // 🧱 Case 3: Deleting the tail node
        else if (front == NULL) {
            temp->prev->next = NULL; // previous node’s next is now NULL
            temp->prev = NULL;       // remove back pointer from temp
            delete(temp);            // delete tail
        }

        // 🧱 Case 4: Deleting any middle node
        else {
            prevOne->next = front;   // connect previous to next
            front->prev = prevOne;   // connect next to previous
            temp->next = NULL;       // disconnect both sides of temp
            temp->prev = NULL;
            delete(temp);            // delete middle node
        }

        // return updated head pointer
        return head;
    }
};
