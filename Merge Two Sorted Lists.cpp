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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Node giả (dummy) để dễ xử lý
        ListNode dummy;
        ListNode* tail = &dummy; // Con trỏ dùng để xây danh sách mới

        // Duyệt khi cả hai list còn phần tử
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;     // Gắn node của list1
                list1 = list1->next;    // Di chuyển list1
            } else {
                tail->next = list2;     // Gắn node của list2
                list2 = list2->next;    // Di chuyển list2
            }
            tail = tail->next;          // Di chuyển tail
        }

        // Nối phần còn lại (nếu có)
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Trả về node đầu của danh sách đã gộp
        return dummy.next;
    }
};
