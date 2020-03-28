
//=================================================================================================
//Reverse a string & check if palindrome
//=================================================================================================

////use extra memory to reverse string
//void ReverseStringM1(std::string string1)
//{
//	std::string string2;
//
//	string2.reserve(string1.length());
//
//
//	
//	int j = 0;
//	for (int i = (int)string1.length() - 1; i >= 0; --i)
//	{
//		string2.push_back(string1[i]);
//	}
//
//	STDPRINTLINE(string2);
//}
//
////Modify same string
//void ReverseStringM2(std::string string1)
//{
//	int mid_len = (int)string1.length() / 2;
//	int str_len = (int)string1.length();
//
//	for (int i = 0; i < mid_len; ++i)
//	{
//		std::swap(string1[i], string1[str_len - i - 1]);
//	}
//
//	STDPRINTLINE(string1);
//}
//
//
//bool IsPalindrome(std::string str)
//{
//	int str_len = (int)str.length();
//
//	int l = 0;
//	int mid = str_len / 2;
//	int h= str_len - 1;
//
//	while (l < h)
//	{
//		if (str[l++] != str[h--])
//		{
//			return false;
//		}
//	}
//	
//	return true;
//}
//
//int main()
//{
//	std::string string1 = "YOLO";
//	ReverseStringM1(string1);
//	ReverseStringM2(string1);
//
//	std::string string2 = "ABCBAG";
//
//	if (IsPalindrome(string2))
//	{
//		STDPRINTLINE("Given strings are palindrome");
//	}
//	else
//	{
//		STDPRINTLINE("Given strings are not a palindrome");
//	}
//	
//
//	return 0;
//}

