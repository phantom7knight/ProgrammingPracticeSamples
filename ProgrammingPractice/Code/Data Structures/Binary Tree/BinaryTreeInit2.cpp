#include "../../stdafx.h"
//=================================================================================================
// Binary Tree Implementation
//=================================================================================================

//template<typename T>
//struct Node
//{
//	Node *left;
//	Node *right;
//
//	T data;
//
//	Node<T>()
//	{
//
//	}
//};
//
//template<typename T>
//void Insert(T a_data, Node<T> **root)
//{
//	if (*root == NULL)
//	{
//		//Insert the data and set the appropriate pointers
//		*root = new Node<T>;
//		(*root)->data = a_data;
//		(*root)->left = NULL;
//		(*root)->right = NULL;
//	}
//	else if(a_data < (*root)->data) // If data is less than root node data
//	{
//
//		//Insert on left node
//		Insert(a_data, &(*root)->left);
//
//	}
//	else if (a_data > (*root)->data)
//	{
//
//		//Insert on right node
//		Insert(a_data, &(*root)->right);
//
//	}
//}

//
//template<typename T>
//void DeleteTree(Node<T> ** root)
//{
//	if (root != NULL)
//	{
//		Node<T> **lef_here = *root->left;
//		DeleteTree(lef_here);
//		DeleteTree(root->right);
//
//		delete root;
//	}
//}


//int main()
//{
//	Node<int> *root = NULL;
//
//
//	int *a = nullptr;
//
//	//Insert into the Tree
//	Insert(5, &root);
//	Insert(15, &root);
//
//	//std::cout << "a " << a[0] << std::endl;
//	std::cout << "Root Node data value " << root->data << std::endl;
//	std::cout << "Root Node->Right data value " << root->right->data<< std::endl;
//
//	//Destroy Recursively
//	//DeleteTree(&root);
//
//	return 0;
//}
