class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        // Duyệt từ chữ số cuối cùng về đầu
        for (int i = digits.size() - 1; i >= 0; i--) {

            // Nếu chữ số nhỏ hơn 9, chỉ cần +1 và kết thúc
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // Nếu chữ số là 9, đặt về 0 và tiếp tục nhớ sang trái
            digits[i] = 0;
        }

        // Nếu tất cả chữ số đều là 9
        // Ví dụ: [9,9] -> [1,0,0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
