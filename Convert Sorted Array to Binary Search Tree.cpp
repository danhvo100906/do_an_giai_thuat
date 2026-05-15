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

    // hàm tạo BST từ đoạn mảng [left, right]
    TreeNode* buildBST(vector<int>& nums, int left, int right) {

        // nếu left > right -> không còn phần tử
        if (left > right)
            return nullptr;

        // chọn phần tử giữa làm root
        int mid = left + (right - left) / 2;

        // tạo node mới
        TreeNode* root = new TreeNode(nums[mid]);

        // xây cây con bên trái
        root->left = buildBST(nums, left, mid - 1);

        // xây cây con bên phải
        root->right = buildBST(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        // gọi hàm xây BST từ toàn bộ mảng
        return buildBST(nums, 0, nums.size() - 1);
    }
};