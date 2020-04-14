#include "../../../Helper Functions/Helper.hpp"
#include "LinkedListHelper.hpp"

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