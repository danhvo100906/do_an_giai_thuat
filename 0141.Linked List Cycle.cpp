/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        // nếu list rỗng hoặc chỉ có 1 node -> không có cycle
        if (head == nullptr || head->next == nullptr)
            return false;

        // khởi tạo 2 con trỏ
        ListNode* slow = head;
        ListNode* fast = head;

        // duyệt danh sách
        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;         // đi 1 bước
            fast = fast->next->next;   // đi 2 bước

            // nếu gặp nhau -> có cycle
            if (slow == fast)
                return true;
        }

        // nếu thoát vòng lặp -> không có cycle
        return false;
    }
};