/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  Node*  findPredecessor(Node* root){
      Node* temp  =  root ;
      
      temp = temp->left ;
      while(temp->right != nullptr && temp->right  !=root  ){
          temp = temp->right ;
      }
      return temp ;
      
  }
  
  
    vector<int> inOrder(Node* root) {
        // code here
        vector<int > res ;
        if(!root ) return  res ;
        Node* temp = root ;
        while(temp) {
            // if(left not exists then print and move to right part );
            
            if(!temp ->left){
                res.push_back(temp->data);
                temp = temp->right ;
            }
            else {
                Node* pred = findPredecessor(temp );
                //creating linked temp threads 
                if(!pred->right){
                    pred->right = temp ;
                    temp= temp->left ;
                    
                }
                else {
                    // removing the thread make while going back -> 
                    pred->right = nullptr ;
                    res.push_back(temp->data );
                    temp  = temp->right ;
                    
                    
                }
                
            }
            
            
        }
        return res ;
        
        
        
        
    }
};