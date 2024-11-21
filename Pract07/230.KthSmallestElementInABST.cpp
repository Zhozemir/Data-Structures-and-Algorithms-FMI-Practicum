#include <iostream>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

};

void dfs(TreeNode* root, int& k, int& toReturn) {

    if (!root) 
        return;

    if (root->left)
        dfs(root->left, k, toReturn);

    k--;

    if (k == 0) {

        toReturn = root->val;
        return;

    }

    if (root->right)
        dfs(root->right, k, toReturn);
   
}

int kthSmallest(TreeNode* root, int k) {
	
    int trackK = k;
    int toReturn;
    dfs(root, k, toReturn);
    return toReturn;
    
}