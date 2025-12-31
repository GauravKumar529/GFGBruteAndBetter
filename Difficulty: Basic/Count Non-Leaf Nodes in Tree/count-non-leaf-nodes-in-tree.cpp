/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  int cnt  = 0;
    int countNonLeafNodes(Node* root) {
        // Code here
        if(!root ) return 0;
        if( !root->left  &&  !root->right  ) return 0;
        else {
            cnt++;
            countNonLeafNodes(root->left);
            
            countNonLeafNodes(root->right );
            
        }
        return cnt ;
        
    }
};