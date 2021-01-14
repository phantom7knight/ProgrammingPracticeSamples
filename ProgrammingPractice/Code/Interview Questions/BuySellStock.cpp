// 121. Best Time to Buy and Sell Stock

#include "../../Helper Functions/Helper.hpp"

int maxProfit(STDVECTOR(int)& prices)
{
	if (prices.size() <= 1)
	{
		return 0;
	}

	int maxProfit = -99999;

	int minSoFar = prices[0];

	// 7,1,5,3,6,4
	// 7,5,1,3,6,4
	// 7,5,8,3,1,2
	for (int i = 1; i < prices.size(); ++i)
	{
		if (minSoFar > prices[i])
		{
			minSoFar = prices[i];
		}

		int netProfit = prices[i] - minSoFar;

		if (netProfit > 0 && netProfit > maxProfit)
		{
			maxProfit = netProfit;
		}

	}

	if (maxProfit == -99999)
	{
		maxProfit = 0;
	}

	return maxProfit;
}

int main()
{
	STDPRINTLINE("Hello World!");

	STDVECTOR(int) stockValues = { 7,1,5,3,6,4 };
	int res = maxProfit(stockValues);
	STDPRINTLINE(res);
	STDPRINTLINE("=====================");
	
	stockValues.clear();
	res = 0;

	stockValues = { 7, 6, 4, 3, 1 };
	res = maxProfit(stockValues);
	STDPRINTLINE(res);
	STDPRINTLINE("=====================");

	return 0;
}