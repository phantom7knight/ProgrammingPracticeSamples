#include "../../../Helper Functions/Helper.hpp"


struct Node
{
	Node* next = NULL;
	int data = 0;


	Node() : data(0), next(NULL)
	{

	}

	Node(int a_data) : data(a_data), next(NULL)
	{

	}

};

void AddNode(Node** a_node, const int data)
{
	Node* new_node = NULL;

	Node* temp_node = *a_node;

	//This is the first head 
	if (*a_node == NULL)
	{
		new_node = new Node(data);
		new_node->next = NULL;

		*a_node = new_node;

		return;
	}


	new_node = new Node(data);

	//find the end of the list to add the list
	while (temp_node != NULL)
	{
		if (temp_node->next == NULL)
		{
			temp_node->next = new_node;

			return;
		}

		temp_node = temp_node->next;
	}


	return;
}


void PrintList(Node* head)
{
	STDPRINTLINE("Printing list here");


	while (head != NULL)
	{
		STDPRINTLINE(head->data);
		head = head->next;
	}

	return;
}


Node* ReverseList(Node* Head)
{
	Node* reversedList = NULL;

	std::stack<Node*> stackList;

	while (Head != NULL)
	{
		stackList.push(Head);
		Head = Head->next;
	}

	while (!stackList.empty())
	{
		Node* poppedItem = stackList.top();
		
		AddNode(&reversedList, poppedItem->data);

		//pop the element from the stack
		stackList.pop();

	}

	return reversedList;
}




int main()
{
	Node* head = NULL;

	//adding examples
	AddNode(&head, 10);
	AddNode(&head, 20);
	AddNode(&head, 30);
	AddNode(&head, 40);
	AddNode(&head, 50);


	Node* reversedList = ReverseList(head);

	PrintList(head);
	STDPRINTLINE("=========================");
	PrintList(reversedList);

	return 0;
}