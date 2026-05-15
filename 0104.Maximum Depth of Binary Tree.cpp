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
    int maxDepth(TreeNode* root) {

        // nếu cây rỗng thì độ sâu = 0
        if (root == nullptr)
            return 0;

        // tính độ sâu của cây con bên trái
        int leftDepth = maxDepth(root->left);

        // tính độ sâu của cây con bên phải
        int rightDepth = maxDepth(root->right);

        // độ sâu lớn nhất + node hiện tại
        return max(leftDepth, rightDepth) + 1;
    }
};