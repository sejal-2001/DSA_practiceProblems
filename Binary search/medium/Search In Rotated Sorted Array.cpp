que :  Search (key index) In Rotated Sorted Array


int findPivot(vector<int>& arr,int n){
    
    int start = 0;
    int end = n-1;
    int mid = start +(end -start )/2;
    
    while(start<end){
        
        if(arr[0]<=arr[mid]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid=start +(end -start )/2;
        
    }
    return start;
    
}

int binarySearch(vector<int>& arr,int s,int e,int key){
    int start = s;
    int end  = e;
    int mid = start + (end -start )/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid= start + (end - start)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = findPivot(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
      return   binarySearch(arr,pivot , n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
    
    
}