#include "../../../Helper Functions/Helper.hpp"


int CoinChangeHelper(STDVECTOR(int) &EachValue, int key, STDVECTOR(int) coins)
{
	// early exits
	if (key < 0) return -1;
	if (key == 0) return 0;
	// check if we an answer already
	if (EachValue[key - 1] != 0)
	{
		return EachValue[key - 1];
	}

	int min_here = INT_MAX;
	for (int i = 0; i < coins.size(); ++i)
	{
		int res = CoinChangeHelper(EachValue, key - coins[i], coins);
		
		if (res >= 0 && res < min_here)
		{
			min_here = 1 + res;
		}
	}
	EachValue[key - 1] = min_here;
	return 0;

}

int coinChange(std::vector<int>& coins, int amount) 
{
	std::vector<int> EachValue ;
	EachValue.resize(amount);

	CoinChangeHelper(EachValue, amount, coins);

	return EachValue[amount-1];
}

/*int coinChangeHelPer(STDVECTOR(int) coins, int rem, STDVECTOR(int) count)
{
	if (rem < 0) return -1;
	if (rem == 0) return 0;
	if (count[rem - 1] != 0)
		return count[rem - 1];
	
	int min = INT_MAX;
	for (int coin : coins) 
	{
		int res = coinChangeHelPer(coins, rem - coin, count);
		if (res >= 0 && res < min)
			min = 1 + res;
	}
	count[rem - 1] = (min == INT_MAX) ? -1 : min;
	return count[rem - 1];
}

int coinChange(STDVECTOR(int) coins, int amount)
{
	if (amount < 1) return 0;
	STDVECTOR(int) count ;
	count.resize(amount);
	return coinChangeHelPer(coins, amount, count);
}*/

// Coins 1,2,5
int main()
{
	STDPRINTLINE("Hello World!!");

	Timer t("Coin Change");
	std::vector<int> coins = { 1,2,5 };
	//int res = coinChange(coins, 11);
	int res = coinChange(coins, 2);
	STDPRINTLINE(res);

	return 0;
}

