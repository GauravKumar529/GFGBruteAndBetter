/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* root) {
        // code here
        if(root == nullptr ) return ;
        // if(!root->left )
        Node* temp = root->left ;
        root->left  = root->right ;
        root->right  = temp ;
        mirror(root->left );
        mirror(root->right);
        
    } 
};