#include "../../Helper Functions/Helper.hpp"

//Using Recursion

static std::string result;

void ReverseString(char* a_input)
{
	if (*a_input == '\0')
		return;

	ReverseString(a_input + 1);
	STDPRINTLINE(*a_input);
	result.push_back(*a_input);
}

int main()
{
	char string_here[] = "Hello";
	ReverseString(string_here);

	STDPRINTLINE(result);

	return 0;
}