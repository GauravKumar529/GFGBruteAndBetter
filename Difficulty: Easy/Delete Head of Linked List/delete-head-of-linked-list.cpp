// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};

*/
// Complete this function
Node *deleteHead(Node *head) {
    if(head == NULL) return NULL;
    // Your code here
    head = head-> next ;
    Node* NewHead = head ;
    return NewHead ;
}
