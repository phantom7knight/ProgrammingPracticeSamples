#include "../../Helper Functions/Helper.hpp"

//LeetCode: 1480


STDVECTOR(int) runningSum(STDVECTOR(int)& nums)
{
	STDVECTOR(int) result;
	result.resize(nums.size());

	int i = 0;
	while (i != nums.size())
	{
		if (i == 0)
		{
			result[0] = nums[0];
		}

		if (i - 1 >= 0)
		{
			result[i] = nums[i] + result[i-1];
		}
		++i;
	}

	return result;
}

void PrintResult(STDVECTOR(int) res)
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

	STDVECTOR(int) nums = { 1,2,3,4 };
	STDVECTOR(int) res = runningSum(nums);
	PrintResult(res);
	STDPRINTLINE("=====================");

	nums.clear();
	res.clear();

	nums = { 1,1,1,1,1 };
	res = runningSum(nums);
	PrintResult(res);
	STDPRINTLINE("=====================");

	nums.clear();
	res.clear();

	nums = { 3,1,2,10,1 };
	res = runningSum(nums);
	PrintResult(res);
	STDPRINTLINE("=====================");

	return 0;
}

