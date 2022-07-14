que - A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
private:
    bool isvalid(char ch){
        
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||( ch>='0' && ch<='9'))
           {
            return 1;
        }
        return 0;
        
    }
    
    char lowercase(char ch){
        
        if((ch >= 'a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch - 'A'+'a';
            return temp;
        }
    }
    
    
    bool checkpalindrome(string a){
        
        int s = 0;
        int e = a.length()-1;
        
        while(s<=e){
            
            if(a[s] != a[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
            
           
        }
       return 1;
    }
    
    
    
    
    
    
    
public:
    bool isPalindrome(string s) {
        
        
        
        string temp = "";
        
        
        //remove invalid characters
        
        for(int j =0;j<s.length();j++){
            
            if(isvalid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        //lowercase
        
        for(int j =0 ;j < temp.length() ; j++){
            
            temp[j] = lowercase(temp[j]);
            
        }
        
         return checkpalindrome(temp);
        
    }
};