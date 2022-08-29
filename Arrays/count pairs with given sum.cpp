
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        // o(n^2)
        // int cont=0;
        // for(int i=0;i<n;i++){
        //     for(int j=1;j<n;j++){
        //         if(arr[i]+arr[j]==k){
        //             cont++;
        //         }
        //     }
        // }
        
        // return cont;
        
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<n;i++){
            if(m.find(k-arr[i])!=m.end()){
                ans+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};
