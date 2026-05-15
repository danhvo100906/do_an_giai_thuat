class Solution {
public:
    int titleToNumber(string columnTitle) {

        int result = 0;

        // duyệt từng ký tự
        for (char ch : columnTitle) {

            // nhân 26 và cộng giá trị ký tự
            result = result * 26 + (ch - 'A' + 1);
        }

        return result;
    }
};