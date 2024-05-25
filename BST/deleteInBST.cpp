#include<bits/stdc++.h>
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

Node* inorderSucc(Node *root){
    Node *curr = root;
    while(curr and curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}
Node *deleteInBST(Node *root, int key){
    if(root->data>key){
        root->left = deleteInBST(root->left,key);
    }
    else if(root->data<key){
        root->right = deleteInBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *succ = inorderSucc(root->right);
        root->data = succ->data;
        root->right = deleteInBST(root->right,succ->data);
    }
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

int main(){

    
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

    inorder(root);
    cout<<"\n";
    root = deleteInBST(root,20);
    inorder(root);
    return 0;
}