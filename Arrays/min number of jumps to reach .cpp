
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here

        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
         int dp[n];
         for(int i=1;i<n;i++){
             dp[i]=INT_MAX;
             
         }
         dp[0]=0;
         
         for(int i=1;i<n;i++){
             for(int j=0;j<i;j++){
                 if(i<=arr[j]+j){
                     dp[i]=min(dp[i],dp[j]+1);
                 }
             }
         }
         if(dp[n-1]!=INT_MAX)
           return dp[n-1];
         return -1;
    }
};
