#include "../../../Helper Functions/Helper.hpp"

void merge(STDVECTOR(int)& nums1, int m, STDVECTOR(int)& nums2, int n) 
{
	if (n == 0)
	{
		std::sort(nums1.begin(), nums1.end());
		return;
	}

	if (m == 0)
	{
		std::sort(nums2.begin(), nums2.end());
		return;
	}

	std::vector<int> merged;// (m + n);

	for (int i = 0; i < m; ++i)
	{
		merged.push_back(nums1[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		merged.push_back(nums2[i]);
	}

	std::sort(merged.begin(), merged.end());
}


int main()
{
	STDPRINTLINE("Hello World!!");

	STDVECTOR(int) nums1 = { 1,2,3,0,0,0 };
	STDVECTOR(int) nums2 = { 2,5,6 };

	merge(nums1, 3, nums2, 3);

	return 0;
}