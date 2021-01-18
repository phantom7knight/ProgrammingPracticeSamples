#include "../../../Helper Functions/Helper.hpp"
#define Bad_Soln 0

#if Bad_Soln 
// Runtime: 108ms
int singleNumber(STDVECTOR(int)& nums) 
{
	int res = 0;

	// early exit
	if (nums.size() < 2)
	{
		res = nums[0];
		return res;
	}

	HASHMAP(int, int) dupCount;

	// loop through the whole array
	for (auto val : nums)
	{
		if (dupCount.find(val) == dupCount.end())
		{
			// not found then add
			dupCount[val] = 1;
		}
		else
		{
			dupCount[val] = ++dupCount[val];
		}
	}

	for (auto i = dupCount.begin(); i != dupCount.end(); ++i)
	{
		if (i->second != 2)
		{
			res = i->first;
			return res;
		}
	}

	return res;
}
#else
// Runtime: 20ms
int singleNumber(STDVECTOR(int)& nums)
{
	std::sort(nums.begin(), nums.end());
	
	int Count = 1;
	for (int i = 0; i < nums.size(); i = i + 2)
	{
		// last 1
		if (i == nums.size() - 1)
		{
			return nums[i];
		}

		if (nums[i] == nums[i + 1])
		{
			continue;
		}
		else
		{
			return nums[i];
		}
	}

	return 0;
}
#endif

int main()
{
	STDPRINTLINE("Hello World!!!");

	STDVECTOR(int) nums = { 4,1,4,1,3 };

	int res = singleNumber(nums);
	STDPRINTLINE(res);

	return 0;
}