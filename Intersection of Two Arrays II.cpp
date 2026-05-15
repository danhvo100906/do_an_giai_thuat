class Solution {
public:

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // lưu số lần xuất hiện
        unordered_map<int, int> mp;

        // mảng kết quả
        vector<int> result;

        // đếm nums1
        for (int num : nums1) {

            mp[num]++;
        }

        // duyệt nums2
        for (int num : nums2) {

            // nếu còn tồn tại
            if (mp[num] > 0) {

                // thêm vào kết quả
                result.push_back(num);

                // giảm số lượng
                mp[num]--;
            }
        }

        return result;
    }
};