/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head == NULL)  {
            return new Node (x);
        }
        Node*   temp = head ;
        while(temp-> next != NULL) {
            temp = temp-> next ;
        }
        Node* newNode = new Node( x);// creating a new Node And Insert the Value in it 
        temp->next = newNode  ;// pionter points to the new adress location tha tis new Node 
        return head ;
        
        
        
    }
};
// in this problem what i , ll do is , move the temp to last one node and then create a new node here and put x into it with a nukk==ll vale 
// hey //-> new Node(x ); ->> ths means tht x is insert into newNode with a NULL value 
//->> // newNode(x , head ) ->> measn x  inserted with a pointing  pointer as head  means 
// new one had is my x now 



