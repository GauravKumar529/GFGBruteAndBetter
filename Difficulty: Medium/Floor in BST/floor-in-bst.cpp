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
  void dfs(Node* root , int x , int & res ) {
      if(!root ) return  ;
          if(root->data <= x) res = root->data ;
      if(x >=  root->data){
          dfs(root->right , x , res );
          
      }
      else {
        //   res = root->data ;
          dfs(root->left , x ,res ) ;
          
      }
      return  ;
      
  }
    int findFloor(Node* root, int x) {
        // code here
        if(!root ) return -1;
        int res = -1;
        dfs(root , x, res );
        return res ;
        
        
    }
};