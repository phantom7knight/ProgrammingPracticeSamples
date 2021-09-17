#include "../../../Helper Functions/Helper.hpp"


int ClimbStairsHelper(HASHMAP(int, int)& map, int steps)
{
	if (steps < 3 && steps > 0)
	{
		return steps;
	}

	// check if we already have the result
	if (map.find(steps) != map.end())
	{
		return map[steps];
	}

	return map[steps] = ClimbStairsHelper(map, steps - 1) + ClimbStairsHelper(map, steps - 2);

}

int climbStairs(int n)
{
	if (n < 3 && n > 0)
	{
		return n;
	}

	HASHMAP(int, int) map;

	ClimbStairsHelper(map, n);

	return map[n];
}

int main()
{
	STDPRINTLINE("Hello World!!");
	
	Timer t("climb stairs");
	int res = climbStairs(2);
	STDPRINTLINE(res);

	return 0;
}