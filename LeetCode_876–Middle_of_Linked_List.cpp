class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        int i = (n/2);
        ListNode* curr = head;
        while(i){
            curr = curr -> next;
            i--;
        }
        // head = curr -> next;
        return curr;
    }
};