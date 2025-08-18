// User function Template for Java

class Solution {
    boolean isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        int digit ;
        while(n != 0 ){
            digit =  n % 10;
            sum += digit;
            n = n / 10;
        }
        int original = sum;
        int rev = 0 ;
        while(sum > 0){
            rev = rev * 10 + (sum % 10);
            sum /= 10;
        }
        
        return original==rev;
        
    }
}


