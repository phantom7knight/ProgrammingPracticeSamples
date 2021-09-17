#include "../../../Helper Functions/Helper.hpp"

// Find the number of ways a person can reach from start to end when they can move only
// one unit right or down.
// https://youtu.be/oBt53YbR9Kk?t=2322


long long int GridSolver(HASHMAP(std::string, long long int) &map, int m, int n)
{
	if (m == 0 || n == 0)
	{
		return 0;
	}

	if (m == 1 || n == 1)
	{
		return 1;
	}

	std::string key = std::to_string(m) + ',' + std::to_string(n);

	// check if there is a solution already available
	if (map.find(key) != map.end())
	{
		return map[key];
	}


	return map[key] = GridSolver(map, m - 1, n) + GridSolver(map, m, n - 1);
}


long long int  GridWays(int m, int n)
{
	HASHMAP(std::string, long long int) map;

	GridSolver(map, m, n);

	std::string res = std::to_string(m) + ',' + std::to_string(n);

	return map[res];
}


int main()
{
	STDPRINTLINE("Hello World!!");

	{
		Timer t("GridSolver");
		long long int  res = GridWays(18,18);
		STDPRINTLINE(res);
	}

	return 0;
}