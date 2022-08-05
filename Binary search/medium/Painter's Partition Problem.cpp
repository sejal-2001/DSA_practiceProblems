Que :  PAINTER'S PAINTER PROBLEM

int isPossible(vector<int> &boards, int k,int mid){
        int n = boards.size();
    int count = 1;
    int boardsection = 0 ;
    for(int i=0;i<n;i++){
        
        if(boardsection + boards[i] <= mid){
            boardsection +=boards[i]; 
        }
        else{
             count++;
                 if(count > k  || boards[i]>mid)
                 {
                     return false;
                 }    
        
                 boardsection  = boards[i]; 
                  if(count > k)
                  {
                  return false;
                   }
              }
    }
    
    return true;
}



int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();
    int s =0;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum+=boards[i];
    }
   int e =sum;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(isPossible(boards, k, mid)){
            ans = mid;
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        
      mid = s+(e-s)/2;  
    }
    return ans;
}Painter's Partition Problem