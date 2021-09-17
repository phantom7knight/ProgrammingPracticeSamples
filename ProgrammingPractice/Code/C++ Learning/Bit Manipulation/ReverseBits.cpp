#include "../../../Helper Functions/Helper.hpp"

uint32_t reverseBits(uint32_t n) 
{
	uint32_t result ;

	for (int i = 0; i < 32; ++i)
	{
		result = n | 1 << i;
		result >> i;
	}


	return result;
}

int main()
{
	//int res = reverseBits(00101000001111010011100);
	int res = reverseBits(100);
	STDPRINTLINE(res);
	return 0;
}