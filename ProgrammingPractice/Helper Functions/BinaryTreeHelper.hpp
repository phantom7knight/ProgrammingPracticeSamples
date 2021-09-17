#include "Helper.hpp"

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


#pragma region DFS
void PreOrderTraversal(TreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	STDPRINTLINE(root->val);
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);

	return;
}

void InOrderTraversal(TreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	InOrderTraversal(root->left);
	STDPRINTLINE(root->val);
	InOrderTraversal(root->right);

	return;
}

void PostOrderTraversal(TreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	STDPRINTLINE(root->val);

	return;
}
#pragma endregion

#pragma region BFS
void BFSTraversal(TreeNode* root)
{
	if (root == NULL)
	{
		return;
	}

	STDQUEUE(TreeNode*) queue;
	queue.push(root);

	while (!queue.empty())
	{
		TreeNode* top = queue.front();

		if (top->left)
		{
			queue.push(top->left);
		}

		if (top->right)
		{
			queue.push(top->right);
		}

		STDPRINTLINE(top->val);

		// pop from the front
		queue.pop();
	}
}
#pragma endregion