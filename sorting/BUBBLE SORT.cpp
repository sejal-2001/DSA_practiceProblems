   BUBBLE SORT

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    
    for(int i =0;i<n-1;i++){
        bool swaped = false;
        for(int j = 0;j<(n-1)-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true;
            }
        }
        if(swaped == false){
            break;
        }
    }
    
    
    
}
