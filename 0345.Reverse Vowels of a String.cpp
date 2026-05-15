class Solution {
public:

    // hàm kiểm tra nguyên âm
    bool isVowel(char c) {

        c = tolower(c);

        return c == 'a' ||
               c == 'e' ||
               c == 'i' ||
               c == 'o' ||
               c == 'u';
    }

    string reverseVowels(string s) {

        // 2 con trỏ
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // tìm nguyên âm bên trái
            while (left < right && !isVowel(s[left])) {
                left++;
            }

            // tìm nguyên âm bên phải
            while (left < right && !isVowel(s[right])) {
                right--;
            }

            // đổi chỗ nguyên âm
            swap(s[left], s[right]);

            // tiến vào giữa
            left++;
            right--;
        }

        return s;
    }
};