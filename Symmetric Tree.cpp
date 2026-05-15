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

    // Hàm kiểm tra hai cây có đối xứng nhau không
    bool mirror(TreeNode* left, TreeNode* right) {

        // nếu cả hai node đều rỗng → đối xứng
        if (left == nullptr && right == nullptr)
            return true;

        // nếu một trong hai rỗng → không đối xứng
        if (left == nullptr || right == nullptr)
            return false;

        // nếu giá trị khác nhau → không đối xứng
        if (left->val != right->val)
            return false;

        // kiểm tra đối xứng chéo
        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {

        // gọi hàm kiểm tra từ hai nhánh của root
        return mirror(root->left, root->right);
    }
};