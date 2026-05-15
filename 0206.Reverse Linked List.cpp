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
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr; // node trước
        ListNode* current = head; // node hiện tại

        // duyệt linked list
        while (current != nullptr) {

            // lưu node tiếp theo
            ListNode* nextNode = current->next;

            // đảo chiều con trỏ
            current->next = prev;

            // di chuyển prev lên
            prev = current;

            // di chuyển current lên
            current = nextNode;
        }

        // prev là head mới
        return prev;
    }
};