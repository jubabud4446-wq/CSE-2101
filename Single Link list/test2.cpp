#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
    }
};

int main()
{
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node* temp = a;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}