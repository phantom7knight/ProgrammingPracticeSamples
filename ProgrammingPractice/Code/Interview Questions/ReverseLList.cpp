#include "../../Helper Functions/Helper.hpp"

// LeetCode: 206. Reverse Linked List

struct ListNode 
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Add a node to List
void AddNode(ListNode** head, int data)
{
	// Setup new node and it's data
	ListNode* newNode = new ListNode(data);
	newNode->next = nullptr;

	// Check if the head node is null
	// if yes, then setup head
	if (*head == NULL)
	{
		*head = newNode;

		return;
	}

	 // setup a new node and attach it to the existing list

	ListNode* tempNode = *head;

	// Traverse through all the nodes to find the last node
	while (tempNode->next != NULL)
	{
		// Go to the next node
		tempNode = tempNode->next;
	}
	
	tempNode->next = newNode;
	
	return;
}

// Remove a node from List
void RemoveNode(ListNode** head)
{

	return;
}

// Clean nodes from List
void CleanList(ListNode** head)
{
	while (*head != NULL)
	{
		ListNode* tempnode = *head;

		*head = tempnode->next;

		 // clean the node
		delete(tempnode);
	}

	return;
}

void AddNodeStart(ListNode** head, ListNode* node)
{
	// check if the list is null
	if (*head == NULL)
	{
		// Add the node to the head
		*head = node;
		return;
	}

	// Add this node in the front
	node->next = *head;

	*head = node;

	return;
}


ListNode* ReverseList(ListNode* head)
{
	ListNode* result = NULL;

	while (head != NULL)
	{
		AddNodeStart(&result, new ListNode(head->val));

		// Go to the next node in the provided list
		head = head->next;
	}

	return result;
}

void PrintLinkedList(ListNode* head)
{
	while (head != NULL)
	{
		printf("%d ", head->val);
		head = head->next;
	}

	return;
}

int main()
{
	ListNode* headNode = NULL;

	AddNode(&headNode, 1);
	AddNode(&headNode, 2);
	AddNode(&headNode, 3);
	AddNode(&headNode, 4);
	AddNode(&headNode, 5);

	PrintLinkedList(headNode);
	printf("\n");

	// Reverse the LinkedList
	ListNode* newReversedList = ReverseList(headNode);

	PrintLinkedList(newReversedList);
	printf("\n");

	CleanList(&headNode);
	CleanList(&newReversedList);

	return 0;
}