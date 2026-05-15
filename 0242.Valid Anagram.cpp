class Solution {
public:

    bool isAnagram(string s, string t) {

        // độ dài khác nhau -> false
        if (s.size() != t.size()) {

            return false;
        }

        // mảng đếm 26 chữ cái
        int count[26] = {0};

        // đếm ký tự của s
        for (int i = 0; i < s.size(); i++) {

            count[s[i] - 'a']++;
        }

        // trừ ký tự của t
        for (int i = 0; i < t.size(); i++) {

            count[t[i] - 'a']--;
        }

        // kiểm tra
        for (int i = 0; i < 26; i++) {

            // nếu khác 0
            if (count[i] != 0) {

                return false;
            }
        }

        return true;
    }
};