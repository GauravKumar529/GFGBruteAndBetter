/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
       // Node* temp = head ;
        Node* slow = head ;
        Node* fast = head ;
        if(head == nullptr|| head->next == NULL) return NULL;
        while(fast&& fast->next ) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow ) break;
        }
        if(fast!= slow ) return NULL;
        int cnt = 1;
        fast = fast->next;
        while(fast!= slow) {
            cnt++;
            fast = fast->next ;
        }
        return cnt;
    }
};