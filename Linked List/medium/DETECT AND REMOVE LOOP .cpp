que: Detect and Remove Loop

Node* FloydDetection(Node* head){
    
    if(head == NULL){
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL){
        
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
       slow = slow->next;
        
        if(slow == fast){
            return slow;
        }
        
        
    }
   return NULL; 
    
}
Node* startingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    Node* intersection = FloydDetection(head);
    if(intersection == NULL)
        return NULL;
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;  
    
}

Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL){
        return NULL;
    }
    
    Node* startofloop = startingNode(head);
   if(startofloop == NULL)
       return head;
    Node* temp = startofloop;
    
    while(temp->next != startofloop){
        temp = temp->next;
    }
    temp->next = NULL;
     return head;  
    
}
