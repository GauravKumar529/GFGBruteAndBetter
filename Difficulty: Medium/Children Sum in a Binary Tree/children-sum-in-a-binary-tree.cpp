/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  public:
  bool dfs(Node* root ) {
      if(!root ) return   1;
      if(!root-> left && !root-> right ) return 1 ;
      
      if(root-> left  && root->right ) {
          if(root->data !=  (root->left->data + root->right->data )) return 0 ;
          
      }
      if(!root->left){
          if(root->data != root->right->data) return 0 ;
          
      }
      if(!root->right ) if(root->data != root->left->data) return 0 ;
      
      
      bool leftPart = dfs(root->left);
      bool rightPart = dfs(root->right);
      
      if(!leftPart || ! rightPart) return 0;
      return 1 ;
      
      
      
  }
    bool isSumProperty(Node *root) {
        // code here
        return  dfs(root) ;
        
        
        
    }
};