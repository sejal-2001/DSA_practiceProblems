que : - Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.


class Solution {
public:
    
    long long int binarySearch(int n){
        
        int start = 0;
        int end = n;
        long long int  mid = start + (end -start)/2;
        long long int ans = -1;
        while(start<=end){
            
            long long int square = mid*mid;
            if(n==0){
                return 0;
            }
            
            if(square == n){
                return mid;
            }
            if(square > n){
                end = mid-1;
            }
            else{
                ans  = mid;
                start = mid+1;
            }
            
            mid = start+(end -start)/2;
        }
        
        return ans;
    
        
    }
    
   int mySqrt(int x) {
        
        return binarySearch(x);
        
    }
};