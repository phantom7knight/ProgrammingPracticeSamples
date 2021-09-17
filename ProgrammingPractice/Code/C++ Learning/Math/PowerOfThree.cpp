#include "../../../Helper Functions/Helper.hpp"


bool isPowerOfThree(int n)
{
	if (n == 1 || n == 3)
	{
		return true;
	}

	if (n < 3)
	{
		return false;
	}

	long int res = 3;
	long int i = 1;
	while (res <= n)
	{
		if (res == n)
		{
			return true;
		}
		res = POWER(3, ++i);
	}

	return false;
}


int main()
{
	STDPRINTLINE("Hello World!");

	bool res = isPowerOfThree(17);

	return 0;
}