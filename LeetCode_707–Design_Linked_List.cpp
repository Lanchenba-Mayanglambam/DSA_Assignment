class MyLinkedList {
    ListNode* head;
public:
    MyLinkedList() {  
        head = NULL;
    }
    
    int get(int index) {
    ListNode* temp = head;

    for(int i = 0; i < index && temp != NULL; i++) {
        temp = temp->next;
    }

    return temp ? temp->val : -1;
}
    
    void addAtHead(int val) {
        ListNode* temp = new ListNode(val);
        temp->next = head;
        head = temp;
    }
    
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        if (head == NULL)
        {
            head = node;
            return;
        }
        ListNode* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0)
        {
            ListNode* temp = new ListNode(val);
            temp->next = head;
            head = temp;
            return;
        }
        ListNode* curr = head;
        for (int i = 0; i < index - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL)
        {
            return;
        }
        ListNode* node = new ListNode(val);
        node->next = curr->next;
        curr->next = node;
    }
    
    void deleteAtIndex(int index) {
        if (head == NULL)
        {
            return;
        }
        if (index == 0)
        {
           ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        ListNode* curr = head;
        for (int i = 0; i < index - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL || curr->next == NULL)
        {
            return;
        }
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
};