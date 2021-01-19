#include "../../../Helper Functions/Helper.hpp"

struct ListNode 
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void PrintNode(ListNode* head)
{
    while (head != NULL)
    {
        STDPRINTLINE(head->val);
        head = head->next;
    }
}

void AddNode(ListNode** head, int val)
{
    ListNode* newNode = new ListNode(val);

    // check if this is the first node
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // find the last node to add this n
    ListNode* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return;
}

void AddNodeInFront(ListNode** head, int val)
{
    ListNode* newNode = new ListNode(val);

    // check if this is the first node
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // find the last node to add this n
    ListNode* temp = *head;

    newNode->next = temp;
    *head = newNode;

    return;
}


ListNode* ReverseListIterative(ListNode* head)
{
    ListNode* newList = NULL;

    ListNode* temp = head;
    while (temp != NULL)
    {
        AddNodeInFront(&newList, temp->val);

        // update the list iterator
        temp = temp->next;
    }

    return newList;
}

ListNode* ReverseListRecursive(ListNode* head)
{
    if (head == NULL || head->next == nullptr)
    {
        return head;
    }

    ListNode* newlist = ReverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newlist;

}



int main()
{
    STDPRINTLINE("Hello World!!!");

    ListNode* head = NULL;

    AddNode(&head, 10);
    AddNode(&head, 20);
    AddNode(&head, 30);

    PrintNode(head);

    STDPRINTLINE("===========");
    STDPRINTLINE("Iterative");

    ListNode* newList1 = ReverseListIterative(head);

    PrintNode(newList1);

    STDPRINTLINE("===========");
    STDPRINTLINE("Recursive");

    ListNode* newList2 = ReverseListRecursive(head);

    PrintNode(newList2);

    STDPRINTLINE("===========");

    return 0;
}