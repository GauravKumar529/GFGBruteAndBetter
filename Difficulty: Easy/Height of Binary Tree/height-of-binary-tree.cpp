/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // int cnt  = -1;
    // int ans  = 0;
    
    
    int height(Node* root) {
        if(!root) return -1;
        return 1+ max(height(root->left ) , height(root->right ));
        
        
        
        
    }
};