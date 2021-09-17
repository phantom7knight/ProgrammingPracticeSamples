#include "../../../Helper Functions/Helper.hpp"

int hammingDistance(int x, int y) 
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		auto a = (x >> i) & 1;
		auto b = (y >> i) & 1;
		// compare each bit
		if (a ^ b)
		{
			++count;
		}
	}

	return count;
}

int main()
{
	int res = hammingDistance(3, 1);
	STDPRINTLINE(res);
	return 0;
}