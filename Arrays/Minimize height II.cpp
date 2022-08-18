
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        int ans;
        ans=arr[n-1]-arr[0];
        
        int small=arr[0]+k;
        int large=arr[n-1]-k;
           int maxi,mini;
           
        for(int i=0;i<n-1;i++){
         
            mini=min(small,arr[i+1]-k);
            maxi=max(arr[i]+k,large);
            if(mini<0)
              continue;
            ans=min(ans,maxi-mini);
        }
        return ans;
        
        
        // // code here
        // int a[n];
        
        // for(int i=0;i<n;i++){
            
        //     if(arr[i]>=k){
        //         a[i]=arr[i]-k;
        //     }
        //     else{
        //         a[i]=arr[i]+k;
        //     }
        // }
        
        // sort(a,a+n);
        // int as=a[0];
        // int bs=a[n-1];
        
        // return (bs-as);
        
        
    }
};
