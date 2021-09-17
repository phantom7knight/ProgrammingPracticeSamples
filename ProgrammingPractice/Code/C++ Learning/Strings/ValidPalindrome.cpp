#include "../../../Helper Functions/LinkedListHelper.hpp"

bool isPalindrome(std::string s) 
{
	int startCounter = 0;
	int endCounter = s.length()-1;

	// rac a car
	while (startCounter < endCounter)
	{
		if (tolower(s[startCounter]) == tolower(s[endCounter]) && startCounter == endCounter)
		{
			return true;
		}

		// if empty, we move on
		if (s[startCounter] == ' ')
		{
			++startCounter;
			continue;
		}

		if (s[endCounter] == ' ')
		{
			--endCounter;
			continue;
		}

		if (tolower(s[startCounter++]) != tolower(s[endCounter--]))
		{
			return false;
		}

	}

	return true;
}


int main()
{
	STDPRINTLINE("Hello World!");

	bool res = isPalindrome("A man, a plan, a canal: Panama");

	STDPRINTLINE(res);

	return 0;
}