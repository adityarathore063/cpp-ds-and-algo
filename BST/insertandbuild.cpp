#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right, *left;
    Node(int val)
    {
        data = val;
        right = left = NULL;
    }
};

Node *insertBST(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->data < x)
        root->right = insertBST(root->right, x);
    else
        root->left = insertBST(root->left, x);
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{

    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 9);
    insertBST(root, 6);
    insertBST(root, 1);

    inorder(root);
    cout << "\n";

    return 0;
}