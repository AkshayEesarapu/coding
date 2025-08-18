// User function Template for Java

class Solution {
    static int evenlyDivides(int n) {
        // code here
        
        int res = n;
        int count = 0;
        int a ;
        while(res != 0){
           a =  res % 10;
           if( a != 0) {
              if( n % a ==0 ) {
                  count++;
              }
           }
           res = res / 10;
        }
        
        
        return count;
    }
}

