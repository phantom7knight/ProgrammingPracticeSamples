#include "../../../Helper Functions/Helper.hpp"
//#define BAD_SOLN1

#ifdef BAD_SOLN1
bool isAnagram(std::string s, std::string t)
{
	HASHMAP(char, int) solnMap1;
	HASHMAP(char, int) solnMap2;

	for (auto i : s)
	{
		if (solnMap1.find(i) == solnMap1.end())
		{
			// if not found
			solnMap1[i] = 1;
		}
		else
		{
			// if found
			solnMap1[i] = ++solnMap1[i];
		}
	}

	for (auto i : t)
	{
		if (solnMap2.find(i) == solnMap2.end())
		{
			// if not found
			solnMap2[i] = 1;
		}
		else
		{
			// if found
			solnMap2[i] = ++solnMap2[i];
		}
	}

	if (solnMap1.size() != solnMap2.size())
	{
		return false;
	}

	for (auto i : solnMap1)
	{
		// if found
		if (solnMap2.find(i.first) != solnMap2.end())
		{
			// compare the count
			if (i.second != solnMap2[i.first])
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	return true;
}
#elif BAD_SOLN2
bool isAnagram(std::string s, std::string t)
{
	std::sort(s.begin(), s.end());
	std::sort(t.begin(), t.end());

	if (s.size() != t.size())
	{
		return false;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != t[i])
		{
			return false;
		}
	}

	
	return true;
}
#else
bool isAnagram(std::string s, std::string t)
{
	// need to finish this
	return true;
}
#endif

int main()
{
	STDPRINTLINE("Hello World!!!!");

	bool res = isAnagram("a", "n");

	STDPRINTLINE(res);

	return 0;
}