#include "../../../Helper Functions/Helper.hpp"

// Soln 1
int hammingWeight1(uint32_t n)
{
	int count = 0;
	int required = 1;
	for (int i = 0; i < 32; ++i)
	{
		if (n >> i & 1)
		{
			++count;
		}
	}

	return count;
}

// Soln 2
int hammingWeight2(uint32_t n)
{
	unsigned int v; // count the number of bits set in v
	unsigned int c; // c accumulates the total bits set in v

	for (c = 0; n; n >>= 1)
	{
		c += n & 1;
	}
	return c;
}

int main()
{
	int res = hammingWeight1(00000000000000000000000010000000);
	STDPRINTLINE(res);
	return 0;
}