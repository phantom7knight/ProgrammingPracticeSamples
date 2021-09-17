#include "Helper.hpp"

// DON'T USE THIS!!!
#pragma region NOT_IN_USE
struct Node
{
	Node* next = NULL;
	int data = 0;

	Node() : data(0), next(NULL){}

	Node(int a_data) : data(a_data), next(NULL){}

	Node(int x, Node* next) : data(x), next(next) {}
};
#pragma endregion

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void AddNode(ListNode** head, int val)
{
    ListNode* newNode = new ListNode(val);

    // check if this is the first node
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // find the last node to add this n
    ListNode* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return;
}

void AddNode(ListNode** head, ListNode* newNode)
{
    // check if this is the first node
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // find the last node to add this n
    ListNode* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return;
}

void deleteNode(ListNode* node)
{
    if (node == nullptr)
    {
        // do nothing
        return;
    }

    ListNode* nextNode = node->next;

    node->val = nextNode->val;
    node->next = nextNode->next;

    delete nextNode;
}

void PrintList(ListNode* head)
{
	STDPRINTLINE("Printing list: ");

	while (head != NULL)
	{
		STDPRINTLINE(head->val);
		head = head->next;
	}
	return;
}