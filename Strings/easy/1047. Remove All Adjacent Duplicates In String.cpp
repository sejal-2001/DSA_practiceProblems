que - You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.


class Solution {
public:
    string removeDuplicates(string str) {
            
         string temp = "";
        for( int i= 0;i<str.size();i++){
            
             if(str[i] == temp.back())
             {
                 temp.pop_back();
             }
        else{
            
            temp.push_back(str[i]);
        }
        
    
    }  
    return temp;
    }       
    
};