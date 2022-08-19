class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int,int> m;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(m[i]>1){
                return i;
            }
        }
        return 0;
    }
};
