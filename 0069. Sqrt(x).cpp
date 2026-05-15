class Solution {
public:
    int mySqrt(int x) {
        // Trường hợp đặc biệt
        if (x == 0 || x == 1) return x;

        int left = 1, right = x;
        int ans = 0; // Lưu kết quả tạm thời

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            // Nếu mid^2 <= x thì mid có thể là kết quả
            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1; // Thử số lớn hơn
            } 
            else {
                right = mid - 1; // Giảm phạm vi
            }
        }

        return ans;
    }
};
