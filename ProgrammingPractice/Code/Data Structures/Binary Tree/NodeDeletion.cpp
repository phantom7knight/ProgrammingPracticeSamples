#if 1
#include "../../stdafx.h"
#endif



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

void DeleteANode(TreeNode* node)
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



//		  1
//		 / 
//      2 - 3

void PreorderTraversal(TreeNode* rootNode)
{
	//traverse whole list
	if (rootNode == NULL)
	{
		return;
	}
	else
	{
		STDPRINTLINE(rootNode->data << " ");
	}

	PreorderTraversal(rootNode->ltree);

	PreorderTraversal(rootNode->rtree);

	return;
}


int main()
{
	TreeNode* rootNode = InsertNode(25);

	//left tree of root node
	rootNode->ltree = InsertNode(10);

	rootNode->ltree->ltree = InsertNode(22);
	rootNode->ltree->rtree = InsertNode(24);

	//right tree of root node
	rootNode->rtree = InsertNode(12);

	rootNode->rtree->ltree = InsertNode(40);
	rootNode->rtree->rtree = InsertNode(244);

	STDPRINTLINE("==============================================");
	PreorderTraversal(rootNode);
	STDPRINTLINE("==============================================");
	




	return 0;
}

