class Solution {
public:
    int hammingWeight(unsigned int n) {

        int count = 0;  // đếm số bit 1

        while (n > 0) {

            // nếu bit cuối là 1
            if (n & 1) {
                count++;
            }

            // dịch phải để xét bit tiếp theo
            n >>= 1;
        }

        return count;
    }
};