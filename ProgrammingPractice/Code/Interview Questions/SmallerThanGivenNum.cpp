#include "../../Helper Functions/Helper.hpp"


//LeetCode : 1365


//solution 1: 60ms[bad]
std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) 
{
	STDVECTOR(int) res;
	res.reserve(nums.size());
	int count = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = 0; j < nums.size(); ++j)
		{
			if (j != i)
			{
				if (nums[i] > nums[j])
					++count;
			}
			
		}
		res.push_back(count);
		count = 0;
	}


	return res;
}


//solution 2 : 
std::vector<int> smallerNumbersThanCurrent2(std::vector<int>& nums)
{
	//transfer all of these into another vector
	STDVECTOR(int) copy_vec = nums;


	STDVECTOR(int) res;
	res.reserve(nums.size());

	//sort the list
	std::sort(copy_vec.begin(), copy_vec.end());

	//make a hash map of all the solutions
	HASHMAP(int, int) map_here;

	for (int i = 0; i < copy_vec.size(); ++i)
	{
		map_here.insert(std::pair< int, int>(copy_vec[i], i));
	}
	
	STDPRINTLINE("Hello");

	return res;
}


int main()
{
	STDVECTOR(int) numbers = { 8,1,2,2,3 };


	STDVECTOR(int) res = smallerNumbersThanCurrent2(numbers);// smallerNumbersThanCurrent(numbers);

	for (int i = 0; i < res.size(); ++i)
	{
		STDPRINTLINE(res[i]);
	}

	return 0;
}