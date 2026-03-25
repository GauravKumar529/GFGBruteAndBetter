class Solution {
  public:
  void dfs(Node * root , int x ,int & res ){
      if(!root ) return  ;
      if(root-> data  > x) res = root->data ;
      if(root->data == x) {
          res = root->data ;
          return ;
          
      }
      if(root->data > x ) {
          dfs(root->left , x , res );
      }
      else dfs(root->right , x ,res );
      return ;
      
  }
    int findCeil(Node* root, int x) {
        // code here
        //usingdfs traversal 
        if(!root )return -1;
        int res= -1 ;
        dfs(root , x, res );
        return res ;
        
        
    }
};
