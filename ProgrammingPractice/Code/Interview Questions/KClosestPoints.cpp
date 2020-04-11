#include "../../Helper Functions/Helper.hpp"

//LeetCode: 973
//TODO: incomplete for now, finish it soon!!!!!!

//TODO: optimize this by taking sqr of the point 2
float distanceBetweenPoints(std::vector<int> point1, std::vector<int> point2)
{
	//Distance = (x2-x1)^2 + (y2-y1)^2

	float distance = 0.f;

	float x2x1 = point2[0];
	float y2y1 = point2[1];

	distance = x2x1 * x2x1 + y2y1 * y2y1;

	return distance;
}




std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int K) 
{

	std::vector<std::vector<int>> result;

	std::vector<std::vector<int>> prev_pos;


	std::vector<int> origin = { 0,0 };
	int min_dist = 9999;

	for (int i = 0; i < points.size(); ++i)
	{
		
		float distance_here = distanceBetweenPoints(origin, points[i]);
		float Sqrdistance_here = distance_here * distance_here;
		
		if (Sqrdistance_here <= min_dist)
		{
			//Update Min Distance
			min_dist = Sqrdistance_here;
			prev_pos.push_back(points[i]);

			//Now compare the inner distance_difference


			result.push_back(points[i]);
		}

	}
	
	return result;
}



int main()
{
	STDPRINTLINE("Hello World!!!!!!!!");

	std::vector<std::vector<int>> points;

	//[[1,3],[-2,2]]
	std::vector<int> temp_push;
	temp_push.push_back(1);
	temp_push.push_back(3);
	points.push_back(temp_push);

	temp_push.clear();
	
	temp_push.push_back(-2);
	temp_push.push_back(2);

	points.push_back(temp_push);

	int num = 1;

	std::vector<std::vector<int>> res = kClosest(points, num);

	STDPRINTLINE("The result size is :" << res.size());

	return 0;
}