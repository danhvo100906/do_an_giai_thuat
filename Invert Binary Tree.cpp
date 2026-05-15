class Solution {
public:

    TreeNode* invertTree(TreeNode* root) {

        // cây rỗng
        if (root == nullptr) {
            return nullptr;
        }

        // hoán đổi left và right
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // đảo cây bên trái
        invertTree(root->left);

        // đảo cây bên phải
        invertTree(root->right);

        return root;
    }
};