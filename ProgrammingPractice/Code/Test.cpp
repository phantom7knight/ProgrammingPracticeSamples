//	Test1.cpp.cpp : Defines the entry point for the console application.
//	Old File Name:Test1.cpp.cpp
//	UNCOMMENT ANY FUNCTION WITH IT'S CORRESPONDING MAIN() TO RUN THE PROGRAM. 
//	HIT F5 TO RUN THE PROGRAM

#include "stdafx.h"



//=================================================================================================
//code to generate India Map
//https://www.geeksforgeeks.org/code-to-generate-the-map-of-india-with-explanation/
//=================================================================================================
/*int main()
{
	int a = 10, b = 0, c = 10;

	// The encoded string after removing first 31 characters 
	// Its individual characters determine how many spaces 
	// or exclamation marks to draw consecutively. 
	const char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq "
		"TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
		"OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm "
		"SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";

	while (a != 0)
	{
		// read each character of encoded string 
		a = str[b++];
		while (a-- > 64)
		{
			if (++c == 90) // 'Z' is 90 in ascii 
			{
				// reset c to 10 when the end of line is reached 
				c = 10;        // '\n' is 10 in ascii 

				// print newline 
				putchar('\n'); // or putchar(c); 
			}
			else
			{
				// draw the appropriate character 
				// depending on whether b is even or odd 
				if (b % 2 == 0)
					putchar('!');
				else
					putchar(' ');
			}
		}
	}

	return 0;
}*/


//=================================================================================================
//Reverse a string
//=================================================================================================

/*void reverseString(std::vector<char>& s)
{
	int total_count = s.size();
	for (int i = 0; i < total_count / 2; ++i)
	{
		std::swap(s[i], s[total_count - i -1]);
	}

	for (int i = 0; i < total_count; ++i)
	{
		STDPRINTLINE(s[i]);
	}

	return;
}

int main()
{
	std::vector<char> string_here = { 'h','e','l','j','o','b' };

	reverseString(string_here);


	return 0;
}*/

//=================================================================================================
//coin change problem using dynamic programming
//=================================================================================================

/*int GetWaysforDenomination(int a_key, const std::vector<int> arr_Coins)
{
	int result = 0;

	//Init an array to store the number of ways 
	std::vector<int> tracknumofWays;
	tracknumofWays.resize(a_key + 1, 0);
	tracknumofWays[0] = 1;

	int count_of_coins = arr_Coins.size();
	
	for (int i = 0; i < count_of_coins; ++i)
	{
		for (int j = 0; j < tracknumofWays.size(); ++j)
		{
			//IDEA: ways[j - coins[i]] + ways[j]
			

			//don't calculate if the coin value is less than coin value
			if (j < arr_Coins[i])
				continue;
			else
			{
				tracknumofWays[j] = tracknumofWays[j - arr_Coins[i]] + tracknumofWays[j];
			}


		}
	}

	result = tracknumofWays[a_key ];

	return result;
}



int main()
{
	const std::vector<int> CoinsArr = { 1,5,10 };

	int key = 12;
	//int size = sizeof(CoinsArr) / sizeof(CoinsArr[0]);
	int numofWays = GetWaysforDenomination(key, CoinsArr);

	STDPRINTLINE("The number of ways to get denomination for " << key << " is " << numofWays);

	return 0;
}*/


//=================================================================================================
//pointer/struct size testing
//=================================================================================================

/*
class Testing
{
public:

	int* a = new int;
	char* b = new char;
	unsigned int* c = new unsigned int;
	bool d = 0;
	float e = 0.0f;
	int f = 10;
	unsigned int g = 10;

	void Print()
	{
		STDPRINTLINE("Yolo");
	}
};

struct Testing_2
{
	int* a = new int;
	char* b = new char;
	unsigned int* c = new unsigned int;
	bool d = 0;
	float e = 0.0f;
	int f = 10;
	unsigned int g = 10;

	void Print()
	{
		STDPRINTLINE("This is Testing_2");
	}

private:

	int abc = 111;
};

struct Testing_3 : Testing_2
{
	int* a = new int;
	char* b = new char;
	unsigned int* c = new unsigned int;
	bool d = 0;
	float e = 0.0f;
	int f = 10;
	unsigned int g = 10;

	void Print2()
	{
		STDPRINTLINE("This is Testing_3");
		Print();
	}
};




int main()
{
	Testing obj ;
	
	STDPRINTLINE(sizeof(obj));
	STDPRINTLINE(sizeof(obj.a));
	STDPRINTLINE(sizeof(obj.c));
	STDPRINTLINE(sizeof(obj.e));
	STDPRINTLINE(sizeof(obj.f));
	STDPRINTLINE(sizeof(obj.g));


	Testing_2 obj2;

	STDPRINTLINE(sizeof(obj2));
	STDPRINTLINE(sizeof(obj2.a));
	STDPRINTLINE(sizeof(obj2.c));
	STDPRINTLINE(sizeof(obj2.e));
	STDPRINTLINE(sizeof(obj2.f));
	STDPRINTLINE(sizeof(obj2.g));

	Testing_3 obj3;

	obj3.Print();
	obj3.Print2();

	return 0;
}
*/

//=================================================================================================
//Iterative and Recursive example
//=================================================================================================

/*int RecursiveFactorial(int num)
{
	if (num == 1)
	{
		return 1 ;
	}

	return num * RecursiveFactorial(num - 1);
	
}


int IterativeFactorial(int num)
{
	int res = 1;

	for (int i = 2; i <= num; ++i)
	{
		res *= i;
	}
	return res;
}

int main()
{
	int num = 6;
	int res = 0;

	res = RecursiveFactorial(num);
	STDPRINTLINE(res);

	res = IterativeFactorial(num);
	STDPRINTLINE(res);

	return 0;
}*/

//=================================================================================================
//itoa conversion without using any built-in functions
//=================================================================================================

//Get total number of digits
/*int getDigitsCount(int val)
{
	int res = 0;

	while (val != 0)
	{
		val = val / 10;
		++res;
	}

	return res;
}

//function to swap values
void SwapValues(char& a, char& b)
{
	char temp;

	temp = a;
	a = b;
	b = temp;

}

void ReverseString(char str[], int len)
{
	int i = 0;
	int j = len - 1;

	//keep looping till "i" surpasses "j"
	while (i < j)
	{
		
		SwapValues(str[i], str[j]);
		++i;
		--j;
	}
}


char* itoA(int value, int base)
{
	//Get the count so that we can create an array
	int count = getDigitsCount(value);
	char* result_here = new char[count-1];

	int i = 0;
	bool isNegative = false;

	if (value == 0)
	{
		result_here[++i] = '0';

		result_here[i] = '\0';

		return result_here;
	}

	//if negative convert value to -value
	if (value < 0)
	{
		value = -value;
		isNegative = true;
	}

	while (value != 0)
	{
		//Get the remainder of the "value" to get current digit
		int remainder = value % base;
		if (remainder > 9)
		{
			result_here[i] = (remainder - 10) + 'a';
			++i;
		}
		else
		{
			result_here[i] = remainder + '0';
			++i;
		}
		//get the next number by reducing the "value"
		value = value / base;
	
	}

	//We need to add "-" sign since it is negative value
	if (isNegative)
	{
		result_here[i] = '-';
		++i;
	}

	//Append Null terminating string to depict the end of the string
	result_here[i] = '\0';


	//we need to reverse the string
	ReverseString(result_here, i);

	return result_here;
}


int main()
{
	char* res;// = new char[1];

	res = itoA(456, 10);
	//res = _itoa(5, res, 10);


	STDPRINTLINE(res[0]);

	//delete the char ptr
	//delete[] res;

	return 0;

}*/

