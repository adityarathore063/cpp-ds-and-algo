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

// Brute force approach -> traverse the one linked list for every node of this linked list traverse the other linked list
// T.c = O(n*m) aux. space = O(1)

// Better solution -> using hash table -> store the adrress of node of one linked list and check for other linked list
// T.c = O(n+m) aux. space = O(n)

// Optimized solution 1 -> t.c = O(n) and aux. space = O(1)
int inetrsection(node *head1, node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node *ptr1, *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d--)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
// optimized solution 2 -> t.c = O(n) and aux. space = O(1)
node *intersection1(node *head1, node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return NULL;
    }

    node *ptr1 = head1;
    node *ptr2 = head2;

    while (ptr1 != ptr2)
    {
        if (ptr1 == NULL)
        {
            ptr1 = head2;
        }
        else
        {
            ptr1 = ptr1->next;
        }

        if (ptr2 == NULL)
        {
            ptr2 = head1;
        }
        else
        {
            ptr2 = ptr2->next;
        }
    }
    return ptr1;
}
int main()
{

    // Find intersection point of linked list
    node *head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(8);
    head1->next->next->next = new node(7);
    head1->next->next->next->next = new node(6);

    head2->next = new node(2);
    head2->next->next = new node(8);
    head2->next->next->next = new node(1);
    head2->next->next->next->next = new node(3);
    head2->next->next->next->next = new node(8);
    head2->next->next->next->next = new node(7);
    head2->next->next->next->next = new node(6);

    insertatTail(head2, 2);
    insertatTail(head2, 8);
    insertatTail(head2, 1);
    insertatTail(head2, 3);
    insertatTail(head2, 8);
    insertatTail(head2, 7);
    insertatTail(head2, 6);

    // cout << inetrsection(head1, head2) << "\n";

    node *new_head = intersection1(head1, head2);
    cout << new_head->data << "\n";
    if (new_head == NULL)
    {
        cout << "-1\n";
    }
    else
    {
        cout << new_head->data << "\n";
    }
    return 0;
}