que : Program to Find Factorial of a Number using Recursion



#include <iostream>

using namespace std;


int factorial(int n){
    
    
    if( (n==0) || (n==1))
    return 1;
    else
    return n*factorial(n-1);
    
}


int main()
{
    
    int n ,result;
    cout<<"enter a number : ";
    cin>>n;
    
    result = factorial(n);
    cout<<"factorial is "<<result;

    return 0;
}