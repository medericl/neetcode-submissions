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
    int max_hauteur(TreeNode *root) {
        if (root == nullptr)
            return 0;

        int r = max_hauteur(root->right);
        int l = max_hauteur(root->left);
        return 1 + std::max(r,l);
    }

    int diameterOfBinaryTree_(TreeNode* root, int *max) {
        if (root == nullptr)
            return 0;
        int res = 0;

        int r = max_hauteur(root->right);
        int l = max_hauteur(root->left);
        res = r + l;
        *max = std::max(*max, res);
        *max = std::max(*max, diameterOfBinaryTree_(root->right, max));
        *max = std::max(*max, diameterOfBinaryTree_(root->left, max));
        
        return res;
    }
    

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int max = 0;
        diameterOfBinaryTree_(root, &max);
        return max;
    }
};
