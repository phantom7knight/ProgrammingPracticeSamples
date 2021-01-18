#include "../../../Helper Functions/Helper.hpp"

#define Bad_Soln 1

#if Bad_Soln 
int firstUniqChar(std::string s)
{	
	std::vector<int> fre(26, 0);
	for (char c : s) 
	{
		fre[c - 'a'] ++;
	}

	for (int i = 0; i < s.length(); ++i) {
		if (fre[s[i] - 'a'] == 1) {
			return i;
		}
	}

	return -1;

}
#else

#endif


int main()
{
	STDPRINTLINE("Hello World!!!!");

	firstUniqChar("loveleetcode");

	return 0;
}