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

int getBinarytoInt(std::vector<int> listValues)
{
	int res = 0;
	int sizeList = listValues.size() - 1;
	
	for (int i = 0; i <= sizeList; ++i)
	{
		res += std::pow(2, sizeList - (i)) * listValues[i];
	}

	return res;
}


int getDecimalValue(Node* head)
{
	std::vector<int> listValues;
	int intNum = 0;

	while (head != NULL)
	{
		listValues.push_back(head->data);
		head = head->next;
	}

	intNum = getBinarytoInt(listValues);




	return intNum;

}




int main()
{
	Node* head = NULL;

	//adding examples
	AddNode(&head, 1);
	AddNode(&head, 0);
	AddNode(&head, 1);

	PrintList(head);

	int res = getDecimalValue(head);

	STDPRINTLINE(res);

	return 0;
}