//=================================================================================================


//=================================================================================================
//Linked List Copy
//=================================================================================================

/*struct Node
{
	Node* next;
	int data;
};


//Push Data into the List
void PushData(Node** head, int value, Node** tail)
{
	//Create a new node to fill data into
	Node* new_node = new Node;

	//Fill the data into the new node also set node->next to NULL
	//since this node will be connected to the last node in list.
	new_node->data = value;
	new_node->next = NULL;

	//if the whole list is empty
	if (*head == NULL)// && tail == NULL)
	{
		*head = new_node;
		*tail = new_node;

		//set new node's next as null since there aren't any other nodes
		new_node->next = NULL;

		//since done filling the data leave now, only for the first time.
		return;
	}

	//create fake copies for head and tail
	Node* head_copy = *head;
	Node* tail_copy = *tail;

	//if the list is not empty
	if (tail_copy->next == NULL)
	{
		tail_copy->next = new_node;

		//TODO: Remove it after testing
		//already set above 
		new_node->next = NULL;

		*tail = new_node;
	}

	return;
}

//Print the List
void PrintList(Node* head)
{
	if (head == NULL)
	{
		std::cout << "the list is empty \n";
		
		//we are done here, return now!
		return;
	}


	//till the given node's next is valid
 	while (head)
	{
		//print the data
		std::cout << head->data << " ";

		//update to the next node
		head = head->next;
	}

	return;
}

//Clear and deallocate the List
void ClearList(Node** head_list)
{
	Node* node;
	node = *head_list;

	if (node == NULL)
	{
		//nothing to delete here
		return;
	}
	else
	{
		while (node->next != NULL)
		{
			node->data = node->next->data;
			node = *head_list;
			node = node->next;
		}
		node->next = NULL;
	}
}

Node* split(Node** list)
{
	// The split function does not allocate new memory, but does modify the input list.
	// The result of the split function should be:
	//		1. The input list should now point to the head of a list that contains only the even data values.
	//		2. Return the head pointer to a list containing only the odd data values from the input list.
	//		3. The new lists should preserve the order found in the original list.

	//create a odd list to return
	Node* oddListHead = NULL;
	Node* oddListCopy = NULL;
	Node* headCopy = *list;
	Node* prevNode = NULL;

	//if there are no nodes at all
	if (headCopy == NULL)
	{
		return oddListHead;
	}

	while (headCopy != NULL)
	{
		//check if the given node is odd
		if (headCopy->data % 2 != 0)
		{
			//Update the head only once
			if (oddListHead == NULL)
			{
				oddListHead = headCopy;
				oddListCopy = oddListHead;
				//oddListCopy->next = NULL;
			}
			else
			{
				//copy this node to the list
				oddListCopy->next = headCopy;

				//update the odd list copy to the ending node
				oddListCopy = oddListCopy->next;

				
			}
			
			// remove this odd node from the even list



		}
		//even
		else
		{
			if (prevNode == NULL)
			{
				prevNode = headCopy;
				*list = headCopy;
			}
			else
			{
				//link prev Node to this node
				prevNode->next = headCopy;
				prevNode = prevNode->next;
			}
			
		}
		


		//update head copy
		headCopy = headCopy->next;
	}

	//return the list finally!
	return oddListHead;

}



int main(int argc, const char* argv[])
{
	std::cout << "\n\nEmber Interview Test:\n\n";


	// Include sample code which calls the split function
	Node* head = NULL;

	Node* tail = NULL;

	int Tcase = 0;

	switch (Tcase)
	{
	case 0:
	{
		//Push Data into the list
		PushData(&head, 2, &tail);
		PushData(&head, 10, &tail);
		PushData(&head, 12, &tail);
		PushData(&head, 20, &tail);
	}
	break;
	case 1:
	{
		//Push Data into the list
		PushData(&head, 5, &tail);
		PushData(&head, 10, &tail);
		PushData(&head, 15, &tail);
		PushData(&head, 20, &tail);
	}
	break;
	case 2:
	{
		//Push Data into the list
		PushData(&head, 5, &tail);
		PushData(&head, 13, &tail);
		PushData(&head, 15, &tail);
		PushData(&head, 21, &tail);
	}
	break;
	case 3:
	{
		//Push Data into the list
		//dont push any data
	}
	break;
	case 4:
	{
		//Push Data into the list
		PushData(&head, 2, &tail);
		PushData(&head, 12, &tail);
		PushData(&head, 15, &tail);
		PushData(&head, 25, &tail);
	}
	break;
	}

	
	
	std::cout << "The initial input list is \n";
	PrintList(head);
	std::cout << "\n============================================= \n";


	Node* result = split(&head);
	
	std::cout << "The odd list is \n";
	PrintList(result);
	std::cout << "\n============================================= \n";


	//clear the result and deallocate all the nodes
	std::cout << "The list is deallocated \n";
	ClearList(&result);

	std::cout << "\n\nEND\n\n";
	return 0;
}*/



//=================================================================================================
//ClockWise matrix
//=================================================================================================

/*void BuildStringFromMatrix(int* Matrix, int NumRows, int NumColumns,
	char* OutBuffer)
{

	//Example 1
	//====================
	//1		2		3		4
	//5		6		7		8
	//9		10		11		12

	//sent
	//1 2 3 4 5 6 7 8 9 10 11 12 

	//Expected
	//1 2 3 4 8 12 11 10 9 5 6 7



	//Example 2
	//====================
	//1		2		3
	//4		5		6
	//7		8		9


	//sent
	//1 2 3 4 5 6 7 8 9

	//Expected
	//1 2 3 6 9 8 7 4 5

	
	//Get the col & row start and end index in the beginning
	int colB = 0, colE = NumColumns;
	int RowB = 0, RowE = NumRows;

	//set a temp buffer which will store out for us but in int format
	int* intOutBuffer = new int[sizeof(Matrix) + 1];
	int res_index = 0; // index for the result


	//while we don't reach the middle element
	while (RowB < RowE && colB < colE)
	{
		//start with row 1
		for (int i = colB; i < colE; ++i)
		{
			intOutBuffer[res_index++] = Matrix[NumColumns*RowB + (i)];
		}
		//update the row beginning from 0 to next one
		//since we already took the first row
		RowB++;

		//compute the right most column
		for (int i = RowB; i < RowE; ++i)
		{
			intOutBuffer[res_index++] = Matrix[i * (NumColumns)+(colE - 1)];
		}

		//we have computed the last column so update
		//the ColE to the next least one.
		colE--;

		if (RowB < RowE)
		{
			//Compute the last row 
			for (int i = colE - 1; i >= colB; i--)
			{
				intOutBuffer[res_index++] = Matrix[i + (RowE - 1) * (NumColumns)];
			}

			//Now we have updated last row so we reduce the rowE count
			--RowE;

		}
		
		if (colB < colE)
		{
			//take the fist column and take those values
			for (int i = RowE - 1; i >= RowB; --i)
			{
				intOutBuffer[res_index++] = Matrix[i * (NumColumns) + colB];
			}

			//increase the column beggining
			++colB;
		}
		
		

	}

	std::ostringstream charValue;
	
	for (int i = 0; i < NumColumns * NumRows; ++i)
	{
		//try to convert int to a character using
		//std's itoa

		//_itoa(intOutBuffer[i], &OutBuffer[i], 10);
		charValue << intOutBuffer[i] << ", ";

	}
	strcpy(OutBuffer, charValue.str().c_str());
	intOutBuffer[strlen(OutBuffer) - 2] = '\0';



}


int main()
{
	int* mat = new int[12];

	for (int i = 0; i < 12; ++i)
	{
		mat[i] = i + 1;
	}

	char* result = new char[12];

	BuildStringFromMatrix(mat, 3, 4, result);

	
}*/





