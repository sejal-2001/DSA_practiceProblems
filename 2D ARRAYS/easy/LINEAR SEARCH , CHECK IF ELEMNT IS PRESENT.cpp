Que :  check if element is present in 2D ARRAY 
       LINEAR SEARCH



//linear search

#include <iostream>

using namespace std;

bool ispresent(int arr[][3],int row,int col,int target){
    
    for(int row = 0;row<3;row++){
        for(int col = 0;col<3;col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
    
}




int main()
{
    int arr[3][3];
    cout<<"enter elements :  "<<endl;
    for(int row =0;row <3;row++){
        for(int col = 0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    
    for(int row =0;row <3;row++){
        for(int col = 0;col<3;col++){
            cout<<arr[row][col];
        }
        cout << endl;
    }
    
    int target;
    cout<<"target is  : ";
    cin>>target;
    
    if(ispresent ( arr,3,3,target)){
        cout<<"element found ";
    
    }
    else{
        cout<<"not found";
    }

    return 0;
}