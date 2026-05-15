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

    // hàm duyệt preorder
    void preorder(TreeNode* root, vector<int>& result) {

        // nếu node rỗng thì dừng
        if (root == nullptr) return;

        // 1. xử lý node hiện tại (Root)
        result.push_back(root->val);

        // 2. duyệt cây con bên trái
        preorder(root->left, result);

        // 3. duyệt cây con bên phải
        preorder(root->right, result);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> result;

        preorder(root, result);

        return result;
    }
};