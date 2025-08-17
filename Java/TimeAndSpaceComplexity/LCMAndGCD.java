class Solution {
    public static int[] lcmAndGcd(int a, int b) {
        // code here
        Map<Integer,Integer> result = new HashMap<>();
     
        for(int i = 1 ; i <= a ; i++) {
            if(a % i == 0){
                result.put(i,result.getOrDefault(i,0) +1 );
            }
        }
        
        for(int j = 1 ; j <= b ; j++) {
             if(b % j == 0){
                result.put(j,result.getOrDefault(j,0) +1 );
            }
        }
        

        int gcd = 1;
        
        for (Map.Entry<Integer,Integer> k : result.entrySet()) 
        {
           if(k.getValue() >=2){
             gcd = Math.max(gcd,k.getKey());
           }
        }
        
        int lcm = (a*b) / gcd ;
        int [] ans = new int[2];
        ans[0]=lcm;
        ans[1] = gcd ;
        return ans;
    }
}
