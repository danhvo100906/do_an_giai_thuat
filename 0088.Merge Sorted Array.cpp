class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // i trỏ tới phần tử cuối cùng của phần dữ liệu thật trong nums1
        int i = m - 1;

        // j trỏ tới phần tử cuối cùng của nums2
        int j = n - 1;

        // k trỏ tới vị trí cuối cùng của nums1 (m + n - 1)
        // đây là vị trí để đặt phần tử lớn nhất tiếp theo
        int k = m + n - 1;

        // so sánh từ cuối hai mảng
        while (i >= 0 && j >= 0) {

            // nếu phần tử nums1 lớn hơn
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];  // đặt vào vị trí cuối
                i--;                  // lùi con trỏ nums1
            } 
            else {
                nums1[k] = nums2[j];  // đặt phần tử từ nums2
                j--;                  // lùi con trỏ nums2
            }

            k--; // luôn lùi vị trí ghi kết quả
        }

        // nếu nums2 vẫn còn phần tử thì copy vào nums1
        // (không cần xử lý nums1 vì nó đã đúng vị trí)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};