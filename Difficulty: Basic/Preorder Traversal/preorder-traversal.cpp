/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void preorder(Node* root , vector<int> &res){
      if(!root) return ;
      res.push_back(root->data);
      preorder(root-> left , res );
      preorder(root-> right ,res );
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> res ;
        preorder(root , res );
        return res ;
    }
};