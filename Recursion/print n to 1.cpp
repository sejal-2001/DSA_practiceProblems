que : print n to 1 

#include <iostream>

using namespace std;


void print(int n){
    
    if(n==1){
        cout<<n<<" ";
        return;
    }
    
      cout<<n<<" ";
    print(n-1);
    
    
}


int main()
{
    
    int n ,result;
    cout<<"enter a number : ";
    cin>>n;
    
     print(n);

    return 0;
}
