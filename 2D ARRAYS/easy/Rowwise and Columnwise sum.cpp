que :  ROWWISE AND COLUMN WISE SUM IN 2-D ARRAYS


#include <iostream>

using namespace std;

void printrowsum(int arr[][3],int i,int j){
    
    cout<<"print rowwise sum"<<endl;
    
    for(int i =0 ; i <3;i++)
    {
        int sum =0 ;
        for(int j =0 ;j<3;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
    
}
void printcolsum(int arr[][3],int i,int j){
    
    cout<<"print rowwise sum"<<endl;
    
    for(int j =0 ; j <3;j++)
    {
        int sum =0 ;
        for(int i =0 ;i<3;i++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
    
}


int main()
{
    cout<<"2-D ARRAYS"<<endl;;
    
    //taking input
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j =0 ;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    //for output
    for(int i =0 ;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]; 
        }
        cout<<endl;
    }
    
    printrowsum(arr,3,3);
    
    printcolsum(arr,3,3);

    return 0;
}