class Solution {
public:
    bool isPowerOfTwo(int n) {

        // số âm hoặc 0 -> false
        if (n <= 0) {
            return false;
        }

        // power of two:
        // chỉ có đúng 1 bit = 1
        return (n & (n - 1)) == 0;
    }
};