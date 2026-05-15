class Solution {
public:

    bool canConstruct(string ransomNote, string magazine) {

        // lưu số lần xuất hiện 26 chữ cái
        vector<int> count(26, 0);

        // đếm ký tự trong magazine
        for (char c : magazine) {

            count[c - 'a']++;
        }

        // dùng ký tự để tạo ransomNote
        for (char c : ransomNote) {

            count[c - 'a']--;

            // nếu âm -> thiếu ký tự
            if (count[c - 'a'] < 0) {

                return false;
            }
        }

        return true;
    }
};