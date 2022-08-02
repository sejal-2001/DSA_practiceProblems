                               BINARY SEARCH

QUE : 1 Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        
        while(start<=end){
            
            if(target == nums[mid]){
                return mid;
            }
            if(target > nums[mid]){
            
                start = mid+1;
        
            }
            else{
                end = mid-1;
            }
            
              mid = start + (end-start)/2;
           
        }
      return -1;
    }
};