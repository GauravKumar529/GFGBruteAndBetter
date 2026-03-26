/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  int dfs(Node * root , int &i , int k) {
      if(!root ) return -1;
      int right   = dfs(root->right , i, k );
      if(right  !=-1 ) return  right  ;
      i++;
      if(i == k) return root->data ;
      int left = dfs(root->left , i ,k );
      if(left!= -1) return  left ;
      return -1;
      
      
  }
    int kthLargest(Node *root, int k) {
        // Your code here
        int i = 0;
        return dfs(root , i , k ) ;
        
        
        
    }
};