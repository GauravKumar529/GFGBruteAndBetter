// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int , int >> v;
       if(head == nullptr) return v; /// base case 
      //  int cnt  =  0;
        Node* temp1 = head;
        Node* temp2 = head ;
        while(temp2->next ) {
           /// cnt++;
            temp2 = temp2 ->next ;
        }
        // int j = cnt;
        // int i  = 0;
        while(temp1->data < temp2->data) {
            int sum = temp1->data+ temp2->data;
            if(sum == target ) {
                v.push_back({temp1->data, temp2->data});
                temp1 = temp1->next ;
                // i++;
                // j--;
                temp2 = temp2->prev ;
            }
            else if(sum > target ) {
              //  j--;
                temp2 = temp2->prev;
            }
            else {
               // i++;
                temp1 = temp1->next ;
            }
            
        }
        return v;
        
    }
};