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
    bool hasPathSum(TreeNode* root, int targetSum) {

        // nếu cây rỗng -> không có đường đi
        if (root == nullptr)
            return false;

        // nếu là leaf node
        if (root->left == nullptr && root->right == nullptr)
            return targetSum == root->val;

        // trừ giá trị node hiện tại
        targetSum -= root->val;

        // kiểm tra cây con trái hoặc phải
        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
};