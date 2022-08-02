que :  Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.


class Solution {
public:
    
  int firstposition(vector<int>&nums,int target){
        
        int s = 0;
        int e =nums.size()-1;
        int mid = s+ ((e-s)/2);
        int ans  =-1;
        while(s<=e){
            
            if(nums[mid] == target){
                ans = mid;
                e= mid-1;
                
            }
            else if(target > nums[mid]){
                
                s = mid+1;
            }
            else{
                e =mid-1;
            }
            mid = s+ ((e-s)/2); 
            
        }
        
        return ans;
    }
    
    
  int lastposition(vector<int>&nums,int target){
        
        int s = 0;
        int e =nums.size()-1;
        int mid = s+ (e-s)/2;
        int ans  =-1;
        while(s<=e){
            
            if(nums[mid] == target){
                ans = mid;
                s = mid+1;
                
            }
            else if(target > nums[mid]){
                
                s = mid+1;
            }
            else{
                e =mid-1;
            }
            mid = s+ ((e-s)/2); 
            
        }
        
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>p;
        
        int first = firstposition(nums,target);
        int last = lastposition(nums,target);
        
        p.push_back(first);
        p.push_back(last);
        
        return p;
        
        
        
    }
};