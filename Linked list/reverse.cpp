#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// void insertatTail(node* &head, int x)
// {
//     node *temp = new node(x);

//     if (head == NULL)
//     {
//         head = temp;
//         return;
//     }
//     node *curr = head;
//     while (curr->next != NULL)
//     {
//         curr = curr->next;
//     }
//     curr->next = temp;
// }
void print(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL\n";
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}
int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    // Reverse the given linked list
    print(head);
    node *newhead = reverse(head);
    print(newhead);
    node *new_head = reverseRecursive(newhead);
    print(new_head);
    return 0;
}