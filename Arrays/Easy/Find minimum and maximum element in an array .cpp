que - 3  Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
     long min = INT_MAX;
     long max = INT_MIN;
   pair<long long, long long> ans;  
     
     for(int i =0;i<n;i++){
         if(a[i]>max){
             max= a[i];
             
         }
         
         
         if(a[i]<min){
             min=a[i];
         }
         
         
     }
    
    ans.first = min;ans.second = max;
    return ans;
    
}