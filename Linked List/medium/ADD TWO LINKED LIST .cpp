QUE  - You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

 LEETCODE QUESTION SOLUTION :

class Solution {
public:
    
    ListNode* reverse(ListNode* head){
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
          
        }
        return prev;
        
    }
    
    void insertATtail(ListNode* &head, ListNode* &tail,int val){
        
        ListNode* temp = new ListNode(val);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        
        
        
    }
    
    ListNode* addLL(ListNode* l1, ListNode* l2) {
        
        int carry  = 0;
        ListNode* anshead = NULL;
        ListNode* anstail = NULL;
        
        while(l1 != NULL || l2 != NULL || carry != NULL){
        
            int val1 = 0;
            if(l1 != NULL){
                val1 = l1->val;
            }
            int val2 =0 ;
            if(l2 != NULL){
                val2 = l2->val;
            }
            
            int sum = carry + val1+val2;
            int digit = sum%10;
            insertATtail(anshead,anstail,digit);
            carry = sum/10;
          
            if(l1 != NULL)
             l1 = l1->next;
            if(l2!= NULL)
              l2 = l2->next;
            
            
        }
      
        
        return anshead;
        
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        //step 1 reverse both linked list
        
       // l1 = reverse(l1);
        //l2 = reverse(l2);
        
        //step 2 add the both linked list
        
        ListNode* ans = addLL( l1,l2);
        
        //step 3 reverse the ans
        //ans = reverse(ans);
        
        return ans;
        
    }
};








GEEKSFORGEEKS SOLUTION  : 
Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.





class Solution
{
    public:
    //Function to add two numbers represented by linked list.
     struct Node* reverse(struct Node* head){
         
         Node* curr = head;
         Node* forward = NULL;
         Node* prev = NULL;
         while( curr != NULL){
             
             forward = curr->next;
             curr->next = prev;
             prev = curr;
             curr = forward;
             
         }
         return prev;
     }
     void insertATtail(struct Node* &head, struct Node* &tail,int val){
         
         Node* temp = new Node(val);
         if(head == NULL){
             head = temp;
             tail = temp;
             return;
             
         }
         else{
             tail->next= temp;
             tail =temp;
             
         }
         
         
     }
    
    struct Node* addLL(struct Node* first, struct Node* second){
        int carry =0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        
        while(first != NULL && second != NULL){

             int sum = carry + first->data + second->data;
             int digit = sum%10;
             
            insertATtail(anshead,anstail,digit);
            carry = sum/10;
            first = first->next;
            second = second->next;
            
            
        }
        while(first != NULL){
            
            int sum = carry + first->data;
             
             int digit = sum%10;
             
            insertATtail(anshead,anstail,digit);
            carry = sum/10;
            first = first->next;
        }
        
         while(second != NULL){
            
            int sum = carry + second->data;
            
             int digit = sum%10;
             
            insertATtail(anshead,anstail,digit);
            carry = sum/10;
            second = second->next;
        }
     while(carry != 0){
         
         int sum  = carry ;
             
             int digit = sum%10;
             
            insertATtail(anshead,anstail,digit);
            carry = sum/10;
     }
        
      return anshead;  
        
        
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //step 1 : reverse linked lists
        
        first = reverse(first);
        second = reverse(second);
        
        //add two LL;
        Node* ans  = addLL(first , second);
        
        //reverse ans 
        ans  = reverse(ans);
        
        
        
        
       return ans; 
        
        
    }
};
