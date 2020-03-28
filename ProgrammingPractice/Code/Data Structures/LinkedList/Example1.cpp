

//=================================================================================================
//Linked List example
//=================================================================================================


//template<typename T>
//struct Node
//{
//	T data;
//	Node* next;
//};
//
//
//void PrintNodesinList(Node<int> *head)
//{
//	while (head != NULL)
//	{
//		STDPRINTLINE(head->data);
//		head = head->next;
//	}
//}
//
//
//void InsertNodeinList(Node<int> *head, int data)
//{
//	Node<int>* tail;
//
//	tail = head;
//
//	//Get the last node
//	while (tail->next != NULL)
//	{
//		tail = tail->next;
//	}
//
//	//Add new node at the end of tail
//
//	Node<int>* newNode = new Node<int>;
//
//	tail->next = newNode;
//	newNode->data = data;
//	newNode->next = NULL;
//
//	PrintNodesinList(head);
//}
//
//
//int main()
//{
//	//Node 1
//	Node<int> *n1;
//	n1 = new Node<int>;
//
//	n1->data = 16;
//	n1->next = NULL;
//
//	//Node 2
//	Node<int> *n2;
//
//	n2 = new Node<int>;
//	n2->data = 13;
//	n1->next = n2;
//	n2->next = NULL;
//
//
//	//============================================
//	//To Print elements of the Linked List
//	Node<int> *Head;
//
//	//Now Head points to n1
//	Head = n1;
//
//	//PrintNodesinList(Head);
//
//	//============================================
//	
//	
//	InsertNodeinList(Head, 30);
//	
//
//	return 0;
//}

