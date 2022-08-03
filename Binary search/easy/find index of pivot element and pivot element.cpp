que : find pivot element


ans :-
  
  #include <iostream>

using namespace std;



int pivotfind(int arr[],int n){
    
    int start = 0;
    int end = n-1;
    int mid = start +(end -start)/2;
    
    while(start<end){
        
        if(arr[mid]>=arr[0]){
            
            start = mid+1;
        }
        else{
            
            end = mid;
        }
        mid= start+(end-start)/2;
        
    }
    return start;
    
}


int main()
{
    int ans ;
    int arr[5] = {3,4,5,1,2};
    
     ans = pivotfind(arr,5);
    
    cout<<"index of pivot elememt is "<<ans<<endl;;
    cout<<"pivot element is : "<<arr[ans]<<endl;
    

    return 0;
}
