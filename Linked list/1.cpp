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
void makeCycle(node *&head, int pos)
{
	node *curr = head;
	node *startNode;
	int count = 1;
	while (curr->next != NULL)
	{
		if (count == pos)
		{
			startNode = curr;
		}
		curr = curr->next;
		count++;
	}
	curr->next = startNode;
}
bool detectCycle(node *head)
{
	node *slow = head;
	node *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			return true;
		}
	}
	return false;
}

void removalCycle(node *&head)
{
	node *slow = head;
	node *fast = head;
	do
	{
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);
	fast = head;
	while (slow->next != fast->next)
	{
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = NULL;
}
int main()
{
	// Detection and removal of cycle in a linked list (Floyds algorithm and hare and tortosie algorithm)
	node *head = NULL;
	insertatTail(head, 1);
	insertatTail(head, 2);
	insertatTail(head, 3);
	insertatTail(head, 4);
	insertatTail(head, 5);
	insertatTail(head, 6);
	makeCycle(head, 3);
	// print(head);
	cout << detectCycle(head) << "\n";
	removalCycle(head);
	cout << detectCycle(head) << "\n";
	print(head);

	return 0;
}