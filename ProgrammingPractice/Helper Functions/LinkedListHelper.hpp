#include "Helper.hpp"

struct Node
{
	Node* next = NULL;
	int data = 0;

	Node() : data(0), next(NULL){}

	Node(int a_data) : data(a_data), next(NULL){}

	Node(int x, Node* next) : data(x), next(next) {}
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

void DeleteNode(Node** a_node, const int a_key)
{
	Node* temp = *a_node;
	Node* prev = NULL;

	//check if the list is empty
	if (*a_node == NULL)
	{
		STDPRINTLINE("The list is empty so nothing to delete here");
		return;
	}

	//traverse the list till we find the node
	while (temp != NULL)
	{
		if (temp->data == a_key)
		{
			//We found the node and now we do operation

			Node* remove_node = temp;
			temp = temp->next;

			if (prev != NULL)
				prev->next = temp;


			//delete this node
			delete remove_node;

			return;
		}
		else
		{
			//we didn't find the node so go to next node
			prev = temp;
			temp = temp->next;
		}

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

