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
  int cnt =0;
  
    int getSize(Node* node) {
        // code here
        cnt++;
        if(node-> left !=nullptr ){
            // cnt++;
            getSize(node->left );
        }
        
        if(node->right !=nullptr ) {
            // cnt++;
            getSize(node->right);
            
        }
        return cnt ;
    }
};