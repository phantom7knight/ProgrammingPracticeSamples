#include "../../Helper Functions/Helper.hpp"


int main()
{
	RandNumGen obj;
	
	STDVECTOR(int) numbers;
	
	numbers.reserve(10);
	
	for (int i = 0; i < 10; ++i)
	{
		numbers.push_back(obj.getRandNumber(1, 200));
	}


	return 0;
}