// 217. Contains Duplicate

#include "../../Helper Functions/Helper.hpp"


#if Method 1
// Runtime: 64 ms || Memory: 21.7 MB
bool containsDuplicate(STDVECTOR(int)& nums) 
{
	HASHMAP(int, int) hashmapuh;
	
	for (auto i : nums)
	{
		hashmapuh[i] = i;
	}

	if (hashmapuh.size() != nums.size())
		return true;

	return false;
}
#else
// Runtime: 52 ms || Memory: 15.6 MB
bool containsDuplicate(STDVECTOR(int)& nums)
{
	// Early Exit
	if (nums.size() < 1)
	{
		return false;
	}

	std::sort(nums.begin(), nums.end());

	int currTemp = nums[0];
	for (int i = 1; i < nums.size(); ++i)
	{
		if (currTemp == nums[i])
			return true;
		else
			currTemp = nums[i];
	}

	return false;
}
#endif

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