#pragma once

class BinarySearchTree {
	TreeNode* root;

public:
	BinarySearchTree();

	TreeNode* Search(TreeNode* root, int key);

	void Insert(int value);
};

struct TreeNode {
	int key;
	TreeNode* left;
	TreeNode* right;
	TreeNode* p;

public:
	TreeNode(int key, TreeNode* left = nullptr, TreeNode* right = nullptr, TreeNode* p = nullptr){}
};