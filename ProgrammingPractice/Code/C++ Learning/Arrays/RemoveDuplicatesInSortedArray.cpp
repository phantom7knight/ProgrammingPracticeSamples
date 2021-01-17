#include "../../../Helper Functions/Helper.hpp"


int removeDuplicates(STDVECTOR(int)& nums)
{
	// early exit
	if (nums.size() < 2)
	{
		return nums.size();
	}

	int res = 0;
	int switchPos = 1;

	for (int i = 0; i < nums.size() && i + 1 < nums.size(); ++i)
	{
		// check if both the values are same
		if (nums[i] == nums[i + 1])
		{
			continue;
		}

		nums[switchPos++] = nums[i+1];
		++res;
	}

	return res+1;
}

int main()
{
	STDPRINTLINE("Hello World!!!");

	STDVECTOR(int) nums = { 0,0,1,1,1,2,2,3,3,4 };

	int res = removeDuplicates(nums);
	STDPRINTLINE(res);

	return 0;
}