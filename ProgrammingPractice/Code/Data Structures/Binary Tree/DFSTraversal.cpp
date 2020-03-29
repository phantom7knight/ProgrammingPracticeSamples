#if 1
#include "../../../Helper Functions/Helper.hpp"
#endif

//==============================================
//In,Pre,Post order traversal
//==============================================

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

void DeleteNode(TreeNode* node)
{
	if (node != NULL)
	{
		if (node->ltree != NULL)
			delete node->ltree;
		if (node->rtree != NULL)
			delete node->rtree;
		//set the current node to null
		delete node;

		node = NULL;
	}

	return;
}


void DFSTraversal(TreeNode* node)
{
	std::queue<TreeNode*> traversalQ;
	
	//before doing anything push the root node into the Q

	traversalQ.push(node);

	while (!traversalQ.empty())
	{
		if(node->ltree)
			traversalQ.push(node->ltree);
		if(node->rtree)
			traversalQ.push(node->rtree);

		//pop the node and print the info
		TreeNode* node_here = traversalQ.front();

		STDPRINTLINE(node_here->data);

		traversalQ.pop();

		if(!traversalQ.empty())
			node = traversalQ.front();

	}

	return;
}



int main()
{
	TreeNode* rootNode = InsertNode(1);

	//left tree of root node
	rootNode->ltree = InsertNode(2);

	rootNode->ltree->ltree = InsertNode(4);
	rootNode->ltree->rtree = InsertNode(5);

	//right tree of root node
	rootNode->rtree = InsertNode(3);

	rootNode->rtree->ltree = InsertNode(40);
	rootNode->rtree->rtree = InsertNode(244);

	DFSTraversal(rootNode);
	

	
	return 0;
}

