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

int fibonacciDynamicIterative(int num)
{
	HASHMAP(int, int) tableResults;

	// push the initial values
	tableResults[0] = 1;
	tableResults[1] = 1;

	for (int i = 2; i < num; ++i)
	{
		tableResults[i] = tableResults[i - 1] + tableResults[i - 2];
	}

	return tableResults[num - 1];
}

int DynamicHelper(int num, HASHMAP(int, int) &map)
{
	// if you find something already in hashmap
	if (map.find(num) != map.end())
	{
		return map[num];
	}

	// value of 0th and 1st position are same in fib series
	if (num < 2)
	{
		map[num] = 1;
		return map[num];
	}

	map[num] = DynamicHelper(num - 1, map) + DynamicHelper(num - 2, map);

	return map[num];

}

int fibonacciDynamicRecursive(int num)
{
	HASHMAP(int, int) tableResults;

	int res = DynamicHelper(num - 1, tableResults);

	return tableResults[num - 1];
}

int main()
{
	STDPRINTLINE("Hello World!!");

	int res = fibonacciIterative(25);

	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	res = fibonacciRecursive(25);
	
	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	res = fibonacciDynamicIterative(30);

	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	res = fibonacciDynamicRecursive(30);

	STDPRINTLINE(res);

	STDPRINTLINE("==========");

	return 0;
}