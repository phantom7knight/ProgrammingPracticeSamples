// 53. Maximum Subarray

#include "../../Helper Functions/Helper.hpp"

int maxSubArray(STDVECTOR(int)& nums) 
{
	int result = 0;

	// Early Exit
	if (nums.size() == 1)
	{
		result = nums[0];

		return result;
	}


	return result;
}


int main()
{
	STDPRINTLINE("Hello World!");

	STDVECTOR(int) dupArray = { 1,2,3,1 };
	bool res = containsDuplicate(dupArray);
	STDPRINTLINE(res);
	STDPRINTLINE("=====================");

	dupArray.clear();

	dupArray = { 1,2,3,4 };
	res = containsDuplicate(dupArray);
	STDPRINTLINE(res);
	STDPRINTLINE("=====================");

	dupArray.clear();

	dupArray = { 1,1,1,3,3,4,3,2,4,2 };
	res = containsDuplicate(dupArray);
	STDPRINTLINE(res);
	STDPRINTLINE("=====================");

	return 0;
}