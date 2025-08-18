// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int count = 0;
        int digit ;
        int finalDigit = n ;
        while(n != 0){
            digit = n % 10;
            if(digit != 0){
                count =  count +  (digit * digit * digit) ;
            }
            n = n / 10 ;
        }
        return (count==finalDigit);
        
    }
}
