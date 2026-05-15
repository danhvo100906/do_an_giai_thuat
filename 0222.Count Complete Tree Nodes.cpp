class Solution {
public:

    // tính chiều cao bên trái
    int leftHeight(TreeNode* node) {

        int height = 0;

        while (node != nullptr) {
            height++;
            node = node->left;
        }

        return height;
    }

    // tính chiều cao bên phải
    int rightHeight(TreeNode* node) {

        int height = 0;

        while (node != nullptr) {
            height++;
            node = node->right;
        }

        return height;
    }

    int countNodes(TreeNode* root) {

        // cây rỗng
        if (root == nullptr) {
            return 0;
        }

        // lấy chiều cao trái và phải
        int lh = leftHeight(root);
        int rh = rightHeight(root);

        // nếu bằng nhau -> perfect binary tree
        if (lh == rh) {

            // công thức: 2^h - 1
            return (1 << lh) - 1;
        }

        // nếu không -> đệ quy
        return 1 + countNodes(root->left)
                 + countNodes(root->right);
    }
};