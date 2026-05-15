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

    // hàm trả về chiều cao của cây
    // nếu cây không balanced thì trả về -1
    int height(TreeNode* root) {

        // cây rỗng -> chiều cao = 0
        if (root == nullptr)
            return 0;

        // tính chiều cao cây con trái
        int left = height(root->left);

        // nếu cây con trái đã không cân bằng
        if (left == -1)
            return -1;

        // tính chiều cao cây con phải
        int right = height(root->right);

        // nếu cây con phải không cân bằng
        if (right == -1)
            return -1;

        // nếu chênh lệch chiều cao > 1 -> không balanced
        if (abs(left - right) > 1)
            return -1;

        // trả về chiều cao của node hiện tại
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {

        // nếu height trả về -1 -> cây không cân bằng
        return height(root) != -1;
    }
};