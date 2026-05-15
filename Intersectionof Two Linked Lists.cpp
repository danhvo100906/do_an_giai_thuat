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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // nếu một trong hai list rỗng
        if (headA == nullptr || headB == nullptr)
            return nullptr;

        ListNode* a = headA;
        ListNode* b = headB;

        // khi a != b thì tiếp tục
        while (a != b) {

            // nếu a hết list A -> chuyển sang B
            a = (a == nullptr) ? headB : a->next;

            // nếu b hết list B -> chuyển sang A
            b = (b == nullptr) ? headA : b->next;
        }

        // có thể là node giao nhau hoặc nullptr
        return a;
    }
};