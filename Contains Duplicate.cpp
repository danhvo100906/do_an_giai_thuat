class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen; // lưu các số đã gặp

        // duyệt từng phần tử
        for (int num : nums) {

            // nếu num đã tồn tại trong set
            if (seen.count(num)) {
                return true;
            }

            // thêm num vào set
            seen.insert(num);
        }

        // không có phần tử trùng
        return false;
    }
};