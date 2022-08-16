que : Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.



class Solution{   
public:




    int median(vector<vector<int>> &matrix, int r, int c){
        // code here      
       int temp[r*c];
       int index = 0;
       int formula = (1+r*c)/2-1;
       
       
       for(int i = 0 ; i<r;i++){
           for(int j = 0 ;j<c;j++){
               temp[index]= matrix[i][j];
               index++;
           }
       }
         
        sort(temp , temp+r*c);
        return temp[formula];
      
        
    }
};