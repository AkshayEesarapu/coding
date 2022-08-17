
class Solution {
public:
    void sortColors(vector<int>& a) {
         // code here 
        
        int low=0;
        int high=a.size()-1;
        int mid=0;
        
        while(mid<=high){
            switch(a[mid]){
                case 0:
                    swap(a[mid++],a[low++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[high--],a[mid]);
                    break;
            }
        }
    }
};
