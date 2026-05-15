/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Nếu list rỗng hoặc chỉ có 1 node
        if (head == nullptr) return head;

        ListNode* current = head;

        // Duyệt linked list
        while (current != nullptr && current->next != nullptr) {
            // Nếu node hiện tại trùng node kế tiếp
            if (current->val == current->next->val) {
                // Bỏ node trùng
                current->next = current->next->next;
            } else {
                // Sang node tiếp theo
                current = current->next;
            }
        }

        return head;
    }
};
