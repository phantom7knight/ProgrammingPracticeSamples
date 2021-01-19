#include "../../../Helper Functions/Helper.hpp"

int fibonacciIterative(int num)
{
	int res = 0;

	if (num <= 2)
	{
		return 1;
	}

	STDVECTOR(int) arr;
	arr.resize(num);

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < num; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	res = arr[num - 1];
	
	return res;
}

int fibonacciRecursive(int num)
{
	if (num <= 2)
	{
		return 1;
	}

	int res = fibonacciRecursive(num - 2) + fibonacciRecursive(num - 1);

	return res;
}

int main()
{
	STDPRINTLINE("Hello World!!");

	int res = fibonacciIterative(5);

	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	res = fibonacciRecursive(50);
	
	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	return 0;
}