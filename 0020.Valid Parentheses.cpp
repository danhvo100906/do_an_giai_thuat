class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Stack lưu các dấu ngoặc mở

        // Duyệt từng ký tự trong chuỗi
        for (char c : s) {

            // Nếu là dấu ngoặc mở thì đưa vào stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                // Nếu gặp dấu ngoặc đóng mà stack rỗng → sai
                if (st.empty()) return false;

                char top = st.top(); // Lấy dấu ngoặc mở trên cùng
                st.pop();

                // Kiểm tra có cùng loại hay không
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Cuối cùng stack phải rỗng thì chuỗi mới hợp lệ
        return st.empty();
    }
};
