#include "../../../Helper Functions/Helper.hpp"

void merge(STDVECTOR(int)& arr, int l, int r, int m)
{
	// split 2 arrays 

	// start commparing the arrays

	// merge the 2 arrays
}


void MergeSort(STDVECTOR(int) &arr, int l, int r, int m)
{
	if (arr.size() < 1)
	{
		return;
	}

	while (l < r)
	{
		m = (l + r) / 2;
		l = 0;
		r = m - 1;

		MergeSort(arr, 0, r, m);
		MergeSort(arr, m + 1, arr.size() - 1, m);
		merge(arr, l, r, m);
	}

}


int main()
{
	STDPRINTLINE("Hello World!!");

	STDVECTOR(int) nums1 = { 5,18,4,9,8 };

	//int initMid = (0 + nums1.size() - 1 ) / 2;
	//MergeSort(nums1, 0, nums1.size() - 1, initMid);

	int i = -999;

	STDPRINTLINE(i);

	unsigned int j = -999;

	STDPRINTLINE(j);

	return 0;
}