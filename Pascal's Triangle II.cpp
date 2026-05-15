class Solution {
public:
    vector<int> getRow(int rowIndex) {

        // tạo vector kích thước rowIndex + 1, tất cả ban đầu = 1
        vector<int> row(rowIndex + 1, 1);

        // duyệt từng hàng
        for (int i = 2; i <= rowIndex; i++) {

            // cập nhật từ phải sang trái
            for (int j = i - 1; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row;
    }
};