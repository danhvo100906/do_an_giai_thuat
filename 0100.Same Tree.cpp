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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // nếu cả hai node đều rỗng -> giống nhau
        if (p == nullptr && q == nullptr)
            return true;

        // nếu một node rỗng, một node không -> khác nhau
        if (p == nullptr || q == nullptr)
            return false;

        // nếu giá trị node khác nhau -> khác cây
        if (p->val != q->val)
            return false;

        // kiểm tra đệ quy cây con bên trái và bên phải
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};