class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mapST; // map từ s -> t
        unordered_map<char, char> mapTS; // map từ t -> s

        // duyệt từng ký tự
        for (int i = 0; i < s.size(); i++) {

            char c1 = s[i];
            char c2 = t[i];

            // nếu c1 đã tồn tại trong map
            if (mapST.count(c1)) {

                // nhưng mapping khác -> false
                if (mapST[c1] != c2) {
                    return false;
                }
            }
            else {

                // tạo mapping mới
                mapST[c1] = c2;
            }

            // kiểm tra chiều ngược lại
            if (mapTS.count(c2)) {

                // nếu mapping khác -> false
                if (mapTS[c2] != c1) {
                    return false;
                }
            }
            else {

                // tạo mapping mới
                mapTS[c2] = c1;
            }
        }

        return true;
    }
};