
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



/*

#include <bits/stdc++.h>
using namespace std;

double f(double val)
{
    return (val * val * val) - (2 * val) - 5;
}

int main()
{
    double a = 2.0, b = 3.0, x;

    if (f(a) * f(b) >= 0)
    {
        cout << "Invalid interval!" << endl;
        return 0;
    }

    bool tri = true;
    while (tri)
    {
        int i = 0;
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        cout << fixed << setprecision(10);
        cout << "Iteration " << i << "  x = " << x << "  Function value = " << f(x) << endl;
        i++;
        

        int check = f(x) * 100000;
        if(check == 0)
            tri = false;
    }

    cout << "\nRoot = " << x << endl;

    return 0;
}


*/
