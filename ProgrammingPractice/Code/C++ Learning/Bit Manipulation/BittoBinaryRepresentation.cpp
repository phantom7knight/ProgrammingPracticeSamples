#include "../../../Helper Functions/Helper.hpp"


//=================================================================================================
//To get each individual bit in a binary
//=================================================================================================

int main()
{
	int num = 5;
	
	for (int k = 0; k < 4; ++k)
	{
		bool ans = (num & (1 << k)) >> k;

		STDPRINTLINE(ans);
	}

	return 0;
}