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
        this->next = nullptr;
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
    tail = tail->next;
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

    print_list(head);

    return 0;
}