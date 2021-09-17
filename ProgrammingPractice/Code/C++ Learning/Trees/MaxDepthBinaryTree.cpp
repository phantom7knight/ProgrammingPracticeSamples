#include "../../../Helper Functions/BinaryTree.hpp"

int maxDepth(TreeNode* root) 
{
	if (root == nullptr)
	{
		return 0;
	}

	return std::max(1 + maxDepth(root->left), 1 + maxDepth(root->right));

}


int main()
{
	STDPRINTLINE("Hello World!");
	// [3,9,20,null,null,15,7]
	TreeNode* rootnode = new TreeNode(3);

	rootnode->left = new TreeNode(9);
	rootnode->right = new TreeNode(20);


	rootnode->right->left = new TreeNode(15);
	rootnode->right->right = new TreeNode(7);

	int res = maxDepth(rootnode);



	return 0;
}