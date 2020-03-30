#include "../../Helper Functions/Helper.hpp"

//Leetcode : 326

//RunTime : 20ms
bool isPowerOfThree1(int n) 
{
	int res = 1;
	int i = 0;

	while (res <= n)
	{
		long int res_here = std::pow(3, i++);
		if (res_here != n)
		{
			res = res_here;
			continue;
		}
		return true;
	}

	return false;
}


int main()
{

	STDPRINTLINE("Hello World!");

	bool res = false;

	res = isPowerOfThree1(45);

	STDPRINTLINE("45: " << res);

	res = isPowerOfThree1(27);

	STDPRINTLINE("27: " << res);



	return 0;
}