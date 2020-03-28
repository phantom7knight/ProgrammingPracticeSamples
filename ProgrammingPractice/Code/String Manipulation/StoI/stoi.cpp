//=================================================================================================
//string to int
//=================================================================================================
/*int myAtoi(std::string str)
{

	long i;
	i = 0;
	int j = 0;

	while (str[j] >= '0' && str[j] <= '9')
	{
		i = i * 10 + (str[j] - '0');
		j++;
	}
	return i;


}

int main()
{
	int res = myAtoi("42--");

	STDPRINTLINE(res);

	return 0;
}
*/

//=================================================================================================
//String to Integer conversion without std::atoi
//=================================================================================================

//void ConvertAtoI(std::string str)
//{
//
//	int str_len = str.length();
//
//	int result = 0;
//
//	for (int i = 0; i < str_len; ++i)
//	{
//		int multiple_here = std::pow(10, str_len - i - 1);
//		result += (str[i] - '0')* multiple_here;
//	}
//
//	STDPRINTLINE(result);
//	
//	return;
//}
//
//
//int main()
//{
//	std::string str = "13245";
//	ConvertAtoI(str);
//
//
//	return 0;
//}
