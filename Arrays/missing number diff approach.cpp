class Solution {
public:
    int missingNumber(vector<int>& nums) {
//         int n=nums.size();
        
//         map<int,int> m;
//         int i;
//         for(i=0;i<n;i++){
//             m[nums[i]]++;
//         }
        
//         for( i=0;i<n;i++){
//             if(!m[i]){
//                 return i;
//             }
//         }
        
//         return i;
            
      int res=0;
        int i;
        int n=nums.size();
        for( i=0;i<n;i++){
            res ^= i^nums[i];
        }
        
        return res^i;
    }
    
};
