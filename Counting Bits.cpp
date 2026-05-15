class Solution {
public:

    vector<int> countBits(int n) {

        // mảng kết quả
        vector<int> ans(n + 1);

        // ans[0] = 0 mặc định

        // tính từ 1 -> n
        for (int i = 1; i <= n; i++) {

            ans[i] = ans[i / 2] + (i % 2);
        }

        return ans;
    }
};