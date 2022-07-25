que : 8 Write a recursive function to print binary of a given decimal number

#include<stdio.h>

int decitobin(int n){
     
     if(n==0){
         //printf("%d",n);
         return 0 ;
     }
     else{
         
        return (n%2+10 * decitobin(n/2));
         
     }
    
}
    
int main(){
    
    int num;
    printf("enter numbers ");
    scanf("%d",&num);
    
   printf("%d", decitobin(num));
    return 0;
    
    
    
}    
    
    
.