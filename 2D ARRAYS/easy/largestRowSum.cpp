que :  largest maximum row sum  AND row index

//LARGEST ROW SUM AND ROWINDEX

#include <iostream>
#include <climits>


using namespace std;

int largestSum(int arr[][3],int row,int col){
    
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
            sum += arr[row][col];
        }
        
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    
    cout<<"the maximum sum is : "<<maxi<<endl;
    return rowIndex;
    
}




int main()
{
    int arr[3][3];
    cout<<"enter array elements "<<endl;
    for(int row = 0;row<3;row++){
        for(int col = 0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"so the elements are : "<<endl;
    for(int row = 0;row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    
    int num = largestSum(arr,3,3);
    cout<<num<<endl;

    return 0;
}