/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  Node* mergeList(Node* head1 ,Node* head2 ){
      Node* dummy  = new Node(-1);
      Node* newHead = dummy;
      while(head1 && head2) {
          if(head1-> data < head2->data) {
              dummy->bottom = head1;
              dummy = head1 ;
              head1 = head1->bottom;
          }
          else {
              dummy->bottom = head2;
              dummy = head2;
              head2 = head2-> bottom;
          }
      }
      while(head1) {
          dummy->bottom = head1;
          dummy = head1 ;
          head1 = head1->bottom;
      }
      while(head2) {
           dummy->bottom = head2;
           dummy = head2;
           head2 = head2-> bottom;
      }
      return newHead->bottom;
  }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        Node* temp = root ;
        if(!root || !root->next ) return root ;
        Node* mergedHead = flatten(root->next );
        return mergeList(mergedHead , root);
    }
};