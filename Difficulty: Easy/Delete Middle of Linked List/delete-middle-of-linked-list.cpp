/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head == nullptr || head->next == nullptr ) return NULL;
        Node* temp = head ;
        int cnt = 0;
        while(temp != nullptr ) {
            cnt++;
            temp = temp->next ;
        }
      //  int middle  = 0;
        int middle  = cnt / 2;
        temp = head ;
        cnt = -1;
        while(temp !=nullptr) {
            cnt++;
            if(cnt == middle -1) {
                Node* delNode = temp->next ;
                temp->next = delNode-> next ;
                delete(delNode);
                break;
            }
            temp = temp->next ;
        }
        return head ;
    }
};