//=================================================================================================
//File Operations
//=================================================================================================


//int main()
//{
//	std::ofstream file{ "TestingFile.cpp" };
//
//
//	file << "C:/VulkanSDK/1.1.126.0/Bin/glslangValidator.exe -V Basic.vert  -o BinaryCode/Basic.vert.spv \n" <<
//		"C: / VulkanSDK / 1.1.126.0 / Bin / glslangValidator.exe - V Basic.frag - o BinaryCode / Basic.frag.spv \n" <<
//		"C : / VulkanSDK / 1.1.126.0 / Bin / glslangValidator.exe - V Basic.frag - o BinaryCode / Dissolve.vert.spv \n" <<
//		"C : / VulkanSDK / 1.1.126.0 / Bin / glslangValidator.exe - V Basic.frag - o BinaryCode / Dissolve.frag.spv \n" <<
//		"C : / VulkanSDK / 1.1.126.0 / Bin / glslangValidator.exe - V Basic.frag - o BinaryCode / ToonShader.vert.spv \n" <<
//		"C : / VulkanSDK / 1.1.126.0 / Bin / glslangValidator.exe - V Basic.frag - o BinaryCode / ToonShader.frag.spv \n" <<
//		"pause \n";
//
//	file.close();
//
//	return 0;
//}
//



//class BaseClass
//{
//public:
//	BaseClass() {}
//	~BaseClass() {}
//
//	virtual void Print()
//	{
//		STDPRINTLINE("This is base class");
//	}
//};
//
//
//class DerivedClass1 : BaseClass
//{
//public:
//	DerivedClass1() {}
//	~DerivedClass1() {}
//
//	virtual void Print()
//	{
//		STDPRINTLINE("This is Derived class 1");
//	}
//};
//
//int main()
//{
//	 //BaseClass *obj = new DerivedClass1();
//
//
//}


//=================================================================================================
//Size of a class with and without Virtual functions [makes use of Virtual Pointer]
//=================================================================================================

//class classWithVirtual
//{
//public:
//	char* b = nullptr;
//	int a = 5;
//	classWithVirtual() {}
//	~classWithVirtual() {}
//	virtual void Print()
//	{
//		STDPRINTLINE("Ola!");
//	}
//};
//
//
//class DerivedClass :classWithVirtual
//{
//	int abc = 0;
//public:
//	DerivedClass() {}
//	~DerivedClass() {}
//
//};
//
//class classWithOutVirtual
//{
//public:
//	char* b = nullptr;
//	int a = 5;
//	classWithOutVirtual() {}
//	~classWithOutVirtual() {}
//	
//};
//
//int main()
//{
//	
//	classWithOutVirtual a;
//	classWithVirtual b;
//
//	STDPRINTLINE("Size of class with virtual function " << sizeof(classWithVirtual));
//	STDPRINTLINE("Size of class without Derived Virtual function " << sizeof(DerivedClass));
//	STDPRINTLINE("Size of class without virtual function " << sizeof(classWithOutVirtual));
//
//	return 0;
//}






//=================================================================================================
//Different size variations of the struct
//=================================================================================================


//struct mystruct_A
//{
//	char a;
//	int b;
//	char c;
//} x;
//
//struct mystruct_B
//{
//	int b;
//	char a;
//} y;
//
//struct mystruct_C {
//
//	int x;
//	
//	
//	short int y;
//	double z;
//
//};
//
//struct mystruct_D {
//	// sizeof(double) = 8 
//	double z;
//
//	// sizeof(short int) = 2 
//	short int y;
//	// Padding of 2 bytes 
//
//	// sizeof(int) = 4 
//	int x;
//};
//
//
//int main()
//{
//
//	STDPRINTLINE(sizeof(mystruct_A));
//	STDPRINTLINE(sizeof(mystruct_B));
//	STDPRINTLINE(sizeof(mystruct_C));
//	STDPRINTLINE(sizeof(mystruct_D));
//
//
//	return 0;
//}



//=================================================================================================
//Generate permutations for given array
//=================================================================================================


//int main()
//{
//
//	int arr[3] = { 1,2,3};
//
//	do{
//		STDPRINTLINE(arr[0] << " " << arr[1] << " " << arr[2] );
//	}while (std::next_permutation(arr, arr + 3));
//
//	return 0;
//}


//=================================================================================================
//Small Example to showcase friend class
//=================================================================================================

//class Base
//{
//private:
//	int a = 10;
//protected:
//	int b = 20;
//public:
//	int c = 30;
//
//	friend class Derived;
//
//};
//
//class Derived
//{
//public:
//	void Print()
//	{
//		Base b;
//		STDPRINTLINE(b.a);//This compiles since derived is base class's friend
//	}
//};
//
//int main()
//{
//	Derived d;
//
//	d.Print();
//
//
//	return 0;
//}



//=================================================================================================
//Swapping 2 elements without using any buffer/temporary
//=================================================================================================


//void Swap(int &a, int &b)
//{
//	a = a * b;
//	b = a / b;
//	a = a / b;
//}
//
//int main()
//{
//	int a = 2, b = 4;
//
//	Swap(a,b);
//	STDPRINTLINE(a);
//	STDPRINTLINE(b);
//
//	return 0;
//}

//=================================================================================================
//Linked List Copy and Reversal
//=================================================================================================

