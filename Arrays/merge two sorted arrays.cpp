class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
      int k=m+n-1;  //5
      int i=m-1;
      int j=n-1;
        
      while(i>=0 && j>=0){
          if(nums1[i]<nums2[j]){    //0 0 0 0 0 0
              nums1[k--]=nums2[j--]; //      3  5  6
              
          }
          else{
              nums1[k--]=nums1[i--];
          }
      }
        
           while(j >= 0) {
                nums1[k--] = nums2[j--];
        }
        
//         for(int i=0;i<n;i++){
//             nums1[i+m]=nums2[i];
//         }
//         sort(nums1.begin(),nums1.end());
    }
};
