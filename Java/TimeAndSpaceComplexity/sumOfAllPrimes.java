class Solution {
    public int prime_Sum(int n) {
        // code here
        int sum = 0;
        for(int i= 2 ; i  <= n ; i++){
            if(isPrime(i)) {
                sum += i;
            }
        }
        return sum;
    }
    
    
    public boolean isPrime(int n){
        if(n <= 1) return false;
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
}


