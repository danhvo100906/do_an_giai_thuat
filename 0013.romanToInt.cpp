class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Nếu mảng chuỗi rỗng thì không có tiền tố chung
        if (strs.empty()) return "";

        // Lấy chuỗi đầu tiên làm tiền tố chung ban đầu
        string prefix = strs[0];

        // Duyệt từng ký tự trong chuỗi prefix
        for (int i = 0; i < prefix.length(); i++) {
            char currentChar = prefix[i]; // Ký tự đang xét

            // So sánh ký tự này với các chuỗi còn lại
            for (int j = 1; j < strs.size(); j++) {
                // Nếu vượt quá độ dài chuỗi
                // hoặc ký tự không giống nhau
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    // Trả về tiền tố chung từ đầu đến trước vị trí i
                    return prefix.substr(0, i);
                }
            }
        }

        // Nếu toàn bộ chuỗi đầu tiên đều khớp
        return prefix;
    }
};
