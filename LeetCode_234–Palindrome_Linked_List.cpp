class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        


        int mid = n/2;
        ListNode* middle = head;
        while(mid){
            middle = middle -> next;
            mid--;
        }



        // ListNode* left = middle;
        ListNode* prev = nullptr;
        ListNode* curr = middle;
        ListNode* nextNode = nullptr;
        while (curr) {
            nextNode = curr->next;  
            curr->next = prev;     
            prev = curr;            
            curr = nextNode;        
        }

        ListNode* first = head;
        ListNode* second = prev;
        while(first && second){
            if(first-> val != second -> val){
                return false;
            }
            first = first -> next;
            second = second -> next;
        }
        return true;
        
    }
};