/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void dfs(Node* root , vector<vector<int >> & res , vector<int> path ) {
      if(!root ) return  ;
      path.push_back(root-> data) ; 
      if(!root->left && !root-> right ){
          res.push_back(path);
          return ;
          
      }
      dfs(root-> left, res ,path );
      dfs(root-> right , res ,path );
      return ;
      
  }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int >> res ;
        if(!root ) return res ;
        vector<int > need ;
        dfs(root , res, need );
        return res ;
        
        
    }
};