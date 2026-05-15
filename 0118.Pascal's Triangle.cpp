class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        // vector lưu toàn bộ tam giác Pascal
        vector<vector<int>> triangle;

        // duyệt từng hàng
        for (int i = 0; i < numRows; i++) {

            // tạo hàng mới với i+1 phần tử
            vector<int> row(i + 1, 1);

            // tính các phần tử ở giữa
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i-1][j-1] + triangle[i-1][j];
            }

            // thêm hàng vào tam giác
            triangle.push_back(row);
        }

        return triangle;
    }
};