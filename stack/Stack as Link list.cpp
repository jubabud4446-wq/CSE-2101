
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;

    Node(int val)
    {
        this->value = val;
        this->next = nullptr;
    }
};

class Stack
{
    public:
        Node* top;

    Stack()
    {
        top = nullptr;
    }

    void push(int val)
    {
        Node* newNode = new Node(val);

        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if(top == nullptr)
        {
            cout << "STACK UNDERFLOW" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        
        delete temp;
    }

    void print()
    {
        Node* temp = top;

        while(temp != nullptr)
        {
            cout << "\n" << temp->value;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.print();

    st.pop();

    cout << "After pop: ";
    st.print();

    return 0;
}
