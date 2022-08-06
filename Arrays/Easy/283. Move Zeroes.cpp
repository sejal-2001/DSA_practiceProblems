que : - Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int i =0 ;
        for(int j=0;j<n;j++){
            
            if(nums[j]!= 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        
    }
};