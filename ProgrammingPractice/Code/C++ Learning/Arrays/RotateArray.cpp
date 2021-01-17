#include "../../../Helper Functions/Helper.hpp"
#define Bad_Soln 0

#if Bad_Soln 
// Bad Solution for large num arrays
// fails for large inputs
void rotate(STDVECTOR(int)& nums, int k)
{
	// early exit
	if (nums.size() < 2)
	{
		return;
	}
	int times = k % nums.size();
	for (int i = 0; i < times; ++i)
	{
		int temp = nums[0];

		for (int j = 1; j < nums.size(); ++j)
		{
			std::swap(nums[j], temp);
		}

		std::swap(temp, nums[0]);
	}
}
#else
// Run Time 0 to 4ms
void swapNumbers(int& a, int& b)
{
	// without using temp
	a = a + b;
	b = a - b;
	a = a - b;

	// with using temp

	//int temp = a;
	//a = b;
	//b = temp;
}

void ReverseArray(STDVECTOR(int)& nums, int first, int last)
{
	while (first < last)
	{
		// swap the values
		swapNumbers(nums[first], nums[last]);

		// update the counters
		++first;
		--last;
	}
}

void rotate(STDVECTOR(int)& nums, int k)
{
	// early exit
	if (nums.size() < 2)
	{
		return;
	}

	// reverse the whole array
	ReverseArray(nums, 0, nums.size() - 1);

	int updatedK = k % nums.size();

	// reverse the first updatedK values only
	ReverseArray(nums, 0, updatedK - 1);

	// reverse the remaining values in array
	ReverseArray(nums, updatedK, nums.size() - 1);
}
#endif


int main()
{
	STDPRINTLINE("Hello World!!!!");

	STDVECTOR(int) nums = { 1,2,3,4,5,6,7 };

	rotate(nums, 3);

	return 0;
}