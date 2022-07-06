que-6 You are given an integer N. You need to convert all zeroes of N to 5.



// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    scanf("%d",&T);
    while (T--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",convertFive(n));
    }
}
// } Driver Code Ends


//User function Template for C

int convertFive(int n) {
     int sum=0;
   int i=0;
   while(n!=0){
       int r=n%10;
       if(r==0){
           r=5;
       }
       sum=sum+pow(10,i)*r;
       i++;
       n=n/10;
   }
   return sum;
    
}