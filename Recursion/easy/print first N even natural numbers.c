que : Write a recursive function to print first N even natural numbers


#include<stdio.h>

void evennumber(int i ,int n ){
    
    
    if(i == n){
        
        printf("%d",i);
        return;
    }
    else{
        printf("%d ",i);
   return evennumber(i+2,n);  
        
    }
    
}

int main(){
    
    int x ,num;
    printf("eneter 2 number");
    scanf("%d%d",&x,&num);
     evennumber(x,num);
     return 0;

}

