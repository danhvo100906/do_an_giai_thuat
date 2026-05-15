class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // duyệt mảng
        for (int i = 0; i < nums.size(); i++) {

            // nếu số đã từng xuất hiện
            if (mp.count(nums[i])) {

                // kiểm tra khoảng cách index
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            // cập nhật vị trí mới nhất
            mp[nums[i]] = i;
        }

        return false;
    }
};