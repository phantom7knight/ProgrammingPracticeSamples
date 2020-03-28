
/*#include "../../stdafx.h"

//=================================================================================================
//Binary Tree Implementation
//=================================================================================================
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
	}

	return;
}

int main()
{
	TreeNode* rootNode = InsertNode(25);

	rootNode->ltree = InsertNode(10);
	rootNode->rtree = InsertNode(12);



	//Delete the whole tree
	DeleteNode(rootNode->ltree);
	DeleteNode(rootNode->rtree);
	DeleteNode(rootNode);


	return 0;
}



*/