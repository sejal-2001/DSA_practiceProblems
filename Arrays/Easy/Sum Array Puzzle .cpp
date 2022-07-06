que-8 Given an array A of size N, construct a Sum Array S(of same size) such that S is equal to the sum of all the elements of A except A[i]. Your task is to complete the function SumArray(A, N) which accepts the array A and N(size of array).

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void SumArray(int[], int);

 // } Driver Code Ends
//User function Template for C++

// arr is the array
// n is the number of element in array
void SumArray(int arr[], int n)
{
    // you code here
    
    int sum=0;
    
    for(int i=0;i<n;i++){
    
      sum+=arr[i];
    }   
    
    for(int i=0;i<n;i++){
        
        arr[i]=sum -arr[i];
        
    }
    
}

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++)
          cin>>arr[i];

         SumArray(arr, n);
         for(int i = 0; i < n; i++)
            cout << arr[i] <<" ";

             
        cout <<endl;
    }
    return 0;
}  // } Driver Code Ends