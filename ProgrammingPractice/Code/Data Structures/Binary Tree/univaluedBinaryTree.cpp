#include "../../../Helper Functions/Helper.hpp"

struct TreeNode
{
	struct TreeNode* ltree;
	struct TreeNode* rtree;

	int data = 0;

	TreeNode(int a_data) :data(a_data), ltree(NULL), rtree(NULL)
	{

	}
};

TreeNode* InsertNode(int data)
{
	TreeNode* newNode = new TreeNode(data);

	newNode->ltree = NULL;
	newNode->rtree = NULL;

	return newNode;
}





bool isUniValued(TreeNode* rootNode)
{
	//default new value
	int key = 999;

	std::queue<TreeNode*> visitedNodes;

	//Push the rootnode into the Q
	visitedNodes.push(rootNode);

	while (!visitedNodes.empty())
	{
		TreeNode* node_here = visitedNodes.front();

		if (node_here->ltree)
			visitedNodes.push(node_here->ltree);
		if (node_here->rtree)
			visitedNodes.push(node_here->rtree);


		if(key == 999 )
			key = node_here->data;
			
		if (key != 999 && key != node_here->data)
			return false;




		visitedNodes.pop();
	}

	return true;
}


int main()
{
	TreeNode* rootNode = InsertNode(1);

	rootNode->ltree = InsertNode(1);
	rootNode->rtree = InsertNode(1);


	rootNode->ltree->ltree = InsertNode(2);
	rootNode->ltree->rtree = InsertNode(1);


	bool res = isUniValued(rootNode);

	STDPRINTLINE(res);

	return 0;
}