que - Write a recursive function to print squares of first N natural numbers

#include<stdio.h>

void square(int i , int n){
    if( n == i){
        printf("%d",i*i);
        return;
    }
    else{
        printf("%d ",i*i);
        return square(i+1,n);
        
    }
    
}
    
int main(){
    
    int x,num;
    printf("enter numbers ");
    scanf("%d%d",&x,&num);
    
    square(x,num);
    return 0;
    
    
    
} 