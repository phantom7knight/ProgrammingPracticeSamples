
// Leetcode: 200. Number of Islands

#include "../../Helper Functions/Helper.hpp"

struct ToVisit
{
	int posX;
	int posY;
};

int numIslands(STDVECTOR(STDVECTOR(char)) &grid)
{
	int res = 0;

	STDVECTOR(STDVECTOR(bool)) isVisited;
	isVisited.resize(grid.size());

	// setup isVisited array
	for (int i = 0; i < grid.size(); ++i)
	{
		for (int j = 0; j < grid[i].size(); ++j)
		{
			isVisited[i].push_back(0);
		}
	}

	STDQUEUE(ToVisit) queue;

	for (int i = 0; i < grid.size(); ++i)
	{
		for (int j = 0; j < grid[i].size(); ++j)
		{

		}
	}


	return res;
}



int main()
{
	STDPRINTLINE("Hello World!");

	char arrGrid[4][5] = {
										{'1', '1', '1', '1', '0'},
										{'1', '1', '0', '1', '0'},
										{'1', '1', '0', '0', '0'},
										{'0', '0', '0', '0', '0'}
									};


	STDVECTOR(STDVECTOR(char)) grid;

	for (int i = 0; i < 4; ++i)
	{
		STDVECTOR(char) row;
		for (int j = 0; j < 5; ++j)
		{
			row.push_back(arrGrid[i][j]);
		}
		grid.push_back(row);
	}

	int* a;
	STDPRINTLINE(sizeof(a));
	//int res = numIslands(grid);
	//STDPRINTLINE(res);

	return 0;
}