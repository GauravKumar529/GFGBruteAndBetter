
class Solution {
  public:
    DLLNode* reverseDLL(DLLNode* head) {
        using Node = DLLNode;
        if (head == nullptr || head->next == nullptr) return head;

        Node* curr = head;
        Node* newHead = nullptr;

        while (curr != nullptr) {
            // Swap the next and prev pointers
            Node* temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            // Update new head (will become the last non-null node)
            newHead = curr;

            // Move to the next node in original list (which is prev now)
            curr = curr->prev;
        }

        return newHead;
    }
};
