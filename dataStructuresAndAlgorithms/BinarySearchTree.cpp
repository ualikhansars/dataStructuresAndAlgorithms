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

void BinarySearchTree::Insert(int value)
{
	TreeNode newNode = TreeNode(value);
	TreeNode* y = nullptr;
	TreeNode* x = root;
	
	while (x != nullptr)
	{
		y = x;
		if (newNode.key < x->key) 
			x = x->left;
		else 
			x = x->right;
	}
	newNode.p = y;
	if (y == nullptr)
		root = &newNode;
	else if (newNode.key < y->key)
		y->left = &newNode;
	else
		y->right = &newNode;
}

TreeNode::TreeNode(int key, TreeNode* left = nullptr, TreeNode* right = nullptr, TreeNode* p = nullptr)
	: key(key), left(left), right(right), p(p)
{
}
