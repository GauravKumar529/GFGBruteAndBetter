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
  void calling(Node * root , int level , vector<int> &res ){
      if(!root ) return ;
      if(level == res.size())
        res.push_back(root->data);
      calling(root->right , level+1 , res );
      calling(root ->left  , level+1 , res );
  } 
    vector<int> rightView(Node *root) {
        //  code here
        vector<int> res ;
        if(!root ) return res ;
        
        calling(root, 0 , res );
        return res ;
        
    }
};