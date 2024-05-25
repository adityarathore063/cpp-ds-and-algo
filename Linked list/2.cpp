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

void insertatTail(node *&head, int x)
{
    node *temp = new node(x);

    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}
void print(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int length(node *head)
{
    int l = 0;
    node *curr = head;
    while (curr != NULL)
    {
        l++;
        curr = curr->next;
    }
    return l;
}
node *kappend(node *&head, int k)
{
    int l = length(head);
    node *newHead, *newTail, *curr = head;
    int count = 1;
    k = k % l; // handling the case when k is greater than l
    while (curr->next != NULL)
    {
        if (count == l - k)
        {
            newTail = curr;
        }
        if (count == l - k + 1)
        {
            newHead = curr;
        }
        count++;
        curr = curr->next;
    }
    newTail->next = NULL;
    curr->next = head;
    return newHead;
}
int main()
{

    // Append last k nodes of linked list to the start of linked list
    // e.g. 1->2->3->4->5->6 and k = 3
    // output === 4->5->6-1->2->3
    node *head = NULL;
    insertatTail(head, 1);
    insertatTail(head, 2);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);
    insertatTail(head, 6);
    print(head);
    cout<<"\n";
    node *newHead = kappend(head, 3);
    print(newHead);

    return 0;
}