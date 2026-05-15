class NumArray {
public:

    vector<int> prefix;

    // constructor
    NumArray(vector<int>& nums) {

        // prefix[0] = 0
        prefix.push_back(0);

        // tạo prefix sum
        for (int i = 0; i < nums.size(); i++) {

            prefix.push_back(
                prefix.back() + nums[i]
            );
        }
    }
    
    int sumRange(int left, int right) {

        // tổng từ left -> right
        return prefix[right + 1] - prefix[left];
    }
};