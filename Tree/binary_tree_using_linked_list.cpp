#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
};

Node* createTree()
{
    int x;
    cin >> x;

    if(x == -1)
        return NULL;

    Node* newNode = new Node;
    newNode->data = x;

    cout << "Enter left child of " << x << ": ";
    newNode->left = createTree();

    cout << "Enter right child of " << x << ": ";
    newNode->right = createTree();

    return newNode;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    cout << "Enter root: ";

    Node* root = createTree();

    cout << "Inorder: ";
    inorder(root);

    return 0;
}