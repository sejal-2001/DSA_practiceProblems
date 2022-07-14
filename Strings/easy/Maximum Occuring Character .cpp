que - Given a string str. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
        
        
        int arr[26] = {0};
        //count the charecters in string
        
      
        
        for(int i  =0 ;  i< str.length(); i++){
             char ch = str[i];
             
          int count = 0;
        count = ch - 'a';
        
        arr[count]++;
        
    }
        int ans =0 ;
        int maxi = -1;
         for(int i =0 ; i <26 ;i++)
         {
             if(maxi<arr[i]){
                 ans=i;
                 maxi = arr[i];
             }
         }
        
        return 'a'+ ans;
        
        
        
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends