/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* temp = head ;
        Node* mover =NULL;
        while(temp !=  nullptr ) {
            Node* front  = temp->next ;
            temp->next = mover ; //  since i do temp-> nex t it willl move from its position and i dont ise this again at as taken a initial posotion  so i ,ll keep a node which will store temp->next (say front )  
            mover  = temp;
            temp = front  ;
        }
        return mover ;
    }
};