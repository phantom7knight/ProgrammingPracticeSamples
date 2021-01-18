#include "../../../Helper Functions/Helper.hpp"

// Runtime: 0ms
STDVECTOR(int) plusOne(STDVECTOR(int)& digits) 
{
	STDVECTOR(int) res;

	// var to maintain carry over scenarios
	int carryOver = 0;

	// start from the end
	for (int i = digits.size() - 1; i >= 0; --i)
	{
		// check if the addition of a number >= 10
		// if yes then we carry over 1 for next iteration
		if (digits[i] + 1 > 9)
		{
			carryOver = 1;
			digits[i] = 0;
			continue;
		}

		// if reached here then we don't have to worry about
		// carry overs any more and exit this for loop
		carryOver = 0;
		++digits[i];
		break;
	}

	// assign digits vector to our result
	res = digits;
	
	// if the carry over is 1
	// in cases of [9,9] => [1,0,0]
	// so we update out existing result vector
	if (carryOver != 0)
	{
		res.resize(res.size() + 1);
		res[res.size() - 1] = carryOver;
		std::swap(res[0], res[res.size() - 1]);
	}

    return res;
}

int main()
{
	STDPRINTLINE("Hello World!!!!");

	STDVECTOR(int) nums = { 2,9,9,9 };

	STDVECTOR(int) res = plusOne(nums);

	return 0;
}