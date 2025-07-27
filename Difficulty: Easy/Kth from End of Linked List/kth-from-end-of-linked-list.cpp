/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        if(head==nullptr || head->next  == nullptr ) {
            if(k >1) return -1;
            return head->data;
        }
        Node* temp = head ;
        int cnt  = 0;
        while(temp != nullptr) {
            cnt++;
            temp = temp->next ;
            
        }
        int size = cnt-k+1;
        temp = head ;
        cnt = 0 ;
        while(temp!= nullptr ) {
            cnt++;
            if(cnt == size ) {
                return  temp->data ;
            }
            temp = temp->next ;
        }
        return -1; ;
    }
};