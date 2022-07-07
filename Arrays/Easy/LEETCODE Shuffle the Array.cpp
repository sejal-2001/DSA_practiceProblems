que - Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>arr(n*2); // preallocate the array for storing elements
        
        for(int i =0 ;i<n;i++){
            
            arr[i*2] = nums[i] ; //store x at even positions
            arr[i*2+1]  = nums[i+n]; //store y at odd places   
            
            
           
        }
       return arr;    
    }
};