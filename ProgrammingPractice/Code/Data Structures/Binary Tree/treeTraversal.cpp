#if 1
#include "../../stdafx.h"
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

//		  2
//		 / \
//      1   3

void InOrderTraversal(TreeNode* rootNode)
{
	//traverse whole list
	if (rootNode == NULL)
	{
		return;
	}

	InOrderTraversal(rootNode->ltree);

	if (rootNode != NULL)
		STDPRINTLINE(rootNode->data << " ");


	InOrderTraversal(rootNode->rtree);

	return;
}

//		  1
//		   \
//      3 - 2
void PostOrderTraversal(TreeNode* rootNode)
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

	PostOrderTraversal(rootNode->rtree);

	PostOrderTraversal(rootNode->ltree);

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
	InOrderTraversal(rootNode);
	STDPRINTLINE("==============================================");
	PostOrderTraversal(rootNode);
	STDPRINTLINE("==============================================");



	//Delete the whole tree
	//DeleteNode(rootNode->ltree);
	//DeleteNode(rootNode->rtree);
	//DeleteNode(rootNode);


	return 0;
}

