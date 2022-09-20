Remove Duplicates From an Unsorted Linked List


Node *removeDuplicates(Node *head)
{
   if(head == NULL){
        return NULL;
    }
    
  unordered_map<int,bool>visited;
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr != NULL){
        if(visited[curr->data] != true){
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            prev->next = curr-> next;
            Node* temp = curr;
            curr = curr->next;
            
            delete(temp);
        }
    }
    return head;
}