que : -  Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       int zero = 0;
        int two = nums.size() - 1;
        for (int i = 0; i <= two; i++) {
            if (nums[i] == 0) {
                swap(nums[zero], nums[i]);
                zero++;
            } else if (nums[i] == 2) {
                swap(nums[two], nums[i]);
                two--;
                if (nums[i] != 1) {
                    i--;
                }
            }
        }
    } 
};