#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;
        Node* prev;

    Node (int val)
    {
        this->value = val;
        this->next = nullptr;
        this->prev = nullptr;
    }    
};

void input_list(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void insert_at_position(Node* &head, Node* &tail, int idx, int val)
{
    Node* newNode = new Node(val);

    if(idx == 0)
    {
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 0; i < idx; i++)
    {
        if(temp == NULL)
        {
            cout << "Invalid index" << endl;
            delete newNode;
            return;
        }

        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;
}


void print_list(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void print_list_reverse(Node* tail)
{
    Node* temp = tail;
    while (temp)
    {
        cout << temp->value << endl;
        temp = temp->prev;
    }
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1)
            break;
        input_list(head,tail,val);
    }

    cout << "\nNormally: " << endl;
    print_list(head);

    cout <<"\nReversed: " << endl;
    print_list_reverse(tail);

    insert_at_position(head, tail, 3, 100);

    cout << "\nAfter insertion: " << endl;
    print_list(head);


    return 0;
}