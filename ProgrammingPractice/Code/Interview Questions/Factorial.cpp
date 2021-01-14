#include "../../Helper Functions/Helper.hpp"

int RecursiveFactorial(int number)
{
	int result = 1;

	if (number == 1)
		return 1;

	result = number * RecursiveFactorial(number - 1);

	return result;
}


int IterativeFactorial(int number)
{
	int result = 1;

	for (int i = number; i >= 2; --i)
	{
		result *= i;
	}

	return result;
}



int main()
{
	int res = RecursiveFactorial(5);
	NSTDPRINTLINE(res);

	res = IterativeFactorial(5);
	NSTDPRINTLINE(res);

	return 0;
}