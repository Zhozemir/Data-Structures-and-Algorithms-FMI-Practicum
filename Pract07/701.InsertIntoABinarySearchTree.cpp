#include <iostream>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

TreeNode* insertIntoBST(TreeNode* root, int val) {

	if (!root) {
	
		root = new TreeNode(val);
		return root;
	
	}

	if (root->val > val)
		root->left = insertIntoBST(root->left, val);
	else
		root->right = insertIntoBST(root->right, val);

	return root;

}