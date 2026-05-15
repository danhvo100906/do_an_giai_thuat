class Solution {
public:
    string convertToTitle(int columnNumber) {

        string result = "";

        while (columnNumber > 0) {

            columnNumber--; // điều chỉnh về 0-based

            // lấy ký tự tương ứng
            char ch = 'A' + (columnNumber % 26);

            // thêm vào đầu chuỗi
            result = ch + result;

            // chia cho 26
            columnNumber /= 26;
        }

        return result;
    }
};