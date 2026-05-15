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

    bool isPalindrome(ListNode* head) {

        vector<int> nums;

        // duyệt linked list
        while (head != nullptr) {

            nums.push_back(head->val);

            head = head->next;
        }

        // 2 con trỏ
        int left = 0;
        int right = nums.size() - 1;

        // kiểm tra palindrome
        while (left < right) {

            // nếu khác nhau
            if (nums[left] != nums[right]) {

                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};