que - Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index).

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  
  bool palin(string q)
   {
       int n = q.size();
       if(n==1)
       return true;
       int i=0;
       int j=n-1;
       while(i<j)
       {
           if(q[i]!=q[j])
           return false;
           i++;
           j--;
       }
       return true;
   }
   string longestPalin (string s) {
       // code here
       string t="";
       int n = s.size();
       if(n==0)
       return t;
       if(n==1)
       return s;
       for(int i=0;i<n;i++)
       {
           for(int j=1;j<=n-i;j++)
           {
               if(palin(s.substr(i,j)))
               {
                   if(t.size()<j)
                   t = s.substr(i,j);
               }
           }
       }
       return t;

}
  
  
   
   
    
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends