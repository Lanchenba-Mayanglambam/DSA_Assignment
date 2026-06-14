class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        // Node* prev
        ListNode* curr = head;
        ListNode* nextNode = nullptr;

        while (curr != nullptr) {
            nextNode = curr->next;  
            curr->next = prev;     
            prev = curr;            
            curr = nextNode;        
        }
    
        return prev;
    }
};