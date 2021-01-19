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

void AddNode(ListNode** head, ListNode* newNode)
{
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

void deleteNode(ListNode* node) 
{
    if (node == nullptr)
    {
        // do nothing
        return;
    }

    ListNode* nextNode = node->next;

    node->val = nextNode->val;
    node->next = nextNode->next;

    delete nextNode;
}

int main()
{
    STDPRINTLINE("Hello World!!!");

    ListNode* head = NULL;

    AddNode(&head, 10);
    
    ListNode* newNode1 = new ListNode(20);
    AddNode(&head, newNode1);

    ListNode* newNode2 = new ListNode(30);
    AddNode(&head, newNode2);

    AddNode(&head, 40);

    PrintNode(head);

    STDPRINTLINE("===========");

    deleteNode(newNode1);

    PrintNode(head);

    STDPRINTLINE("===========");

    return 0;
}