/*

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

class Solution {
  public:
  int helper(Node* temp ) { // this function will return  carry 
  //first dry run the example and take acc to this in my notebook
     if(temp == nullptr ) return 1;
     int carry = helper(temp->next ); //  always store iin this way when you call a recursion you store its data integer in some box 
     temp->data = temp->data + carry ;
     if(temp->data < 10) return 0;
     temp-> data = 0;
     return 1;
  }
    Node* addOne(Node* head) {
        // Your Code here
        Node* temp = head ;
        int carry = 1;
        carry = helper(head ); //  since my addNode fn return s Node not int so i make a function which will be return inh =g the int 
        // basix=cally this is a TECHNIQUE 1OF DOING BACKTRACKING PROBLEM 
        if(carry == 1 ) {
            Node* newHead = new Node(1);
            newHead->next   = head ;
            return newHead ;
        }
        else return head ;
        // return head of list after adding one
    }
};