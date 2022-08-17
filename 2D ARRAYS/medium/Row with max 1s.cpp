que  : Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	 
	       int count =0 ;
	       int result = 0;
	       int rowindex= 0;
	       
	       for(int i = 0;i<n;i++) {
	           count = 0;
	           for(int j = 0;j<m;j++){
	               
	               if(arr[i][j] == 1){
	                   count++;
	               }
	               if(result<count){
	                   result = count;
	                   rowindex =i ;
	               }
	               
	           }
	       }
	       
	       if(result == 0)
	       return -1;
	       else
	       return rowindex;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends