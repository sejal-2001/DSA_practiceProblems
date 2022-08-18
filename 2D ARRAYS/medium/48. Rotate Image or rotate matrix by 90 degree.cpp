que : You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
     int r=matrix.size();
    int c=matrix[0].size();
    
    
    // First we take the transpose of matrix.
    
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
        
    
    //then we reverse the each row
    for(int i=0;i<r;i++)
    {
       int s=0;          // In case of clock wise rotation every row is reverse after the transpose.
        int e=r-1;
        
        while(s<=e)
       {
           swap(matrix[i][s],matrix[i][e]);
            
            s++;
            e--;
       }
    
       }   
        
        
    }
};