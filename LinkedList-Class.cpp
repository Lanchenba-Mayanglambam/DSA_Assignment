#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node* head;
public:
    // Node *head;
    LinkedList()
    {
        head = NULL;
    }


    void insertFront(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }


    void insertEnd(int x)
    {
        Node *node = new Node(x);
        if (head == NULL)
        {
            head = node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }


    void insertPosition(int pos, int x)
    {
        if (pos == 1)
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
            return;
        }
        Node *curr = head;
        for (int i = 1; i < pos - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL)
        {
            return;
        }
        Node *node = new Node(x);
        node->next = curr->next;
        curr->next = node;
    }


    void deleteFront()
    {
        if (head == NULL)
        {
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }


    void deleteLast()
    {
        if (head == NULL)
        {
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    
    void deletePosition(int pos)
    {
        if (head == NULL)
        {
            return;
        }
        if (pos == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *curr = head;
        for (int i = 1; i < pos - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL || curr->next == NULL)
        {
            return;
        }
        Node *temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    

    bool search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }


    int length()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};

    int main()
{

    LinkedList list;
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertEnd(50);
    list.display();
    return 0;
}