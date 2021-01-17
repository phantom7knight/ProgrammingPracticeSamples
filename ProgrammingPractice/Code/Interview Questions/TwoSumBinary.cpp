#include "../../Helper Functions/Helper.hpp"

// LeetCode : 371. Sum of Two Integers
// Run Time = 0 ms [Best solution provided by a user on LeetCode]

int getSum(int a, int b) 
{
	unsigned int carry = (a & b);

	int sum = a ^ b;

	if (carry == 0)
		return sum;
	
	carry <<= 1;

	return getSum(carry, sum);
}


int main()
{
	STDPRINTLINE("Hello World!!!");

	int res = getSum(11, 79);

	return 0;
}