//struct Node
//{
//	int data;
//	Node* next;
//
//	Node(): data(0),next(nullptr)
//	{
//
//	}
//
//	Node(int a_data): data(a_data)
//	{
//		next = new Node();
//		next = NULL;
//	}
//
//};
//
//void PrintLinkedList(Node* head)
//{
//
//	while (head != NULL)
//	{
//		STDPRINTLINE(head->data);
//		head = head->next;
//	}
//}
//
//Node* CopyLinkedList(Node* originalList)
//{
//	Node* copy_Head = NULL;
//	Node* copy_List2 = NULL;
//	Node* temp = NULL;
//
//	while (originalList != NULL)
//	{
//		//Store data into temp node first
//		temp = new Node();
//
//		temp->data = originalList->data;
//		temp->next = originalList->next;
//
//		//Move to the next node
//		originalList = originalList->next;
//
//		copy_List2 = temp;
//
//		//Store the head of new list
//		if (copy_Head == NULL)
//		{
//			copy_Head = temp;
//		}
//
//		copy_List2 = copy_List2->next;
//
//
//
//
//	}
//
//
//	return copy_Head;
//}
//
//void ReverseLinkedList(Node* Head)
//{
//	//Initialize pointers to point future changeable pointers
//	Node* ptr1 = NULL;
//	Node* ptr2 = NULL;
//	Node* future_pointer = NULL;
//
//	//Init pointers
//	ptr1 = Head;
//	ptr2 = Head->next;
//	future_pointer = Head->next;
//	
//	while (future_pointer != NULL)
//	{
//		//If ptr1 is pointing Head 
//		//make sure it is pointing 
//		//nothing else
//		if (ptr1 == Head)
//			ptr1->next = NULL;
//
//		future_pointer = future_pointer->next;//Update this to next pointer
//		ptr2->next = ptr1;
//		
//		ptr1 = ptr2;//Update Ptr1 position
//		ptr2 = future_pointer;
//		
//
//	}
//
//	PrintLinkedList(ptr1);
//
//
//}
//
//
//
//int main()
//{
//	Node* n1;
//	n1 = new Node(10);
//
//	Node* n2;
//	n2 = new Node(20);
//	n1->next = n2;
//
//	Node* n3;
//	n3 = new Node(30);
//	n2->next = n3;
//	
//	//Print proper linked list
//	//without reversal
//	PrintLinkedList(n1);
//
//	STDPRINTLINE("=======================================================================");
//
//	Node* List2 = CopyLinkedList(n1);
//	
//	PrintLinkedList(List2);
//	
//	STDPRINTLINE("=======================================================================");
//
//	ReverseLinkedList(List2);
//
//	//Delete the new'ed pointers
//	delete(n1);
//	delete(n2);
//	delete(n3);
//
//
//	return 0;
//}




//=================================================================================================
//DS implementation's
//=================================================================================================


//
//int main()
//{
//	//List which is basically linked list
//	std::list<int> list_example{ 1,2,3,4,5,4,3,2,1 };
//	
//	for (auto i : list_example)
//	{
//		STDPRINTLINE(i);
//	}
//
//	STDPRINTLINE("=======================================================================");
//
//	//Map which uses key-value pairs
//	//All the keys are sorted
//
//	std::map<int, std::string> map_example;
//
//	map_example.insert(std::make_pair<int, std::string>(2, "Rohit"));
//	map_example.insert(std::make_pair<int, std::string>(1, "Tolety"));
//
//	for (auto i : map_example)
//	{
//		STDPRINTLINE(i.second);
//	}
//
//	//print a value "at" any given key value
//	STDPRINTLINE("Value in map example at 1 : " << map_example.at(1));
//
//	
//	STDPRINTLINE("=======================================================================");
//
//	//Unordered Map same as Map but doesn't sort keys here
//
//	std::unordered_map<int, std::string> unorderedMap_example;
//
//	unorderedMap_example.insert(std::make_pair<int, std::string>(2, "Rohit"));
//	unorderedMap_example.insert(std::make_pair<int, std::string>(1, "Tolety"));
//
//
//	for (auto i : unorderedMap_example)
//	{
//		STDPRINTLINE(i.second);
//	}
//
//	//print a value "at" any given key value
//	STDPRINTLINE("Value in unordered map example at 1 : " << unorderedMap_example.at(2));
//
//	STDPRINTLINE("=======================================================================");
//
//
//	//Set in STL
//
//	std::set<int, std::less<int>> set_example;
//
//	set_example.insert(10);
//	set_example.insert(20);
//	set_example.insert(30);
//	set_example.insert(5);
//	set_example.insert(50);
//	set_example.insert(10);//Removes this element since it is duplicate
//
//	for (auto i : set_example)
//	{
//		STDPRINTLINE(i);
//	}
//
//	STDPRINTLINE("=======================================================================");
//
//
//	return 0;
//}








//=================================================================================================
//Template example with a class
//=================================================================================================


//template<typename T>
//T Power(T value, int power)
//{
//	T result = T(1);
//
//	for (int i = 0; i < power; ++i)
//	{
//		result = result * value;
//	}
//
//	return result;
//}
//
//class C
//{
//public:
//
//	C() :num(10)
//	{
//
//	}
//
//	C(int value) :num(value)
//	{
//
//	}
//
//	void operator=(const C& rhs)
//	{
//		num = rhs.num;
//	}
//
//	C operator*(const C& rhs)
//	{
//		num *= rhs.num;
//
//		return *this;
//	}
//
//	int getNum()
//	{
//		return num;
//	}
//
//
//private:
//
//	int num;
//};
//
//int main()
//{
//	int i = 3;
//	int res1 = Power(i, 4);
//
//	STDPRINTLINE(res1);
//
//	double d = 1.1;
//	double res2 = Power(d, 2);
//
//	STDPRINTLINE(res2);
//
//	C c;
//	C res3 = Power(c, 2);
//
//	STDPRINTLINE(res3.getNum());
//
//	return 0;
//
//}


//=================================================================================================


////C++ 11 Initialization
//using CT = std::list<int>;
//
//int main()
//{
//	CT v{ 1,2,3,4,5 };
//
//	CT::iterator b = v.begin();
//	CT a;
//
// 	for (;b != v.end(); ++b)
//	{
//		a.push_back(*b);
//		if (*b % 2 == 0)
//		{
//			a.push_back(*b);
//		}
//	}
//
//	for (auto const& e1 : a)
//	{
//		STDPRINTLINE(e1);
//	}
//
//	return 0;
//}


//=================================================================================================
//Base-Derived class test
//=================================================================================================

//class B
//{
//	int i;
//
//public:
//	B() {}
//	B(int _i) : i(_i)
//	{
//
//	}
//
//	B& operator=(const B& rhs)
//	{
//		this->i = rhs.i;
//		return *this;
//	}
//
//	B(const B& _b)
//	{
//		i = _b.i;
//	}
//
//};
//
//class D : public B
//{
//public:
//
//	D() {}
//
//	D(const D& _d)
//	{
//		*this = _d;
//	}
//
//
//	D& operator=(const D& rhs)
//	{
//		*this = rhs;
//	}
//
//};


//=================================================================================================
// Find element in a large array
//=================================================================================================

//int main()
//{
//
//	std::string bitmask(2, 1);
//	int values[2000];
//	int **ints = new int*[500];
//	
//	for (int i = 0; i < 100; ++i)
//	{
//
//		ints[i] = new int(i);
//	}
//
//	int *a = ints[11];
//
//	PRINT_LINE << *a << END_LINE;
//
//
//	rand();
//	for (int i = 0; i < 2000; ++i)
//	{
//		//values[i] = (int)(i*2*0.6654*12);
//		values[i] = (int)(rand() % 2000);
//	}
//	auto it = std::find(values, values+1999, 110);
//
//	if (it != std::end(values))
//		PRINT_LINE << "Yolo: Present at :" << std::distance(values, it)<< END_LINE;
//
//	return 0;
//}



//=================================================================================================
//small test 2
//=================================================================================================

//int main()
//{
//	int * test_ptr;
//
//	test_ptr = new int[10];
//
//	test_ptr[1] = 10;
//
//	std::cout << test_ptr[1] << std::endl;
//
//	delete[] test_ptr;
//	return 0;
//}

