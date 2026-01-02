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
        vector<int > res ;
        queue<Node * > q ;
        if(!root ) return res ;
        q.push(root );
        while(!q.empty()) {
            
            
            int n = q.size();
            res.push_back(q.front()->data);
            int level =0;
            
            while(n--) {
                Node* temp = q.front();
                q.pop();
                if(temp ->left ) q.push(temp->left );
                if(temp ->right  ) q.push(temp->right);
                
            }
            level++;
            
        }
        return res ;
        
        
    }
};