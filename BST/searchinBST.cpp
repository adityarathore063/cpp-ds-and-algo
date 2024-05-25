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

Node* searchInBST(Node *root, int x){
    if(root==NULL)
    return NULL;
    if(root->data==x)
    return root;
    else if(root->data>x)
    return searchInBST(root->left,x);
    else
    return searchInBST(root->right,x);
}
int main(){

    
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

    if(searchInBST(root,6)==NULL){
        cout<<"Not Found\n";
    }
    else{
        cout<<"Found\n";
    }
    return 0;
}