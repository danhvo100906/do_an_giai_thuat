class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // tạo node giả trước head
        ListNode* dummy = new ListNode(0);

        // nối dummy với head
        dummy->next = head;

        // con trỏ dùng để duyệt
        ListNode* current = dummy;

        // duyệt linked list
        while (current->next != nullptr) {

            // nếu node kế tiếp có giá trị cần xóa
            if (current->next->val == val) {

                // bỏ qua node đó
                current->next = current->next->next;
            }
            else {

                // sang node tiếp theo
                current = current->next;
            }
        }

        // head mới
        return dummy->next;
    }
};