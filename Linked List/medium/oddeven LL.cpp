328. Odd Even Linked List

CODE :

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
      
        ListNode* odd = new ListNode(-1);
        ListNode*  even =  new ListNode(-1);

        ListNode* o = odd;
        ListNode* e = even;
        ListNode* evenHead = new ListNode(-1); 
        int i  = 1;
        while(head != NULL){
            if(i % 2 != 0){
                o->next = head;
                o = head;
            }
            else if(i==2){
                evenHead = head;
                e->next = head;
                e = head;
            }
            else{
                
                e->next = head;
                e = head;
            }
            head = head->next;
            i++;

        }
        e->next = NULL;
        o->next = evenHead;
        return odd->next;


        
    }
};