class Solution {
public:
    int climbStairs(int n) {
        // Nếu chỉ có 1 hoặc 2 bậc
        if (n <= 2) return n;

        int prev1 = 1; // dp[1]
        int prev2 = 2; // dp[2]
        int cur;

        // Tính từ bậc 3 đến n
        for (int i = 3; i <= n; i++) {
            cur = prev1 + prev2;
            prev1 = prev2;
            prev2 = cur;
        }

        return prev2;
    }
};
