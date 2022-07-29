que : count the digits of number using recursion


#include <stdio.h>

int dcount(int n){
   static int count =0;
    if(n>0){
        count++;
        dcount(n/10);
        
    }
    else{
        return count;
    }
    
}


int main()
{
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    //intf("%d %d ",0 ,1 );
    
           printf("%d",dcount(n));
    return 0;
}