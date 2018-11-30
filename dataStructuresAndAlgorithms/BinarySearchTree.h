#pragma once

class BinarySearchTree {
	TreeNode* root;

public:
	BinarySearchTree();

	TreeNode* Search(TreeNode* root, int key);
};

struct TreeNode {
	int key;
	TreeNode* left;
	TreeNode* right;
	TreeNode* p;
};