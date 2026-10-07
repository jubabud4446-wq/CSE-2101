#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void insert_at_tale(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tale(head, tail, 10);
    insert_at_tale(head, tail, 20);
    insert_at_tale(head, tail, 30);
    insert_at_tale(head, tail, 40);

    print_linked_list(head);
    cout << "Head: " << head->value << endl;
    cout << "Tail: " << tail->value << endl;

    return 0;
}