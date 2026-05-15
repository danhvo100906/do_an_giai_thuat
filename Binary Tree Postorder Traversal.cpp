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

    // hàm duyệt postorder
    void postorder(TreeNode* root, vector<int>& result) {

        // nếu node rỗng thì dừng
        if (root == nullptr) return;

        // 1. duyệt cây con bên trái
        postorder(root->left, result);

        // 2. duyệt cây con bên phải
        postorder(root->right, result);

        // 3. xử lý node hiện tại (Root)
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> result;

        postorder(root, result);

        return result;
    }
};