#include "../../../Helper Functions/Helper.hpp"

int robBrute(STDVECTOR(int)& nums)
{
	int maxSoFar = INT_MIN;

	if (nums.size() < 2)
	{
		maxSoFar = std::max(nums[0], maxSoFar);
		return maxSoFar;
	}

	for (int i = 0; i < nums.size(); ++i)
	{
		int max_here = 0;

		if (i + 2 < nums.size())
		{
			max_here = nums[i] + nums[i + 2];
			maxSoFar = std::max(max_here, maxSoFar);
			continue;
		}

		max_here = nums[i];
		maxSoFar = std::max(max_here, maxSoFar);
	}


	return maxSoFar;
}

int robDP(STDVECTOR(int)& nums)
{
	// Initial cases to fill
	if (nums.size() == 0)
	{
		return 0;
	}

	if (nums.size() == 1)
	{
		return nums[0];
	}

	if (nums.size() == 2)
	{
		return std::max(nums[0], nums[1]);
	}

	int currentMax = INT_MIN;

	std::vector<int> map;
	map.push_back(nums[0]);
	map.push_back(std::max(nums[0], nums[1]));
	// 2,7,9,3,1
	for (int i = 2; i < nums.size(); ++i)
	{
		map.push_back(std::max(map[i - 1], nums[i] + map[i - 2]));
	}

	int res = map[nums.size() - 1];

	return 0;
}

int main()
{
	STDPRINTLINE("Hello World!!");

	{
		//Timer t("House Robber Brute");
		//STDVECTOR(int) nums = { 1,2,1,2 };
		//int res = robBrute(nums);
		//STDPRINTLINE(res);
	}

	{
		Timer t("House Robber Recursive");
		STDVECTOR(int) nums = { 2,7,9,3,1 };
		int res = robDP(nums);
		STDPRINTLINE(res);
	}

	return 0;
}