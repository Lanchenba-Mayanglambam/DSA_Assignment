class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool check = false;
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(fast == slow){
                check = true;
                break;
            }
        }
        if(check){
            slow = head;
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
            return slow;
        }
        return NULL;
    }
};