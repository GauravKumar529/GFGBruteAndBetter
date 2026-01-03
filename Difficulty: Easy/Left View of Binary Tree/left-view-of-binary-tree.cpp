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
  int levelcount(Node *root) {
     if(!root ) return 0;
     return (1+ max(levelcount(root->left ) , levelcount(root->right )));
      
  }
  void lview(Node * root , int level , vector<int> & res, vector<bool> & vis) {
      if(!root ) return ;
      if(vis[level ] == 0){
          res.push_back(root->data);
          vis[level] = 1;
          
      }
      lview(root->left , level+1, res , vis);
      lview(root->right  , level+1, res , vis);

  }
  
    vector<int> leftView(Node *root) {
        // code here
        vector<int> res ;
        if(!root ) return res ;
        int total = levelcount(root );
        vector<bool> vis(total , 0);
        
        
        lview(root, 0 , res, vis);
        return  res ;
        
    }
};