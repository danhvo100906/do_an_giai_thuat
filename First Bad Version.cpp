/* The isBadVersion API is defined for you.
      bool isBadVersion(int version);
*/

class Solution {
public:

    int firstBadVersion(int n) {

        int left = 1;
        int right = n;

        // binary search
        while (left < right) {

            // tránh tràn số
            int mid = left + (right - left) / 2;

            // nếu mid là bad
            if (isBadVersion(mid)) {

                // bad đầu tiên ở bên trái hoặc chính mid
                right = mid;
            }
            else {

                // bad đầu tiên ở bên phải
                left = mid + 1;
            }
        }

        // left == right
        return left;
    }
};