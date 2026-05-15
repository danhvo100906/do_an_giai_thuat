class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result = 0; // biến lưu kết quả

        for (int num : nums) {
            result ^= num; // XOR từng phần tử
        }

        return result; // số còn lại chính là đáp án
    }
};