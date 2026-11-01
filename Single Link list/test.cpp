
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
};

void add_at_tail(Node* &Head, int val)
{
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = NULL;

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }

    Node* temp = Head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void add_Node(Node* &Head, int val, int index)
{
    if (index % 2 != 0)
    {
        Node* newNode = new Node;
        newNode->value = val;
        newNode->next = Head;
        Head = newNode;
    }
    else
    {
        add_at_tail(Head, val);
    }
}

void print(Node* Head)
{
    Node* temp = Head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* Head = NULL;

    for (int i = 1; i <= 10; i++)
    {
        add_Node(Head, 10 * i, i);
    }

    // for (int i = 1; i <= 10; i++)
    // {
    //     add_at_tail(Head, 10*i);
    // }

    print(Head);

    return 0;
}