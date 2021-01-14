// Leetcode: 1431. Kids With the Greatest Number of Candies

#include "../../Helper Functions/Helper.hpp"

int FindMaxInVector(STDVECTOR(int) input)
{
	int res = -99990;

	for (auto i : input)
	{
		if (i > res)
		{
			res = i;
		}
	}
	return res;
}


STDVECTOR(bool) kidsWithCandies(STDVECTOR(int)& candies, int extraCandies)
{
	STDVECTOR(bool) result;
	result.resize(candies.size());

	int max = FindMaxInVector(candies);

	int k = 0;
	for (auto i : candies)
	{
		if (i + extraCandies >= max)
		{
			result[k] = 1;
		}
		++k;
	}


	return result;
}

void PrintResult(STDVECTOR(bool) res)
{
	for (auto i : res)
	{
		STDPRINTLINE(i);
	}

	return;
}

int main()
{
	STDPRINTLINE("Hello World!");

	STDVECTOR(int) candies = { 2,3,5,1,3 };
	STDVECTOR(bool) res = kidsWithCandies(candies, 3);
	PrintResult(res);
	STDPRINTLINE("=====================");

	candies.clear();
	res.clear();

	candies = { 4,2,1,1,2 };
	res = kidsWithCandies(candies, 1);
	PrintResult(res);
	STDPRINTLINE("=====================");

	candies.clear();
	res.clear();

	candies = { 12,1,12 };
	res = kidsWithCandies(candies, 10);
	PrintResult(res);
	STDPRINTLINE("=====================");

	return 0;
}