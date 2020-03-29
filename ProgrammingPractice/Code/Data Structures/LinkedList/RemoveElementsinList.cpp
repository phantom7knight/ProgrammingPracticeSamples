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

void AddNode(Node** a_node, const int data, Node** a_temp)
{
	Node* new_node = NULL;

	Node* temp_node = *a_node;

	//This is the first head 
	if (*a_node == NULL)
	{
		new_node = new Node(data);
		new_node->next = NULL;

		*a_node = new_node;
		*a_temp = new_node;
		
		return;
	}


	new_node = new Node(data);

	//find the end of the list to add the list
	while (temp_node != NULL)
	{
		if (temp_node->next == NULL)
		{
			temp_node->next = new_node;
			*a_temp = temp_node;
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


Node* RemoveMultiples(Node* head, int a_key)
{
	Node* newList = NULL;

	Node* temp = NULL;
	//Node* prev = NULL;

	if (head == NULL)
		return NULL;

	while (head != NULL)
	{
		if (newList == NULL && head->data != a_key)
		{
			AddNode(&newList, head->data, &temp);
			//temp = newList;
		}

		if (head->data == a_key)
		{
			if (head->next->next->data != a_key)
			{
				temp->next = head->next;
				temp = temp->next;
			}
		}
		else
		{
			AddNode(&newList, head->data,&temp);
			//temp = 
		}


		//go to the next node
		head = head->next;
	}





	return newList;
}





int main()
{
	Node* head = NULL;
	Node* lastNode = NULL;

	//adding examples
	AddNode(&head, 10, &lastNode);
	AddNode(&head, 20, &lastNode);
	AddNode(&head, 30, &lastNode);
	AddNode(&head, 40, &lastNode);
	AddNode(&head, 50, &lastNode);
	AddNode(&head, 30, &lastNode);
	//AddNode(&head, 60);
	//AddNode(&head, 20);

	PrintList(head);

	Node* newList = RemoveMultiples(head, 30);

	PrintList(newList);
	
	return 0;
}