que: Given a singly linked list of size N. The task is to left-shift the linked list by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Example 1:

Input:
N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
Output: 8 9 2 4 7
Explanation:
Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
Rotate 3: 8 -> 9 -> 2 -> 4 -> 7




class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* temp =head;
        
        while(temp->next != NULL){
            temp= temp->next;
        }
        
        int count = 0;
        
        while(count <k){
            
            
            temp->next = head;
           Node* temp2 = head;
           head = head->next;
           temp2->next = NULL;
           temp = temp2;
           count++;
            
            
        }
        return head;
    }
};
    
