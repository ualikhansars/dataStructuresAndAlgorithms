#include "BinarySearchTree.h"

void BinarySearchTree::Transplant(TreeNode* u, TreeNode* v)
{
	if (u->parent == nullptr)
		root = v;
	else if (u == u->parent->left)
		u->parent->left = v;
	else
		u->parent->right = v;
	if (v != nullptr)
		v->parent = u->parent;
}	

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
	TreeNode* parent = nullptr;
	TreeNode* x = root;
	
	while (x != nullptr)
	{
		parent = x;
		if (newNode.key < x->key) 
			x = x->left;
		else 
			x = x->right;
	}
	newNode.parent = parent;
	if (parent == nullptr)
		root = &newNode;
	else if (newNode.key < parent->key)
		parent->left = &newNode;
	else
		parent->right = &newNode;
}

TreeNode* BinarySearchTree::Minumum(TreeNode* node)
{
	while (node->left != nullptr) {
		node = node->left;
	}
	return node;
}

TreeNode* BinarySearchTree::Maximum(TreeNode* node)
{
	while (node->right != nullptr) {
		node = node->right;
	}
	return node;
}

TreeNode* BinarySearchTree::Successor(TreeNode* node)
{
	if (node->right != nullptr)
		return Minumum(node->right);
	TreeNode* parent = node->parent;
	while (parent != nullptr and node == parent->right) {
		node = parent;
		parent = parent->parent;
	}

	return parent;
}

TreeNode::TreeNode(int key, TreeNode* left, TreeNode* right, TreeNode* p)
	: key(key), left(left), right(right), parent(p)
{ 
}
