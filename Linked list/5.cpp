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
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "NULL"
		 << "\n";
}
void evenAfterOdd(node *&head)
{
	node *odd = head;
	node *even = head->next;
	node *evensatart = even;
	while (odd->next != NULL && even->next != NULL)
	{
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	if (odd->next == NULL)
	{
		even->next = NULL;
	}
	odd->next = evensatart;
}
int main()
{

	node *head1 = NULL;
	insertatTail(head1, 1);
	insertatTail(head1, 2);
	insertatTail(head1, 3);
	insertatTail(head1, 4);
	insertatTail(head1, 5);
	// insertatTail(head1, 6);
	// put even position nodes after odd position nodes
	// e.g. 1->2->3->4->5->6->NULL
	// o/p:-  1->3->5->2->4->6->NULL
	print(head1);
	evenAfterOdd(head1);
	print(head1);
	return 0;
}