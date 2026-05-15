/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:

    int guessNumber(int n) {

        long long left = 1;
        long long right = n;

        // binary search
        while (left <= right) {

            long long mid = left + (right - left) / 2;

            int res = guess(mid);

            // đoán đúng
            if (res == 0) {

                return mid;
            }

            // số cần tìm nhỏ hơn mid
            else if (res == -1) {

                right = mid - 1;
            }

            // số cần tìm lớn hơn mid
            else {

                left = mid + 1;
            }
        }

        return -1;
    }
};