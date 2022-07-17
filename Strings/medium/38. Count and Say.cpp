que  The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.

For example, the saying and conversion for digit string "3322251":


Given a positive integer n, return the nth term of the count-and-say sequence.

 

class Solution {
public:
    string countAndSay(int n) {
        
             
    if (n == 1)      return "1";
    if (n == 2)      return "11";
 
   
    string str = "11"; 
    for (int i = 3; i<=n; i++)
    {
        str += '$';
        int len = str.length();
 
        int cnt = 1; 
        string  tmp = ""; 
 
        
        for (int j = 1; j < len; j++)
        {
            
            if (str[j] != str[j-1])
            {
                
                tmp += cnt + '0';
 
                
                tmp += str[j-1];
 
                
                cnt = 1;
            }
 
            else cnt++;
        }
 
        
        str = tmp;
    }
 
    return str;
    }
};