//=================================================================================================
//Testing Assignment
//=================================================================================================

//class A
//{
//	int data[10];
//
//public:
//	A()
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			data[i] = i + 1;
//		}
//	}
//
//	int Get(int i) const
//	{
//		return data[i];
//	}
//};
//
//template<typename S>
//int sumofAll(S s)
//{
//	int t = 0;
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		t += s[i];
//	}
//
//	std::cout << "The sum is " << t << std::endl;
//	return t;
//}
//
//class Adapter
//{
//	int data[10];
//
//public:
//
//	Adapter(A a)
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			data[i] = a.Get(i);
//		}
//	}
//
//
//	//Operator [] overloading
//	int operator[](int i) const
//	{
//		return data[i];
//	}
//
//};
//
//
//int main()
//{
//	int array_here[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sum1 = sumofAll(array_here);
//
//	A a;
//	int sum2 = sumofAll(Adapter(a));
//
//	system("pause");
//	return 0;
//}



//=================================================================================================
//Similar Indices
//=================================================================================================



//int Solution(std::vector<int> &A )
//{
//	int final_result = 0;
//	int size_vector = A.size();
//
//	for (int i = 0; i < size_vector; ++i)
//	{
//		for (int j = 0; j < size_vector; ++j)
//		{
//			if (i > j || i == j)
//				continue;
//
//			if (A[i] == A[j])
//				++final_result;
//		}
//	}
//
//	
//	return final_result;
//
//}
//
//
//int main()
//{
//	std::vector<int> A;
//	A.reserve(6);
//
//	A.push_back(3);
//	A.push_back(5);
//	A.push_back(6);
//	A.push_back(3);
//	A.push_back(3);
//	A.push_back(5);
//
//
//	int result = (int)Solution(A);
//
//	std::cout << "The Final output is " << result << std::endl;
//
//	system("pause");
//
//	return 0;
//}


//=================================================================================================
//If Triangle
//=================================================================================================

////10,2,5,1,8,20 
//int GetPerimeter(int A[], int N)
//{
//	int perimeter_res = -1;
//	int naya_perimeter = -1;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			if (i == j)
//				continue;
//			for (int k = 0; k < N; ++k)
//			{
//				if (k == j || k == i)
//					continue;
//
//
//				//Check the conditions
//				if (A[i] + A[j] > A[k] && A[k] + A[j] > A[i] && A[i] + A[k] > A[j])
//				{
//					naya_perimeter = A[i] + A[j] + A[k];
//					if (naya_perimeter > perimeter_res)
//					{
//						perimeter_res = naya_perimeter;
//					}
//				}
//
//			}
//		}
//	}
//
//	if (perimeter_res == -1)
//		return -1;
//
//	return perimeter_res;
//}
//
//
//void main()
//{
//	int a[3] = { 10,20,30 };
//
//	int ans = GetPerimeter(a, 3);
//
//	cout << "The Final Answer is " << ans << std::endl;
//
//	return;
//}



//=================================================================================================
//Represent number in binary and get number of 1's in it
//=================================================================================================

//Recursive Method
//void GenerateBinary(int n)
//{
//	if (n == 0)
//		return;
//
//	std::cout << n % 2;
//
//	GenerateBinary(n / 2);
//
//}
//
//int Solution(int A, int B)
//{
//	int result = 0;
//
//	int AB = A * B;
//
//	for (unsigned int i = 1 << 31; i > 0;)//from 2^31 to 2^0
//	{
//		if (AB & i)
//			++result;
//			
//		i = i / 2;//Divide it by half and reduce the 2 power value
//	}
//
//	return result;
//}
//
//
//int main()
//{
//	int a = 7;
//	int b = 3;
//
//	int result = Solution(a, b);
//	//GenerateBinary(a);
//
//	std::cout << "The result is " << result << std::endl;
//
//	return 0;
//}
//



//=================================================================================================
//Pointer size tests
//=================================================================================================

//int main()
//{
//	double a = '5';
//	double *a_p = &a;
//
//	std::cout << "Size of the variable : " << sizeof(a) << std::endl;
//	std::cout << "Size of the pointer : " << sizeof(a_p) << std::endl;
//
//	std::cout << "a_p =  " << a_p << std::endl;
//	std::cout << "*a_p = " << *a_p << std::endl;
//
//
//	
//	return 0;
//}





//=================================================================================================
//Adding two string
//=================================================================================================


/*char* AddAsciiIntegers(const char* X, const char* Y)
{
	//=================================================================================================
	//Solution 1
	//=================================================================================================

	//std::string::size_type sz;

	//int i = std::stoi(X, &sz);
	//int j = std::stoi(Y, &sz);

	//int sum = i + j;
	//char result[2000];

	//sprintf(result, "%d", sum);
	//int i;
	//return result;

	//=================================================================================================


	//int i = X[10] - '0';

	//=================================================================================================
	//Solution 2
	//=================================================================================================

	std::string stringX = X;
	std::string stringY = Y;

	//To convert char* to int
	stringstream testx(X);


	unsigned long long int  x = 0;
	testx >> x;

	stringstream testy(Y);

	unsigned long long int y = 0;
	testy >> y;

	unsigned long long int result = x + y;


	std::string stringtest = std::to_string(result);

	char* res = _strdup(stringtest.c_str());

	return res;
	
	
	//=================================================================================================

}

int main()
{
	char* c = AddAsciiIntegers("1000000000000000000000", "8999999999999999999999");

	//for (int i = 0; i < sizeof(c); ++c)
	{
		cout << c;
	}

	return 0;
}

*/







//=================================================================================================
//Church Sign
//=================================================================================================

/*int LettersNeededForChurchSign(const char* sentence, const char* lettersAvailable)
{
	std::string a1 = sentence;
	int lengtha1 = a1.length();

	vector<char> word1;
	word1.resize(lengtha1);

	for (int i = 0; i < lengtha1; ++i)
	{
		word1[i] = a1[i];
	}

	map<char, int> mapword1;
	
	for (auto k : word1)
	{
		++mapword1[k];
	}

	//=================================================================================================
	
	std::string a2 = lettersAvailable;
	int lengtha2 = a2.length();

	vector<char> word2;
	word2.resize(lengtha2);

	for (int i = 0; i < lengtha2; ++i)
	{
		word2[i] = a2[i];
	}

	map<char, int> mapword2;

	for (auto k : word2)
	{
		++mapword2[k];
	}
	//=================================================================================================

	std::map<char,int>::iterator itr1;
	std::map<char,int>::iterator itr2;

	int count = 0;
	for (itr1 = mapword1.begin(); itr1 != mapword1.end(); )
	{
		bool IsFound = false;
		int visitcount = 0;
		
		for (itr2 = mapword2.begin(); itr2 != mapword2.end(); ++itr2)
		{
			visitcount += 1;
			//if (mapword2.find(itr1->first) != mapword2.end())//If Found
			if(itr1->first == itr2->first)
			{
				//Find the difference between them
				if (itr2->second < itr1->second)
				{
					int tempCount = itr1->second - itr2->second;
					count += tempCount;
				}
				IsFound = true;
		
				mapword2.erase(itr2->first);
				//mapword2.erase(itr1->first);
				break;
			}
			IsFound = false;
		}
		if (!IsFound || visitcount == 0)
		{
			char temp = ' ';
			//int yes = isspace(temp);
			if (itr1->first == temp)
			{
				break;
			}
			count += itr1->second;
		}
		++itr1;
	}

	return count;
}


int	main()
{
	/*std::vector<int> vlist;

	vlist.push_back(10);
	vlist.push_back(11);
	vlist.push_back(1);
	vlist.push_back(10);

	std::map<int,int> mlist;

	for (auto k : vlist)
	{
		++mlist[k];
	}
	//mlist.erase(10);

	mlist.insert(make_pair(10, 20));
	
	if (mlist.find(10) != mlist.end())
	{
		cout << mlist[10];
	}
	int l;*
	int count = LettersNeededForChurchSign("It's a string!", "But the letters aren't here?");
	
	cout << count;

	return 0;

}*/


