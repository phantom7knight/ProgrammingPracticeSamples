#include "../../../Helper Functions/Helper.hpp"
#include "../../../Helper Functions/LinkedListHelper.hpp"

#define GoodSoln

#ifdef BadSoln
// Runtime: 16 ms
bool isPalindrome(ListNode* head)
{
	STDVECTOR(int) values;
	// loop though the whole list
	while (head != NULL)
	{
		values.push_back(head->val);
		head = head->next;
	}

	int first = 0, last = values.size() - 1;

	while (first < last)
	{
		if (values[first] != values[last] && first != last)
		{
			return false;
		}

		first++;
		last--;
	}

	return true;
}
#endif // BadSoln

#ifdef GoodSoln
// add O(1) and O(n) solution
bool isPalindrome(ListNode* head)
{



	return true;
}
#endif // GoodSoln

int main()
{
	STDPRINTLINE("Hello World!!");

	ListNode* head = NULL;
	
	AddNode(&head, 10);
	AddNode(&head, 20);
	AddNode(&head, 30);
	AddNode(&head, 20);
	AddNode(&head, 10);

	bool res = isPalindrome(head);

	BREAKPOINTTEMPVAR;

	return 0;
}