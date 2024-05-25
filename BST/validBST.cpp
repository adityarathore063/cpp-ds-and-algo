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

// Time complexity = O(n)
bool isBST(Node *root, Node *min, Node *max)
{
    if (root == NULL)
        return true;
    if (min != NULL and root->data <= min->data)
        return false;
    if (max != NULL and root->data >= max->data)
        return false;
    bool leftvalid = isBST(root->left, min, root);
    bool rightvalid = isBST(root->right, root, max);
    return leftvalid and rightvalid;
}
int main()
{

    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);

    if (isBST(root, NULL, NULL))
        cout << "Valid BST\n";
    else
        cout << "Not valid BST\n";
    return 0;
}