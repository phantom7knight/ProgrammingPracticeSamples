
//=================================================================================================
//Fibonacchi Series
//=================================================================================================

//Recursive menthod
//int Fib_Gen_Recursive(int num)
//{
//	if (num == 0)
//		return 0;
//	if (num == 1)
//		return 1;
//
//	return Fib_Gen_Recursive(num - 1) + Fib_Gen_Recursive(num - 2);
//}
//
////Dynamic Programming Method
//int Fib_Gen_DP(int num)
//{
//	std::vector<int> result;
//
//	result.resize(num + 1);
//	result[0] = 0;
//	result[1] = 1;
//
//	for (int i = 2; i <= num; ++i)
//	{
//		result[i] = result[i - 1] + result[i - 2];
//	}
//
//	return result[num];
//}
//
//
//
//int main()
//{
//	int result = 0;
//
//	//result = Fib_Gen_Recursive(6);
//	//result = Fib_Gen_DP(6);
//
//
//	PRINT_LINE << "The result is " << result << END_LINE;
//	return 0;
//}
