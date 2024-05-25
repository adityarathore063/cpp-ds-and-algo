#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){

    // Properties of Binary Tree
    // maximum nodes at level L = 2^L
    // maximum nodes in a tree of height h = 2^h - 1
    // For N Nodes, minimum possible height or minimum number of levels are log2(N+1)
    // A binary tree with L leaves has atleast log2(N+1)+1 number of levels

    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);

    return 0;
}
