que-7 You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
     
     int min_dist = INT_MAX;
     
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             
             if(x==a[i] && y==a[j] || x==a[j] && y==a[i] && min_dist > abs(i-j)){
                 
                 
                 min_dist = abs(i-j);
             }
             
             
             
             
         }
         
         
         
     }
     return min_dist;
       // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends