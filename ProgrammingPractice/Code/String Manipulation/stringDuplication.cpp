
//=================================================================================================
//Remove Duplicates in a string
//=================================================================================================

//void PrintMap(std::unordered_map<char, int> map)
//{
//	for (auto i : map)
//	{
//		STDPRINTLINE(i.first);
//	}
//
//	return;
//}
//
//void RemoveRepeatedInPlace(char *arr)
//{
//	//With extra memory
//	std::unordered_map<char,int> map_here;
//	while (*arr != '\0')
//	{
//		map_here.insert(std::pair<char, int>(*arr, 1));
//
//		*(++arr);
//	}
//
//	PrintMap(map_here);
//
//	return;
//}
//
//int main()
//{
//	char arr[] = { "Halloween!" };
//
//	RemoveRepeatedInPlace(arr);
//
//	return 0;
//}
