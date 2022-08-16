que: Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.


Example : 1 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        
        int row  =  matrix.size();
        int col = matrix[0].size();
        
        //binary search
        int start = 0;
        int end = row*col -1;
        
        int mid = start + (end -start)/2;
        
        while(start<=end){
            
            //for mid element in 2-d matrix ( finding row index and column index of mid in 2d )
            int element  = matrix[mid/col][mid%col];
            
            if(element == target)
                return 1;
            
            if(element > target){
                
                end = mid -1 ;
            }
            else{
                start = mid+1;
            }
            
           mid = start + (end - start)/2; 
        }
        
       return 0; 
        
    }
};