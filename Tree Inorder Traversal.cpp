class Solution {
public:

    // Hàm duyệt cây theo thứ tự Inorder: Left -> Root -> Right
    void inorder(TreeNode* root, vector<int>& result) {

        // nếu node rỗng thì dừng
        if (root == nullptr) return;

        // 1. duyệt cây con bên trái
        inorder(root->left, result);

        // 2. lưu giá trị của node hiện tại
        result.push_back(root->val);

        // 3. duyệt cây con bên phải
        inorder(root->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> result; // vector lưu kết quả

        // gọi hàm duyệt inorder
        inorder(root, result);

        return result; // trả về kết quả
    }
};