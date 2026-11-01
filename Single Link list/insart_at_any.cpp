#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

    Node (int val)
    {
        this->value = val;
        this->next = NULL;
    }    
};

void insert_at_any(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= index; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    
    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any(head, 2, 100);
    print_linked_list(head);

    return 0;
}