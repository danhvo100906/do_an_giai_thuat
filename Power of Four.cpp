class Solution {
public:

    bool isPowerOfFour(int n) {

        // số <= 0 không hợp lệ
        if (n <= 0) {
            return false;
        }

        // chia liên tục cho 4
        while (n % 4 == 0) {

            n /= 4;
        }

        // nếu cuối cùng còn 1
        return n == 1;
    }
};