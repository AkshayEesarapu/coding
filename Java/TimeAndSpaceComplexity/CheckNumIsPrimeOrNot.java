https://www.geeksforgeeks.org/problems/prime-number2314/1

class Solution {
    static boolean isPrime(int n) {
        // code here
    /*
    
    Time Complexity is 0(n) 
    
     int count = 0;
      if(n == 1) return false;
      for(int i=2;i<n;i++){
          if(n % i == 0){
              return false;
          }
      }
        return true;
    }
    
    */
    
    if(n <= 1) return false;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0) return false;
    }
    return true;
     
    }
     
}

