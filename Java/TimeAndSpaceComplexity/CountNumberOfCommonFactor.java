class Solution {
    public int commonFactors(int a, int b) {
    //      Map<Integer,Integer> result = new HashMap<>();
    //     for(int i = 1; i <= a ; i++){
    //         if(a % i == 0 ){
    //             result.put(i , result.getOrDefault(i ,0) + 1 );
    //         }
    //     }
    //     for(int i = 1; i <= b ; i++){
    //         if(b % i == 0 ){
    //             result.put(i , result.getOrDefault(i ,0) + 1 );
    //         }
    //     }
    //     int count = 0;
    //     for(Map.Entry<Integer,Integer> x : result.entrySet()) {
    //         if(x.getValue() >= 2 ){
    //             count++;
    //         }
    //     }
    // return count;
    // }

    int count = 0;
    int lim = Math.min(a,b);
    for(int i =1 ; i<=lim;i++){
        if(a%i == 0 && b %i==0){
            count++;
        }
    }
    return count;
    }
}
