class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Nếu mảng rỗng thì không có phần tử duy nhất
        if (nums.empty()) return 0;

        int k = 1; // Vị trí để đặt phần tử duy nhất tiếp theo

        // Duyệt từ phần tử thứ 2
        for (int i = 1; i < nums.size(); i++) {
            // Nếu khác phần tử trước đó
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i]; // Ghi đè giá trị mới
                k++;               // Tăng số phần tử duy nhất
            }
        }

        // k là số lượng phần tử duy nhất
        return k;
    }
};
