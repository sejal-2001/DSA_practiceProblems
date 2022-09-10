que:  REVERSE LINKED LIST

T.C = O(n)
S.C = O(1)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL){
            
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
        
    }
};