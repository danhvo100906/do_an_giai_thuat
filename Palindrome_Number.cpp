class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;

        int sbd=x;// số ban đầu 
        long long  sdn=0;// số đảo ngược 

        while(x>0){
           int  digit=x%10;//lấy số cuối 
            sdn=sdn*10+digit; //dịch số sang 
            // 
         x=x/10;// bỏ đi số cuối của số ban đầu để trả lại giá trị x 


        }
        if(sbd==sdn) //n điều kiện để số là Palindrome
            return(true);

         else 
            return (false );

        
    }
};