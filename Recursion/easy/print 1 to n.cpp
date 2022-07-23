que :  print numbers from 1 to n


#include <iostream>

using namespace std;


void print(int n){
    
    if(n==1){
        cout<<n<<" ";
        return;
    }
    
    print(n-1);
    cout<<n<<" ";
    
}


int main()
{
    
    int n ,result;
    cout<<"enter a number : ";
    cin>>n;
    
     print(n);
   
    return 0;
}
