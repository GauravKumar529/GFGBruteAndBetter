/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(!root ) return  0;
        queue<Node*> q ;
        q.push(root );
        int cnt  =-1;
        while(!q.empty()) {
            int size = q.size();
            while(size--) {
                Node *temp = q.front() ;
                if(temp->left) q.push(temp->left) ;
                if(temp->right ) q.push(temp->right ) ;
                q.pop();
                
            }
            cnt++;
            
        }
        return cnt ;
        
        
        
    }
};