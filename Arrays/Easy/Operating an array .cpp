que - Given an array A of size N, your task is to do some operations, i.e., search an element, insert an element, and delete an element by completing the functions. Also, all functions should return a boolean value.

Note: In delete operation return true even if element is not present.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}// } Driver Code Ends


/* Complete the function(s) below */

bool searchEle(int a[],int x)
{
    // add code here.
    
    for(int i =0;i<a.length();i++){
        if(a[i]==x){
            return true;
        }
        
    }
    return false;
}
bool insertEle(int a[],int y,int yi)
{
    // add code here.
    
    
    
}
bool deleteEle(int a[],int z)
{
    // add code here.
}