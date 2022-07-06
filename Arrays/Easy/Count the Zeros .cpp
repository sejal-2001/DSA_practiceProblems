que - Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int countZeroes(int arr[], int n) {
    // code here
    
    int count =0;
    int i=0;
    
    while(i<n){
        if(arr[i]==0){
            count++;
        }
        i=i+1;
    }
    return count;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);;
        }
        
        int ans = countZeroes(arr, n);
        printf("%d\n", ans);
    }
    return 0;
}
  // } Driver Code Ends