class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Số phần tử khác val

        // Duyệt toàn bộ mảng
        for (int i = 0; i < nums.size(); i++) {
            // Nếu phần tử hiện tại khác val
            if (nums[i] != val) {
                nums[k] = nums[i]; // Ghi đè phần tử hợp lệ
                k++;               // Tăng số phần tử hợp lệ
            }
        }

        // k là số phần tử không bằng val
        return k;
    }
};
