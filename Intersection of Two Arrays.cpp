class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // lưu phần tử nums1
        unordered_set<int> s1;

        // lưu kết quả unique
        unordered_set<int> result;

        // thêm nums1 vào set
        for (int num : nums1) {

            s1.insert(num);
        }

        // duyệt nums2
        for (int num : nums2) {

            // nếu tồn tại trong nums1
            if (s1.count(num)) {

                result.insert(num);
            }
        }

        // chuyển set -> vector
        return vector<int>(result.begin(), result.end());
    }
};