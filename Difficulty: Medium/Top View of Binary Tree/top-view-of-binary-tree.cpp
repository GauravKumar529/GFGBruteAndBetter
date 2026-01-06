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
  void dfs(Node * root  , int depth ,int  level , map<int , pair<int , int >> &mpp) {
      if(!root )return ;
      if(mpp.find(depth ) == mpp.end() || mpp[depth].second > level ){
          mpp[depth] = {root->data , level };
          
      }
      if(root->left ) dfs(root->left, depth-1 , level+1, mpp);
      if(root->right  ) dfs(root->right , depth+ 1 , level+1, mpp);
      return ;
      
      
  }
    vector<int> topView(Node *root) {
        // code here
        vector<int> res ;
        if(!root ) return res ;
        
        map<int , pair<int, int>> mpp;
        dfs(root , 0 , 0 , mpp);
        for(auto it: mpp) {
            res.push_back(it.second.first);
            
        }
        return res ;
        
        
    }
};