que - Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
      
      vector<int>v;
       sort(arr,arr+n);
       int x=-1;
       for(int i=0; i<n; i++)
       {
           if(arr[i]==arr[i+1] &&x!=arr[i])
           {
               v.push_back(arr[i]);
               x=arr[i];
           }
       }
       if(v.size()==0)
       {
           v.push_back(-1);
       }
       sort(v.begin(),v.end());
       return v;
       
       
    }
};







// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends