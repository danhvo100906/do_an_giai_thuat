class Solution {
public:

    bool isUgly(int n) {

        // số <= 0 không phải ugly
        if (n <= 0) {

            return false;
        }

        // chia hết cho 2
        while (n % 2 == 0) {

            n /= 2;
        }

        // chia hết cho 3
        while (n % 3 == 0) {

            n /= 3;
        }

        // chia hết cho 5
        while (n % 5 == 0) {

            n /= 5;
        }

        // nếu còn 1 -> ugly
        return n == 1;
    }
};