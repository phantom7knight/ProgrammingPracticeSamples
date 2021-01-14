#include "../../Helper Functions/Helper.hpp"

// LeetCode: 104. Maximum Depth of Binary Tree

struct TreeNode 
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

// Breadth First Insertion for Binary Tree
void LevelOrderInsertion(TreeNode** root, STDVECTOR(int) list)
{
	STDQUEUE(TreeNode*) queueToAdd;

	for (auto i : list)
	{
		TreeNode* newNode = new TreeNode(i);


		if (*root == NULL)
		{
			// we are at the root node
			*root = newNode;
			queueToAdd.push(newNode);

			return;
		}

		// now find the subchile from the queue and add this new node to it

		auto i = "22";
		auto j = std::atoi(i);

	}
	
	return;
}


int main()
{
	STDVECTOR(int) val = { 1,2,3,4,5,NULL, NULL };

	TreeNode* root = NULL;

	LevelOrderInsertion(&root, val);

	return 0;
}