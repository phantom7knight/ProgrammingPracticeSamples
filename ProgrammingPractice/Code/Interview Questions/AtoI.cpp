#include "../../Helper Functions/Helper.hpp"

int AtoI(std::string str)
{
	int countPos = 0;
	int result = 0;

	// check for the sign of the number
	int sign = 1;
	if (str.find('-') < str.length())
	{
		sign = -1;
	}
	else
	{
		sign = 1;
	}

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
		{
			continue;
		}

		if (str[i] >= '0' && str[i] <= '9')
		{
			auto currentNum = str[i] - '0';
			result *= 10;
			result += currentNum;
		}
		else
		{
			break;
		}
	}
	result = sign * result;

	return result;
}

int main()
{
	STDPRINTLINE("Hellow World!!");

	{
		Timer t("std::atoi");
		int res2 = std::atoi("918");
		STDPRINTLINE(res2);
	}

	{
		Timer t("our AtoI");
		int res = AtoI("-91283472332");
		STDPRINTLINE(res);
	}

	return 0;
}