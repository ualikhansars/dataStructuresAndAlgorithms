#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(): root(nullptr)
{
}

TreeNode* BinarySearchTree::Search(TreeNode* root, int key)
{
	if (root == nullptr || key == root->key)
		return root;
	if (key < root->key)
		return Search(root->left, key);
	else return Search(root->right, key);
}
