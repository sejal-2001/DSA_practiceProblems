que - Given an array A[]  of n elements. Your task is to complete the Function num which returns an integer denoting the total number of times digit k appears in the whole array.

For Example:
Input:
A[]={11,12,13,14,15}, k=1
Output:
6


// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int num, int k)
{
     //add code here.
     int count = 0;
               
               for(int i=0;i<num;i++){
                   int num = a[i];
                   while(num>0){
                       int rem = num%10;
                       if(rem==k){
                           count++;
                       }
                       num = num/10;
                   }
            
               }
               
               return count;
           }
