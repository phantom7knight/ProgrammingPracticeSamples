

//=================================================================================================
//Stack Implementation
//=================================================================================================


//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//
//	int stack_size = 10;
//	std::cin >> stack_size;
//
//	//Stack
//	int arrayStack[10];
//	int top = -1;
//
//	for (int i = 0; i < stack_size; ++i)
//	{
//		int a, b;
//		int max_element = -999;
//
//		std::cin >> a;
//
//		if (a == 1)
//		{
//			std::cin >> b;
//		}
//
//		//Switch case for all the terms
//
//		switch (a)
//		{
//		case 1:
//			//Push Elements into the stack
//			arrayStack[++top] = b;
//			if (max_element < b)
//			{
//				max_element = b;
//			}
//			break;
//
//		case 2:
//			//Delete Elements from top the stack
//			arrayStack[top] = 0;
//			--top;
//			break;
//
//		case 3:
//			for (int i = 0; i < top; ++i)
//			{
//				if (arrayStack[i] > max_element)
//				{
//					max_element = arrayStack[i];
//				}
//			}
//			//std::cout <<  max_element;
//			break;
//		}
//		STDPRINTLINE(arrayStack[i]);
//
//	}
//
//
//
//
//	return 0;
//}



//int main()
//{
//	std::vector<int> vec_here{ 0,1,2,3,4,4 };
//
//	std::map<int, int> map_here;
//
//	int count = 0;
//	for (auto i : vec_here)
//	{
//		if(map_here.at(vec_here[i]) == vec_here[i])
//			map_here.at(vec_here[i]).
//		map_here.insert(std::make_pair(vec_here[i], ++count));
//
//		count = 0;
//	}
//
//	return 0;
//}
