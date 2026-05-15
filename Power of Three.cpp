class Solution {
public:

    bool isPowerOfThree(int n) {

        // số <= 0 không hợp lệ
        if (n <= 0) {
            return false;
        }

        // chia liên tục cho 3
        while (n % 3 == 0) {

            n /= 3;
        }

        // nếu cuối cùng còn 1
        return n == 1;
    }
};