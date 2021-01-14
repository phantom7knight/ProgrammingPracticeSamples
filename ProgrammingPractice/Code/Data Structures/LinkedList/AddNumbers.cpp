#include "../../../Helper Functions/Helper.hpp"
#include "../../../Helper Functions/LinkedListHelper.hpp"

//LeetCode :2


static int totalDigits = 0;

int ExtractNumber(Node* a_list)
{
	int res = 0;

	// if list is null then we return 0 as result
	if (a_list == NULL)
		return res;

	// stores the current iteration for adding power of the number
	int i = 0;

	// Go through the whole list
	while (a_list != NULL)
	{
		if (a_list->data != 0)
		{
			res += POWERTOVAL(10, i) * a_list->data;
		}
		a_list = a_list->next;
		++i;
	}

	if (i > totalDigits)
	{
		totalDigits = i;
	}

	return res;
}

void AddInFront(Node* a_list, int value)
{
	if (a_list == NULL)
	{
		// Add the initial node
		// if empty
		AddNode(&a_list, value);
		return;
	}

	Node* head = a_list;
	
	Node* newNode = new Node(value);
	
	newNode->next = a_list;

	return;
}

Node* addTwoNumbers(Node* l1, Node* l2)
{
	int value1 = ExtractNumber(l1);
	int value2 = ExtractNumber(l2);

	int sum = value1 + value2;

	Node* result = NULL;

	int i = totalDigits;
	int extracted = sum;
	// 807
	while (extracted != 0)
	{
		int data = 0;

		data = extracted / POWERTOVAL(10, i-1);

		AddInFront(result, data);

		extracted -= data *POWERTOVAL(10, i - 1);
		i--;

	}

	return NULL;
}

int main()
{
	Node* list1 = NULL;

	//adding examples
	AddNode(&list1, 2);
	AddNode(&list1, 4);
	AddNode(&list1, 3);

	Node* list2 = NULL;

	//adding examples
	AddNode(&list2, 5);
	AddNode(&list2, 6);
	AddNode(&list2, 4);

	Node* result = addTwoNumbers(list1, list2);


	return 0;
}