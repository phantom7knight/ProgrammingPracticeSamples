#include "../../Helper Functions/Helper.hpp"

struct ListNode 
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}	
};

void AddNode(ListNode** head, int data)
{
	// make a new node to set the data
	ListNode* newNode = new ListNode(data);

	// check if this is the first node
	if (*head == NULL)
	{
		// then add a node
		*head = newNode;
		return;
	}

	ListNode* temp = *head;

	while (temp->next != NULL)
	{
		// update the temp node
		temp = temp->next;
	}

	// assign the next node
	temp->next = newNode;

	return;
}

void AddNodeBefore(ListNode** head, ListNode* toAdd)
{
	// check if this is the first node
	if (*head == NULL)
	{
		// then add a node
		*head = toAdd;
		return;
	}

	ListNode* temp = *head;

	// add the node before the head
	toAdd->next = temp;

	// assign head to the new node
	*head = toAdd;

	return;
}

void PrintNodes(ListNode* head)
{
	while (head != NULL)
	{
		STDPRINTLINE(head->val);
		head = head->next;
	}
}

ListNode* ReverseLinkedList(ListNode* head)
{
	ListNode* newList = NULL;

	while (head != NULL)
	{
		ListNode* newNode = new ListNode(head->val);

		AddNodeBefore(&newList, newNode);
		
		head = head->next;
	}

	return newList;
}


int main()
{
	STDPRINTLINE("Hello World!");
	
	ListNode* head = NULL;

	AddNode(&head, 1);
	AddNode(&head, 2);
	AddNode(&head, 3);
	AddNode(&head, 4);
	AddNode(&head, 5);

	PrintNodes(head);

	STDPRINTLINE("=========================");

	ListNode* reversedList = ReverseLinkedList(head);

	PrintNodes(reversedList);

	STDPRINTLINE("=========================");

	return 0;
}