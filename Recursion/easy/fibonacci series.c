que print n terms of fibomacci series using recursion


#include <stdio.h>

void fibo(int n){
    
  static  int n1 =0;
  static  int n2=1;
  static  int n3;
    
    if(n>0){
    n3 = n1+n2;
    n1 =n2;
    n2 = n3;
    printf("%d ",n3);
    fibo(n-1);
    }
    
}


int main()
{
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    printf("%d %d ",0 ,1 );
    
    fibo(n-2);
    return 0;
}
