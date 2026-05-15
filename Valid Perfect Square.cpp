class Solution {
public:

    bool isPerfectSquare(int num) {

        long long left = 1;
        long long right = num;

        // binary search
        while (left <= right) {

            long long mid = left + (right - left) / 2;

            long long square = mid * mid;

            // tìm thấy
            if (square == num) {

                return true;
            }

            // square quá lớn
            else if (square > num) {

                right = mid - 1;
            }

            // square quá nhỏ
            else {

                left = mid + 1;
            }
        }

        return false;
    }
};