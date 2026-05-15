class Solution {
public:

    void moveZeroes(vector<int>& nums) {

        // vị trí đặt số khác 0
        int index = 0;

        // duyệt mảng
        for (int i = 0; i < nums.size(); i++) {

            // nếu khác 0
            if (nums[i] != 0) {

                // đổi chỗ
                swap(nums[i], nums[index]);

                // tăng vị trí
                index++;
            }
        }
    }
};