/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int height(Node * root) {
      if(!root ) return 0;
      return 1 + max(height(root->left ) , height(root->right ));
      
  }
    bool isBalanced(Node* root) {
        // code here
        if(!root) return 1;
        
        int h1 = 0;
        int h2 = 0;
        
        
        if(root->left ) h1 = height(root->left );
        if(root->right ) h2 = height(root->right);
        if(abs(h1 - h2 ) <= 1) return (isBalanced(root->left ) &&  isBalanced(root->right )); 
        else  return 0;
        
        
    }
};