#pragma once

struct TreeNode {
	int key;
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;

	TreeNode() = delete;

	TreeNode(int key, TreeNode* left = nullptr, TreeNode* right = nullptr, TreeNode* p = nullptr);
};

class BinarySearchTree {
	TreeNode* root = nullptr;

	void Transplant(TreeNode* u, TreeNode* v);

public:

	BinarySearchTree();

	void Delete(TreeNode* node);

	TreeNode* Search(TreeNode* root, int key);

	void Insert(int value);

	TreeNode* Minumum(TreeNode* node);

	TreeNode* Maximum(TreeNode* node);

	TreeNode* Successor(TreeNode* node);
};

