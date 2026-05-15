class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> result;

        int n = nums.size();

        // duyệt mảng
        for (int i = 0; i < n; i++) {

            // bắt đầu đoạn mới
            int start = nums[i];

            // tìm đoạn liên tiếp
            while (i + 1 < n && nums[i] + 1 == nums[i + 1]) {
                i++;
            }

            // số cuối đoạn
            int end = nums[i];

            // nếu chỉ có 1 số
            if (start == end) {

                result.push_back(to_string(start));
            }
            else {

                // đoạn nhiều số
                result.push_back(
                    to_string(start) + "->" + to_string(end)
                );
            }
        }

        return result;
    }
};