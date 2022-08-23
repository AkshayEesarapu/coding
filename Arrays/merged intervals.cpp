class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> cm=intervals[0];
        
        for(auto it:intervals){
            if(it[0]<=cm[1]){
                cm[1]=max(it[1],cm[1]);
            }
            else{
                ans.push_back(cm);
                 cm=it;
            }
        }
          ans.push_back(cm);
                
        return ans;
    }
};
