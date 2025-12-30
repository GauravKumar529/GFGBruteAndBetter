// Function to return the level order traversal of a BST.
vector<int> levelOrder(struct Node* node) {
    // code here
    
    
    queue<struct Node * > q ;
    q.push(node);
    vector<int > res ;
    while(!q.empty()) {
        struct Node  *temp = q.front();
        q.pop();
        
        res.push_back(temp->data );
        if(temp-> left != nullptr )  q.push(temp-> left );
        if(temp-> right != nullptr)  q.push(temp-> right);
        
        
    }
    return res ;
    
    
    
}