class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0; // ứng viên
        int count = 0;     // số phiếu

        for (int num : nums) {

            // nếu chưa có ứng viên
            if (count == 0) {
                candidate = num;
            }

            // nếu giống ứng viên -> tăng phiếu
            if (num == candidate) {
                count++;
            } 
            else {
                count--; // khác -> giảm phiếu
            }
        }

        return candidate; // chắc chắn tồn tại majority
    }
};