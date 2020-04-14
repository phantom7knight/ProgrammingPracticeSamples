#include "../../../Helper Functions/LinkedListHelper.hpp"

// LeetCode: Find middle node in a linked List

Node* middleNode1(Node* head) 
{
	Node* res = nullptr;

	if (head == NULL)
		return res;

	//allocate a temp node to point it to head
	Node* temp = head;

	//Input: [1,2,3,4,5]
	//Output: Node 3 from this list(Serialization : [3, 4, 5] )
	int count = 0;

	while (temp != NULL)
	{
		++count;
		temp = temp->next;
	}

	int middle = count / 2;

	while (middle != -1)
	{
		res = head;
		head = head->next;
		--middle;
	}

	return res;
}

Node* middleNode2(Node* head)
{

	Node* headFast = head;
	Node* headSlow = head;


	if (head)
	{
		while (nullptr != headFast && nullptr != headFast->next)
		{

			headFast = headFast->next->next;
			headSlow = headSlow->next;
		}
	}

	return  headSlow;

}



int main()
{
	Node* head = NULL;

	AddNode(&head, 1);
	AddNode(&head, 2);
	AddNode(&head, 3);
	AddNode(&head, 4);
	AddNode(&head, 5);
	AddNode(&head, 6);

	//PrintList(head);

	Node* middle = middleNode1(head);

	STDPRINTLINE(middle->data);

	middle = nullptr;

	middle = middleNode2(head);

	STDPRINTLINE(middle->data);



	return 0;
}