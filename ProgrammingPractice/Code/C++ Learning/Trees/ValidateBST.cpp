#include "../../../Helper Functions/BinaryTreeHelper.hpp"

bool checkBST(TreeNode* root, long low, long high)
{
	if (root == NULL)
		return true;
	if (root->val < low || root->val >high)
		return false;
	return checkBST(root->left, low, root->val - 1l) && checkBST(root->right, root->val + 1l, high);
}

bool isValidBST(TreeNode* root) 
{
	return checkBST(root, LONG_MIN, LONG_MAX);
}
int main()
{
	STDPRINTLINE("Hello World!");
	// [5,1,4,null,null,3,6]
	TreeNode* rootnode = new TreeNode(5);

	rootnode->left = new TreeNode(1);
	rootnode->right = new TreeNode(8);


	rootnode->right->left = new TreeNode(3);
	rootnode->right->right = new TreeNode(9);

	bool res = isValidBST(rootnode);

	STDPRINTLINE(res);


	return 0;
}