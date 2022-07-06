que - Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int i = 0;
    int countzero = 0;
    int countone = 0;
    int counttwo=0;
    
    
    while(i<n){
    if(a[i] == 0){
        countzero++;
    }
    
    else if(a[i] == 1){
        countone++;
    }
    else{
        counttwo++;
    }
     i = i+1;
     
    }  
     for(i = 0 ;i<countzero;i++){
         a[i] = 0;
     }
     
     for(i = countzero;i<countzero+countone;i++){
         a[i] = 1;

     }
     for(i=countzero+countone;i<n;i++){
         a[i]=2;
     }
     
    
    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends