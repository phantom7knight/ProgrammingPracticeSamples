#include "../../Helper Functions/Helper.hpp"
#include "../../Helper Functions/LinkedListHelper.hpp"

int main()
{
	Node* head = NULL;

	//adding examples
	AddNode(&head, 10);
	AddNode(&head, 20);
	AddNode(&head, 30);
	AddNode(&head, 40);
	AddNode(&head, 50);

	PrintList(head);

	return 0;
}