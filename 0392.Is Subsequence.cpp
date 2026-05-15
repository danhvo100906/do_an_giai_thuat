class Solution {
public:

    bool isSubsequence(string s, string t) {

        int i = 0; // duyệt s
        int j = 0; // duyệt t

        // duyệt t
        while (i < s.size() && j < t.size()) {

            // nếu ký tự giống nhau
            if (s[i] == t[j]) {

                i++;
            }

            j++;
        }

        // nếu duyệt hết s
        return i == s.size();
    }
};