que- Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0; i<nums.size();i++)
        {
            
            int element = nums[i];
            if(element >=1 && element <=nums.size()){
                
                
                int position = element - 1;
                
                if(nums[position]!= element ){
                    
                    swap(nums[position],nums[i]);
                    i--;
                }
            }
            
            
        }
        
        for(int i =0 ;i<nums.size();i++){
            
            if(i+1!=nums[i]){
                return i+1;
            }
        
        }
    
        return n+1;
    }
};