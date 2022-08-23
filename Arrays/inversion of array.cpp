//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[],long long temp[],int low,int mid,int high){
       long long  count=0;
       long long i=low;
        long long  j=mid;
      long long  int k=low;
        while((i<=mid-1) && (j<=high)){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                count+=(mid-i);
            }
        }
        
        while(i<=mid-1){
            temp[k++]=arr[i++];
        }
        
        while(j<=high){
            temp[k++]=arr[j++];
        }
        
        for(int i=low;i<=high;i++){
            arr[i]=temp[i];
        }
       
       return count;
    }
    long long mergesort(long long arr[],long long temp[],int low,int high){
        int mid;
        long long count=0;
        if(low<high){
             mid=(low+high)/2;
             count+=mergesort(arr,temp,low,mid);
             count+=mergesort(arr,temp,mid+1,high);
             count+=merge(arr,temp,low,mid+1,high);
        }
        
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here 0(n^2)
        // int count=0;
        // for(int i=0;i<N;i++){
        //     for(int j=i+1;j<N;j++){
        //         if(arr[i]>arr[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        long long temp[N];
        mergesort(arr,temp,0,N-1);;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
