/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int max_tree(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        return 1 + std::max(max_tree(root->right), max_tree(root->left));
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        int diff = max_tree(root->right) - max_tree(root->left);
        if (diff > 1 || diff < -1)
            return false;
        return isBalanced(root->right) && isBalanced(root->left);
    }

};
