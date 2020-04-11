#include "../../Helper Functions/Helper.hpp"
#define SOLUTION1


//LeetCode: 74



bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) 
{
	bool res = false;

	

	//bad solution
#ifndef SOLUTION1
	
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[i].size(); ++j)
		{
			//check if this is our element
			if (matrix[i][j] == target)
			{
				STDPRINTLINE("Found");
				res = true;
				return res;
			}

		}
	}

#else
	
	//check if the first element is greater than current target


	for (int i = 0; i < matrix.size(); ++i)
	{
		if (target >= matrix[i][0] && !matrix[i].empty())
		{
			for (int j = 0; j < matrix[i].size(); ++j)
			{


				//check if this is our element
				if (matrix[i][j] == target)
				{
					STDPRINTLINE("Found");
					res = true;
					return res;
				}


			}
		}
		
	}



#endif


	return res;
}




int main()
{
	STDPRINTLINE("Hello World!");


	STDVECTOR(STDVECTOR(int)) inputMat;

	//Example Input 1
	inputMat.resize(3);

	inputMat[0] = { 1,3,5,7 };
	inputMat[1] = { 10, 11, 16, 20 };
	inputMat[2] = { 23, 30, 34, 50 };

	int target = 16;

	bool res = searchMatrix(inputMat, target);

	STDPRINTLINE(res);

	target = 13;

	res = searchMatrix(inputMat, target);
	
	STDPRINTLINE(res);


	return 0;
}