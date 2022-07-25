que 4 Write a recursive function to print first N odd natural numbers

#include<stdio.h>

void oddnumber(int i ,int n ){
    
    
    if(i == n){
        
        printf("%d",i);
        return;
    }
    else{
    
  printf("%d",i);
  return oddnumber(i+2,n);
    }
    
}

int main(){
    
    int x ,num;
    printf("eneter 2 number");
    scanf("%d%d",&x,&num);
     oddnumber(x,num);
     return 0;

}
