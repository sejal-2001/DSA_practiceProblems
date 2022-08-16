que : Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int total = row*col;
        
        int startingrow  = 0;
        int startingcol = 0;
        int endingrow  = row-1;
        int endingcol = col-1;
        
        int  count =0;
        
        
        while( count < total){
            
            // print startting row
            
            for(int index = startingcol ; count < total &&  index <= endingcol ; index++){
                
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            
            //print ending col
            for(int index = startingrow ; count < total && index <= endingrow ; index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;
             //print endingrow
            
            for(int index = endingcol ; count < total &&  index >= startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            
            //startingcol;
            
            for(int index = endingrow ; count < total &&  index >=startingrow ; index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            
            startingcol++;    
        }
        
        return ans;
    }
};