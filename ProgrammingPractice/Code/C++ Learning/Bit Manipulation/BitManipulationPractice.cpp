#include "../../../Helper Functions/Helper.hpp"

//prints from bottom to top but does print right representation
void PrintBits(int num)
{
	int i = num;
 	while (i != 0)
	{
		STDPRINTLINE(i % 2);
		i = i / 2;
	}

	return;
}


bool CheckBitValue(bool a_value, bool if_value, int a_position)
{
	bool result = false;
						//mask
	result = if_value & (if_value << a_position);

	return result;
}


void SetBitValue(bool a_value, bool if_value, int a_position)
{
	bool result = false;
	//mask
	result = if_value | (if_value << a_position);

	return;
}

int getSum(int a, int b) 
{
	while (b)
	{
		int carry = a & b; // get all carry bits (all 1&1s)
		a = a ^ b; // sum of disjoint bits (everything except what needs to be carried)

		// shift carry by one, as this is how a regular sum operation works
		// the carry is moved to the next position
		b = (unsigned)carry << 1;
	}
	return a;
}

int main()
{

#pragma region Test1
	int i = 13;

	PrintBits(i);

	STDPRINTLINE("======================");

	i = 12;

	PrintBits(i);

	STDPRINTLINE("======================");

	i = 11;

	PrintBits(i);
#pragma endregion

#pragma region Test2
	
	STDPRINTLINE("======================");

	int a = 4;
	int b = 2;
	int res = getSum(a, b);
	STDPRINTLINE(res);

#pragma endregion

	return 0;
}