//=================================================================================================
//Ray-Sphere Intersection
//=================================================================================================


/*float dotproduct(Vector3 a, Vector3 b)
{
	return a.x *b.x + a.y *b.y + a.z *b.z;
}


bool calculateRayIntersection(Vector3 Ro, Vector3 Rd, Vector3 So, float rad)
{
	Vector3 l = So - Ro;

	float td = dotproduct(l, Rd);
	float ll = dotproduct(l, l);

	if (td < 0 && ll > (rad * rad))
	{
		return false;
	}

	float d;

	//d*d + td*td = l*l
	float right = ll - (td * td);
	if (right > (rad * rad))
	{
		return false;
	}
	d = std::sqrt(right);
	
	
	if (d > rad || d < 0)
	{
		return false;
	}
	else
	{
		return true;
	}


	//return true;
}


int main()
{
	bool answer ;
	Vector3 RayStart		= Vector3(0.5, 3.5, -1.0);
	Vector3 RayDirection	= Vector3(1, -1 , 0);
	Vector3 SphereOrigin	= Vector3(2.5, 1.5, -1.5);
	float	radius			= 1;

	//Vector3 res = RayStart - RayDirection;
	//cout << res.x << endl << res.y << endl << res.z;

	answer = calculateRayIntersection(RayStart, RayDirection, SphereOrigin, radius);

	if (answer)
	{
		cout << "The Ray intersects the Sphere" << endl;
	}
	else
	{
		cout << "The Ray does not intersect the Sphere" << endl;
	}

	return 0;
}*/

//=================================================================================================
//Hash Map  VS Unordererd Map
//=================================================================================================
/*int main()
{
	// <Key,Value>
	map<int, int> maptest;

	maptest.insert(std::pair<int, int>(10, 20));
	maptest.insert(std::pair<int, int>(130, 340));
	maptest.insert(std::pair<int, int>(60, 550));
	maptest.insert(std::pair<int, int>(2, 10));

	map<int, int>::iterator itr;
	std::cout << "Map[Order_map or Hash Map]" << endl;
	for (itr = maptest.begin(); itr != maptest.end(); ++itr)
	{
		cout << itr->first << " ->" << itr->second<<endl;
	}

	cout << endl;
	cout << endl;

	unordered_map<int, int> maptest2;

	maptest2.insert(std::pair<int, int>(10, 20));
	maptest2.insert(std::pair<int, int>(2, 10));
	maptest2.insert(std::pair<int, int>(130, 340));
	maptest2.insert(std::pair<int, int>(60, 550));
	

	unordered_map<int, int>::iterator itr2;

	std::cout << "Unordered Map" << endl;
	for (itr2 = maptest2.begin(); itr2 != maptest2.end(); ++itr2)
	{
		cout << itr2->first << " ->" << itr2->second << endl;
	}

	std::vector<int> list1;

	list1.push_back(1);
	list1.push_back(4);
	list1.push_back(3);
	list1.push_back(3);
	list1.push_back(4);

	map<int, int> map2;

	for (auto k : list1)
	{
		++map2[k];
	}

}*/



//=================================================================================================
//Take an array where elements sum shud b equal to N
//=================================================================================================

//O(n^2) method
/*
int main()
{
	int arrayints[] = { 8,7,2,5,3,1 };
	int N = 10;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (i == j)
				continue;
			else
			{
				if (arrayints[i] + arrayints[j] == N)
				{
					std::cout << "Answer found" << std::endl;
					std::cout << "i:" << i << std::endl << "j:" << j << std::endl;
				}
			}
		}
	}

}
*/

//O(n) method

//int main()
//{
//	std::unordered_map<int, int> solution;
//	int arrayints[] = { 8,7,2,5,3,1 };
//	int N = 10;
//
//	for (int i = 0; i < 6; ++i)
//	{
//		if(map.find()
//	}
//}




//=================================================================================================
//Quaternions and Slerp using Quaternions
//=================================================================================================

