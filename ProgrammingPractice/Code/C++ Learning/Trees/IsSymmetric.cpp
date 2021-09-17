#include "../../../Helper Functions/BinaryTreeHelper.hpp"

bool isSymmetric(TreeNode* root)
{



	return true;
}

void testing()
{
	int	i = 1;

	int res = 1;

	while (1)
	{
		res = i++;
	}

	BREAKPOINTTEMPVAR;

	return;
}

int main()
{
	STDPRINTLINE("Hello World!");

	// [1,2,2,3,4,4,3]
	TreeNode* rootnode = new TreeNode(1);

	rootnode->left = new TreeNode(2);
	rootnode->right = new TreeNode(2);

	rootnode->left->left = new TreeNode(3);
	rootnode->left->right = new TreeNode(4);

	rootnode->right->left = new TreeNode(4);
	rootnode->right->right = new TreeNode(3);
	
	testing();

	bool res = isSymmetric(rootnode);

	STDPRINTLINE(res);

	return 0;
}