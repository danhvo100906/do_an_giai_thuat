class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // lưu giá thấp nhất đã gặp
        int minPrice = INT_MAX;

        // lưu lợi nhuận lớn nhất
        int maxProfit = 0;

        for (int price : prices) {

            // nếu tìm được giá thấp hơn
            if (price < minPrice) {
                minPrice = price;
            }

            // tính lợi nhuận nếu bán hôm nay
            int profit = price - minPrice;

            // cập nhật lợi nhuận lớn nhất
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};