/*
class Quaternion
{
public:
	union {
		struct {
			real r;
			real i;
			real j;
			real k;
		};
		real data[4];
	};
	Quaternion() : r(1), i(0), j(0), k(0) {}	//Returns identity matrix
	Quaternion(const real r, const real i, const real j, const real k)
		: r(r), i(i), j(j), k(k) {}


	void normalise();


	void operator *=(const Quaternion &multiplier);


	void addScaledVector(const Vec3& vector, real scale);

	void rotateByVector(const Vec3& vector);


	//Other Quaternion functions

	Quaternion operator+ (const Quaternion& Q2)
	{
		Quaternion Q1 = *this;

		Quaternion result;

		result.r = Q1.r + Q2.r;
		result.i = Q1.i + Q2.i;
		result.j = Q1.j + Q2.j;
		result.k = Q1.k + Q2.k;

		return result;
	}

	Quaternion operator- (const Quaternion& Q2)
	{
		Quaternion Q1 = *this;

		Quaternion result;

		result.r = Q1.r - Q2.r;
		result.i = Q1.i - Q2.i;
		result.j = Q1.j - Q2.j;
		result.k = Q1.k - Q2.k;

		return result;
	}

	Quaternion operator* (const Quaternion& Q2)
	{
		Quaternion Q1 = *this;

		Quaternion result;

		result.r = Q1.r * Q2.r;
		result.i = Q1.i * Q2.i;
		result.j = Q1.j * Q2.j;
		result.k = Q1.k * Q2.k;

		return result;
	}

	Quaternion QuatScalarMult(Quaternion Q, real value)
	{
		Quaternion result;

		result.r = value * Q.r;
		result.i = value * Q.i;
		result.j = value * Q.j;
		result.k = value * Q.k;

		return result;

	}

	Quaternion QuatScalarDiv(Quaternion Q, real value) 
	{
		Quaternion result;

		result.r = Q.r / value;
		result.i = Q.i / value;
		result.j = Q.j / value;
		result.k = Q.k / value;

		return result;
	}

	void QuatSetIdentity()
	{
		Quaternion &Q = *this;

		Q.r = 1;
		Q.i = 0;
		Q.j = 0;
		Q.k = 0;
	
	}
		
	Quaternion QuatSetIdentity(Quaternion &Q)
	{
		Q.r = 1.0f;
		Q.i = 0.0f;
		Q.j = 0.0f;
		Q.k = 0.0f;


		return Q;
	}
	
	Quaternion QuatInverse(Quaternion Q)
	{

		real divided = Q.r * Q.r + Q.i * Q.i + Q.j * Q.j + Q.k * Q.k;

		Q.r =  Q.r / divided;
		Q.i = -Q.i / divided;
		Q.j = -Q.j / divided;
		Q.k = -Q.k / divided;

		return Q;


	}

	real QuatLength()
	{
		real result;
		Quaternion &Q = *this;


		real length = Q.r * Q.r + Q.i * Q.i + Q.j * Q.j + Q.k * Q.k;
		result = sqrtf(length);

		return result;
	}
	
	real QuatLength(Quaternion Q)
	{
		real result;

		real length = Q.r * Q.r + Q.i * Q.i + Q.j * Q.j + Q.k * Q.k;
		result = sqrtf(length);

		return result;
	}

	real QuatDotProduct(Quaternion Q2);

	real QuatDotProduct(Quaternion Q1, Quaternion Q2);

	void QuatConjugate(Quaternion & Q);

	void QuatConjugate();

	void QuatNegation();

};

Quaternion Lerp(Quaternion Q1, Quaternion Q2, real interpolation_value)  
{

	Quaternion sub = Q2 - Q1;
	Quaternion mul;
	mul.QuatScalarMult(sub, interpolation_value);
	return (Q1 + mul);
}


Quaternion Slerp(Quaternion Q1, Quaternion Q2, real interpolation_value)
{
	real d;
	d = Q1.QuatDotProduct(Q2);
	Quaternion res;

	if (d > 0.9995)
	{
		//Do lerp
		res = Lerp(Q1, Q2, interpolation_value);
		res.normalise();

		return res;
	}

	if (d < 0)
	{
		//negate everything
		Q2.QuatNegation();
		d = -d;
	}

	//Cos inverse of the d
	real angle = acos(d);

	Quaternion parta = Q1.QuatScalarMult(Q1, sinf((1 - interpolation_value)*angle));
	Quaternion partb = Q2.QuatScalarMult(Q2, sinf(interpolation_value * angle));
	Quaternion partab = parta - partb;

	return	partab.QuatScalarDiv(partab, sinf(angle));

}



void Quaternion::normalise()
{
	real d = r * r + i * i + j * j + k * k;

	// Check for zero length quaternion, and use the no-rotation
	// quaternion in that case.
	if (d < real_epsilon) {
		r = 1;
		return;
	}

	d = ((real)1.0) / real_sqrt(d);
	r *= d;
	i *= d;
	j *= d;
	k *= d;
}

void Quaternion::operator*=(const Quaternion & multiplier)
{
	Quaternion q = *this;
	r = q.r*multiplier.r - q.i*multiplier.i -
		q.j*multiplier.j - q.k*multiplier.k;
	i = q.r*multiplier.i + q.i*multiplier.r +
		q.j*multiplier.k - q.k*multiplier.j;
	j = q.r*multiplier.j + q.j*multiplier.r +
		q.k*multiplier.i - q.i*multiplier.k;
	k = q.r*multiplier.k + q.k*multiplier.r +
		q.i*multiplier.j - q.j*multiplier.i;
}

void Quaternion::addScaledVector(const Vec3 & vector, real scale)
{
	Quaternion q(0,
	vector.x * scale,
	vector.y * scale,
	vector.z * scale);
	
	q *= *this;
	
	r += q.r * ((real)0.5);
	i += q.i * ((real)0.5);
	j += q.j * ((real)0.5);
	k += q.k * ((real)0.5);
}

void Quaternion::rotateByVector(const Vec3 & vector)
{
	Quaternion q(0, vector.x, vector.y, vector.z);
	(*this) *= q;
}

real Quaternion::QuatDotProduct(Quaternion Q2)
{
	Quaternion Q1 = *this;
	
	real result;

	result = Q1.r * Q2.r + Q1.i * Q2.i + Q1.j * Q2.j + Q1.k * Q2.k;

	return result;
}


real Quaternion::QuatDotProduct(Quaternion Q1, Quaternion Q2)
{
	real result;

	result = Q1.r * Q2.r + Q1.i * Q2.i + Q1.j * Q2.j + Q1.k * Q2.k;

	return result;
}

void Quaternion::QuatConjugate()
{
	Quaternion &Q = *this;

	Q.i = -Q.i;
	Q.j = -Q.j;
	Q.k = -Q.k;
}

void Quaternion::QuatNegation()
{
	Quaternion &Q = *this;
	
	Q.r = -Q.r;
	Q.i = -Q.i;
	Q.j = -Q.j;
	Q.k = -Q.k;

}

void Quaternion::QuatConjugate(Quaternion& Q)
{
	Q.i = -Q.i;
	Q.j = -Q.j;
	Q.k = -Q.k;
}

int main()
{
	Quaternion test_Q1(5,2,1,0);
	Quaternion test_Q2(2,1,1,3);
	
	Quaternion res(1,1,1,1);

	//res = test_Q1 * test_Q2;
	//res = test_Q1.InverseQ(test_Q1);
	cout << "Before : "<<endl;
	cout << test_Q1.r << " " << test_Q1.i << " " << test_Q1.j << " " << test_Q1.k << endl;

	 test_Q1.QuatConjugate();

	cout << "After : " << endl;
	cout << test_Q1.r << " " << test_Q1.i << " " << test_Q1.j << " " << test_Q1.k <<endl;


	real test = test_Q1.QuatDotProduct(test_Q2);

	//cout << test_Q2.r << " " << test_Q2.i <<endl;
	cout << res.r	  << " " << res.i << " " << res.j << " " << res.k <<endl;
	cout << test << endl;
	return 0;

}

*/


//=================================================================================================
//Divide and Conquer algo implementation
//=================================================================================================

/*int Find_Largest(int arr[], int low, int end)
{
	int min_value = 0;
	for (int i = low; i < end; ++i)
	{
		if (min_value < arr[i])
		{
			min_value = arr[i];
		}
	}

	cout << "the min value is" << endl;
	cout << min_value << endl;

	return min_value;
}

int main()
{
	cout << "Yolo" << endl;
	
	int arr[8] = {
		1,5,10,15,33,4,78,9
	};

	int start = 0;
	int last = 8;
	int mid = (start + last) / 2;

	int res1 = Find_Largest(arr, 0, mid);
	int res2 = Find_Largest(arr, mid + 1, last - 1);

	if (res1 < res2)
	{
		cout << "The Final Result is : " << res2 << endl;
	}
	else
	{
		cout << "The Final Result is : " << res1 << endl;
	}

	
	return 0;
}*/

//=================================================================================================
//Lerp Function
//=================================================================================================

//Linerly interpolates between 2 values

/*template <class T>
 T Lerp(T v0, T v1, float t)
{
	return (1 - t)*v0 + t * v1;
}


int main()
{
	int res;

	res = Lerp(10, 20, 0.5);
	cout << res << endl;
}

*/


//=================================================================================================
//Recursive Implementation and Usage of Continue keyword
//=================================================================================================


/*void Input(int n)
{
	if (n == 2)
	{
		cout << "Exit Condition" << endl;
		return;
	}
	for (int i = 0; i < 5; ++i)
	{
		if (i == 2)
		{
			continue;
			cout << "This is 2" << endl;
		}
			cout << i << endl;
	}

	//Input(n - 1);
	cout << "After recursive call" << endl;
}

int main()

{
	int n = 5;
	Input(n);
	return 0;

}
*/


