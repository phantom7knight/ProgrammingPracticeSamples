#include "../../Helper Functions/Helper.hpp"

// LeetCode : 1. Two Sum
// Run Time = 4 ms

std::vector<int> twoSum(std::vector<int>& nums, int target) 
{
	std::vector<int> result;
	
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] + nums[j] == target)
			{
				result = { i,j };
				return result;
			}
		}
	}

	return result;
}

int main()
{
	STDPRINTLINE("Hello World!");

	STDVECTOR(int) nums = { 2,7,11,15 };

	STDVECTOR(int) res = twoSum(nums, 9);

	for (auto a : res)
	{
		STDPRINTLINE(a);
	}

	return 0;
}