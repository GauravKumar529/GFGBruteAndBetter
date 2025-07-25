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
  Node* reversehalf(Node* middle)
  {
      Node* prev  = nullptr ;
      Node* newHead = nullptr ;
      if(middle == nullptr || middle->next == NULL) return middle ;
      else {
          newHead = reversehalf(middle->next );
          Node* front = middle->next ;
          front->next = middle ;
          middle->next = nullptr ;
          
      }
      return newHead;
  }
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node* first = head ;
        Node* temp  = head ;
        int cnt = 0;
        while(temp!= NULL) {
            cnt++;
            temp = temp->next ;
        }
        int mid  = (cnt / 2)+1;
        temp = head ;
        cnt= 0;
        while(temp != nullptr) {
            cnt++;
            if(cnt == mid) break;
            temp = temp->next ;
        } 
        Node* middle = reversehalf(temp);
        while(middle!= NULL) {
            if(middle->data == first->data ) {
                first = first->next ;
                middle = middle->next ;
                
            }
            else return false ;
        }
        return  true ;
       
        
    }
};