que  : MIDDLE ELEMENT IN LINKED LIST
APPROACH 1: TIME COMPLEXITY O(n)


int getlen(Node* head){
    int len  = 0;
    while(head !=  NULL){
        len++;
        head = head->next;
    }
    return len;
}



Node *findMiddle(Node *head) {
    // Write your code here
    int len  = getlen(head);
    int ans = len/2;
    
    Node* temp = head;
    int cnt  =0 ;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
        
    }
    return temp;
}



OR   NEXT APPROACH WITH O(n/2)TIME COMPLEXITY

Node *getmid(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        
        slow=slow->next;  
    }
    return slow;
     
}



Node *findMiddle(Node *head) {
    // Write your code here
    return getmid(head);

}

