que - Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

class Solution {
public:
    bool isPalindrome(int x) {
     unsigned int temp = x;
       unsigned int var = 0;

        while(temp){

            var = var*10 + temp%10;
            temp /= 10;

        }

        if(var == x){
            return 1;
        }
        return 0;
    }
};