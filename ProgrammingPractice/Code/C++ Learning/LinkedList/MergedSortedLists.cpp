#include "../../../Helper Functions/LinkedListHelper.hpp"

// Runtime: 8 ms

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
	ListNode* mergedList = NULL;

	if (l1 == NULL)
	{
		return l2;
	}

	if(l2 == NULL)
	{
		return l1;
	}

	if (l1 == NULL && l2 == NULL)
	{
		return mergedList;
	}

	while (l1 != NULL || l2 != NULL)
	{
		if (l1 == NULL && l2 != NULL)
		{
			AddNode(&mergedList, l2->val);
			l2 = l2->next;
			continue;
		}

		if (l2 == NULL && l1 != NULL)
		{
			AddNode(&mergedList, l1->val);
			l1 = l1->next;
			continue;
		}

		if (l1->val == l2->val)
		{

			AddNode(&mergedList, l1->val);
			AddNode(&mergedList, l2->val);

			// update pointers
			l1 = l1->next;
			l2 = l2->next;

			continue;
		}

		if (l1->val < l2->val)
		{
			AddNode(&mergedList, l1->val);
			l1 = l1->next;
			continue;
		}

		if (l1->val > l2->val)
		{
			AddNode(&mergedList, l2->val);
			l2 = l2->next;
			continue;
		}
	}

	return mergedList;
}

int main()
{
	STDPRINTLINE("Hello World!");

	ListNode* l1 = NULL;
	ListNode* l2 = NULL;

	AddNode(&l1, 2);
	//AddNode(&l1, 3);
	//AddNode(&l1, 5);

	AddNode(&l2, 1);
	//AddNode(&l2, 4);
	//AddNode(&l2, 6);

	ListNode* res =	mergeTwoLists(l1, l2);

	PrintList(res);

	return 0;
}
