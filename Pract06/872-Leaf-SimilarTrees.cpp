#include <iostream>
#include <vector>
#include <algorithm>


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	
};

void findLeaves(TreeNode* root, std::vector<int>& leaves) {

	if (!root)
		return;

	if (root->left == nullptr && root->right == nullptr)
		leaves.push_back(root->val);
    else {

        findLeaves(root->left, leaves);
        findLeaves(root->right, leaves);

    }
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {

	std::vector<int> t1;

	findLeaves(root1, t1);

	std::vector<int> t2;

	findLeaves(root2, t2);

    if (t1.size() == t2.size()) {

        if (std::equal(t1.begin(), t1.end(), t2.begin()))
            return true;

    }

	return false;

}

//int main() {
//
//    TreeNode* root1 = new TreeNode(3);
//    root1->left = new TreeNode(5);
//    root1->right = new TreeNode(1);
//    root1->left->left = new TreeNode(6);
//    root1->left->right = new TreeNode(2);
//    root1->left->right->left = new TreeNode(7);
//    root1->left->right->right = new TreeNode(4);
//    root1->right->left = new TreeNode(9);
//    root1->right->right = new TreeNode(8);
//
//    TreeNode* root2 = new TreeNode(3);
//    root2->left = new TreeNode(5);
//    root2->right = new TreeNode(1);
//    root2->left->left = new TreeNode(6);
//    root2->left->right = new TreeNode(7);
//    root2->right->left = new TreeNode(4);
//    root2->right->right = new TreeNode(2);
//    root2->right->right->left = new TreeNode(9);
//    root2->right->right->right = new TreeNode(11);
//    root2->right->right->right->left = new TreeNode(8);
//    root2->right->right->right->right = new TreeNode(10);
//
//    std::cout << leafSimilar(root1, root2);
//
//    delete root1->left->left;
//    delete root1->left->right->left;
//    delete root1->left->right->right;
//    delete root1->left->right;
//    delete root1->left;
//    delete root1->right->left;
//    delete root1->right->right;
//    delete root1->right;
//    delete root1;
//
//    delete root2->left->left;
//    delete root2->left->right;
//    delete root2->left;
//    delete root2->right->left;
//    delete root2->right->right->left;
//    delete root2->right->right->right->left;
//    delete root2->right->right->right->right;
//    delete root2->right->right->right;
//    delete root2->right->right;
//    delete root2->right;
//    delete root2;
//
//}