que - Given an array A[] of size N. Find the number of pairs (i, j) such that
Ai XOR Aj = 0, and 1 ≤ i < j ≤ N.

// { Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends


long long int calculate(int a[], int n)
{
    
    
    int count =0;
    // Complete the function
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]==a[j]){
                
             count++;
            }
            
        }
        
    }
    return count;
}
