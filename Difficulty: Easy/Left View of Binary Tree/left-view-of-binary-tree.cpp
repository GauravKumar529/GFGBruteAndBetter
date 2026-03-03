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
    vector<int> leftView(Node *root) {
        // code here
        vector<int> res ;
        if(!root ) return res ;
        queue<Node *> q ;
        q.push(root );
        while(!q.empty()) {
            int size = q.size();
            res.push_back(q.front()->data) ;
            
            while(size--) {
                Node* temp = q.front() ;
                if(temp->left) q.push(temp->left) ;
                if(temp->right ) q.push(temp->right ); 
                q.pop();
            }
        }
        return res ;
        
        
        
        
    }
};