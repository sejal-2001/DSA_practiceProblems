que :  Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]



class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
    
        ListNode* temp = head;
        for(int i = 0;i<k;i++)
        {
            if(!temp)
            {
                return head;
            }
            temp = temp -> next;
        }
        
        if(head == NULL){
            return NULL;
        }
        
        //step 1: reverse in first k group 
        
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int count = 0;
        
        while( curr != NULL && count < k){
            
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
            
            
        }
        
        //step 2 call recursive funtcion for remaining list
        if( next != NULL){
            head->next = reverseKGroup(next,k);
            
            
        }
        
        //step previous
        return prev;
        
    }
};