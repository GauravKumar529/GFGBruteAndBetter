// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
    // Your code her
    Node* temp = head ;
    if(head == NULL|| head->next == NULL) return NULL;
    head = head->next ;
    head->prev = nullptr;
    delete(temp);
    return head ;
    
}
