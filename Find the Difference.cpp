class Solution {
public:

    char findTheDifference(string s, string t) {

        // mảng đếm 26 chữ cái
        vector<int> count(26, 0);

        // đếm ký tự trong s
        for (char c : s) {

            count[c - 'a']++;
        }

        // duyệt t
        for (char c : t) {

            count[c - 'a']--;

            // nếu âm -> ký tự thêm vào
            if (count[c - 'a'] < 0) {

                return c;
            }
        }

        return ' ';
    }
};