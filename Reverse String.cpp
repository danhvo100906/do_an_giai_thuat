class Solution {
public:

    void reverseString(vector<char>& s) {

        // con trỏ trái
        int left = 0;

        // con trỏ phải
        int right = s.size() - 1;

        // đổi chỗ đến khi gặp nhau
        while (left < right) {

            // swap 2 ký tự
            swap(s[left], s[right]);

            // tiến vào giữa
            left++;
            right--;
        }
    }
};