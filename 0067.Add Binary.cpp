class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;  // Con trỏ chuỗi a
        int j = b.size() - 1;  // Con trỏ chuỗi b
        int carry = 0;         // Biến nhớ
        string result = "";

        // Duyệt khi còn bit hoặc còn nhớ
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            // Lấy bit của a nếu còn
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            // Lấy bit của b nếu còn
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            // Bit kết quả (0 hoặc 1)
            result.push_back((sum % 2) + '0');

            // Cập nhật nhớ
            carry = sum / 2;
        }

        // Vì cộng từ phải sang trái nên cần đảo chuỗi
        reverse(result.begin(), result.end());

        return result;
    }
};