//=================================================================================================
//Takes users input  and prints the output in reverse using vector
//=================================================================================================

/*void reverseArray(vector<int> a) {

	vector<int> temp_res;
	int size_arr = a.size();
	cout << size_arr;
	for (int i = size_arr-1;i>=0;--i)
	{
		temp_res.push_back(a[i]);
	}

	for (int i = 0; i<temp_res.size(); ++i)
	{
		cout << temp_res[i] << " ";
	}

}


int main()
{
	int size;
	vector<int> a;
	int input;


	cout << "Enter the parray \n";
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> input;
		a.push_back(input);
		//cout << a[i] << endl;
	}

	reverseArray(a);

	system("pause");
	return 0;
}
*/



/*
class HotelRoom {
public:
	HotelRoom(int bedrooms, int bathrooms)
		: bedrooms_(bedrooms), bathrooms_(bathrooms) {}

	int get_price() {
		return 50 * bedrooms_ + 100 * bathrooms_;
	}
private:
	int bedrooms_;
	int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
	HotelApartment(int bedrooms, int bathrooms)
		: HotelRoom(bedrooms, bathrooms) {}

	int get_price() {
		return HotelRoom::get_price() + 100;
	}
};



int main() {
	int n;
	cin >> n;
	vector<HotelRoom*> rooms;
	for (int i = 0; i < n; ++i) {
		string room_type;
		int bedrooms;
		int bathrooms;
		cin >> room_type >> bedrooms >> bathrooms;
		if (room_type == "standard") {
			rooms.push_back(new HotelRoom(bedrooms, bathrooms));
		}
		else {
			rooms.push_back(new HotelApartment(bedrooms, bathrooms));
		}
	}

	int total_profit = 0;
	for (auto room : rooms) {
		total_profit += room->get_price();
	}
	cout << total_profit << endl;

	for (auto room : rooms) {
		delete room;
	}
	rooms.clear();

	return 0;
}


*/
/*
	Input 
	================================
	2
	standard 3 1
	apartment 1 1
	================================
*/

//=================================================================================================
//Taking 5 student's input and finding how many students above them has higher grade
//=================================================================================================

/*class Student
{
private:
	int scores[5];
	int sum;
public:
	Student() : sum(0) {}
	void input()
	{
		for (int i = 0; i<5; ++i)
		{
			cin >> scores[i];
		}
	}
	int calculateTotalScore()
	{
		
		for (int i = 0; i < 5; ++i)
		{
			sum += scores[i];
		}

		return sum;
	}
};

int main() {
	int n; // number of students
	cin >> n;
	Student *s = new Student[n]; // an array of n students

	for (int i = 0; i < n; i++) {
		s[i].input();
	}

	// calculate kristen's score
	
	int kristen_score = s[0].calculateTotalScore();
	int score2 = s[1].calculateTotalScore();
	int score3 = s[2].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0;
	for (int i = 1; i < n; i++) {
		int total = s[i].calculateTotalScore();
		if (total > kristen_score) {
			++count;
		}
	}

	
	
	cout << kristen_score << endl << score2 << endl << score3 << endl;

	// print result
	cout << count << endl;
	delete s;

	return 0;
}*/


//test input

/*
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
*/


//=================================================================================================
// Read input and print output of an array using for loop
//=================================================================================================


/*int main()
{
	string scores[5] = {};

	
	for (int i = 0; i<5; ++i)
	{
		scanf_s("%d", scores);
	}

	for (int i = 5 - 1; i >= 0; --i)
	{
		printf("%d ", scores[i]);

	}

	return 0;
}*/

//=================================================================================================
// Implementation of taking integers from a set of given string 23,24,5 ... and printing 23 24 5
//=================================================================================================

/*vector<int> parseInts(string str) {
	// Complete this function

	vector<int> result;
	char* delim;
	delim = strtok(str, ",");

	
	

	return result;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}*/

//=====================================================================================
// Implementation of Shared Pointer and regular Pointer
//=====================================================================================


/*
#include <memory>
class A_test
{
public:
	int a;
	int b;
	char ab;

	A_test() :a(105), b(110), ab('a') {}
	~A_test()
	{
		cout << "Destructor called" << endl;
	}

};

int main()
{
	//Normal Pointer
	A_test* normal_pointer = new A_test();
	cout << normal_pointer->a << endl;
	delete normal_pointer;

	cout << "================================== \n";
	cout << "================================== \n";

	//Shared Pointer
	std::shared_ptr<A_test> shared_pointer_ex;
	cout << "shared_pointer_ex->a" << endl;

	XMFLOAT4 A;
	A = XMFLOAT4(0, 0, 0,1);

	return 0;
}

*/





//=====================================================================================
// Find avg of employers whos ratings are above 90 using AUTO and VECTOR
//=====================================================================================


/*
	// Complete the averageOfTopEmployees function below.
	void averageOfTopEmployees(vector<int> rating) {
		float average_of_numbers = 0.0f;
		int count = 0;

		for (auto i : rating)
		{
			if (i >= 90)
			{
				average_of_numbers += i;
				++count;
			}
		}
		average_of_numbers = average_of_numbers / count;
		printf("Average is %0.2f \n", average_of_numbers);

	}


	int main()
	{
		int n;
		cin >> n;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		vector<int> rating(n);

		for (int rating_itr = 0; rating_itr < n; rating_itr++) {
			int rating_item;
			cin >> rating_item;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			rating[rating_itr] = rating_item;
		}

		averageOfTopEmployees(rating);

		return 0;
	}


*/




//=====================================================================================
// Swapping two numbers using reference and normal way
//=====================================================================================

/*

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	//std::cout << "the swapped values without pointers are \n" << a << "  " << b << "\n \n";
}

void swap_ptr(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;

	//std::cout << "the swapped values with pointers are \n" << a << "  " << b << "\n \n";

}
int main()
{

	int a = 5;
	int b = 6;

	int result;

	std::cout << "the values before swapping are \n" << a << "  " << b << "\n \n";

	swap(a, b);
	int *x, *y;
	x = &a;
	y = &b;
	swap_ptr(x,y);
	std::cout << "the values of address before swapping are \n" << &a << "  " << &b << "\n \n";
	//swap_ptr(&a, &b);

}

*/


//=====================================================================================
// Unordered Map example to find the count of least number of value in a list
//=====================================================================================




/*int main()
{

	std::unordered_map<int, int> counter_;

	std::vector<int> list_;


	list_.push_back(1);
	list_.push_back(1);
	list_.push_back(1);
	list_.push_back(5);
	list_.push_back(5);
	list_.push_back(5);
	list_.push_back(10);

	int min_val = 999999;
	int that_value;

	for (auto &k : list_)
	{

		++counter_[k];
	}
	std::cout << list_.size() << "\n";
	for (auto &k : counter_)
	{
		///std::cout << typeid(k).name() << std::endl;
		std::cout << k.first << "->" << k.second << "\n";
		if (min_val > k.second)
		{
			min_val = k.second;
			that_value = k.first;
		}

	}

	std::cout << "The min value that is repeated is : " << that_value << "\n";
	std::cout << "The min value that was repeated : " << min_val << " : number of times \n";

	return 0;
}*/
