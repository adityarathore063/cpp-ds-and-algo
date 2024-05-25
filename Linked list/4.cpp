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
	cout << "\n";
}
// Iterative way
node* mergesort(node* &head1, node* &head2) {
	node *p1 = head1, *p2 = head2;
	node *dummynode = new node(-1);
	node *p3 = dummynode;
	while (p1 != NULL && p2 != NULL) {
		if (p1->data < p2->data) {
			p3->next = p1;
			p1 = p1->next;
		}
		else {
			p3->next = p2;
			p2 = p2->next;
		}
		p3 = p3->next;
	}
	while (p1 != NULL) {
		p3->next = p1;
		p1 = p1->next;
		p3 = p3->next;
	}
	while (p2 != NULL) {
		p3->next = p2;
		p2 = p2->next;
		p3 = p3->next;
	}
	return dummynode->next;
}

// Recursive way
node* mergerecursive(node* &head1, node* &head2) {
	if (head1 == NULL)
		return head2;
	if (head2 == NULL)
		return head1;

	node *result;
	if (head1->data < head2->data) {
		result = head1;
		result->next = mergerecursive(head1->next, head2);
	}
	else {
		result = head2;
		result->next = mergerecursive(head1, head2->next);
	}
	return result;
}
int main() {

	node *head1 = NULL;
	insertatTail(head1, 1);
	insertatTail(head1, 4);
	insertatTail(head1, 5);
	insertatTail(head1, 7);

	node *head2 = NULL;
	insertatTail(head2, 2);
	insertatTail(head2, 3);
	insertatTail(head2, 6);
	// Merge two sorted linked list
	print(head1);
	print(head2);
	// Iterative way
	// node *new_head = mergesort(head1, head2);
	// print(new_head);
	// Recurisve way
	node *new_head = mergerecursive(head1, head2);
	print(new_head);
	return 0;
}