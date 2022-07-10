que - Given an array, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k=k%n;// insuring that k<n
        vector<int>ans(n);// create ans array/vector
        int j=0;
		//copy elements from n-k to n in our ans vector
        for(int i=n-k;i<n;i++){
            ans[j++]=nums[i];
        }
		// copy elements form 0 to n-k
        for(int i=0;i<n-k;i++){
            ans[j++]=nums[i];
        }
       nums=ans;
    }
};