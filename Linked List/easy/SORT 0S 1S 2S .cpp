QUE - Sort linked list of 0s 1s 2s


Node* sortList(Node *head)
{
    // Write your code here.
    int zerocount= 0;
    int onecount = 0 ;
    int twocount = 0;
    
    Node* temp = head;
    while( temp != NULL){ 
        if(temp->data == 0)
            zerocount++;
        else if(temp->data == 1)
            onecount++;
        else if(temp->data == 2)
            twocount++;
        
        temp=temp->next;
        
    }
    
    temp =head;
    while(temp != NULL){
        
        if(zerocount != 0){
            temp->data = 0;
            zerocount--;
        }
      else if(onecount != 0){
            temp->data =1;
            onecount--;
        }
       else if(twocount != 0){
            temp->data  = 2;
            twocount--;
        }
        
        temp = temp->next;
        
        
    }
    return head;

}




AAPROACH 2 :-  WHEN DATA REPLACEMENT IS NOT ALLOWED

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertAttail(Node* &tail,Node* temp){
    tail->next = temp;
    tail = temp;
}


Node* sortList(Node *head)
{
    // Write your code here.
    
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;
    
    Node* temp = head;
    //creating separate linked lists of 0S 1S and 2S
    while(temp != NULL){
        int val = temp->data;
        if(val == 0){
            insertAttail(zerotail ,temp);
        }
     else   if(val == 1){
            insertAttail(onetail,temp);
        }
     else if(val == 2){
         insertAttail(twotail ,temp);
     }   
     temp = temp->next;   
        
    }
    
    //merge three lists
    if(onehead->next != NULL){
        zerotail->next = onehead->next;
    }
    else{
        //1st list is empty
        zerotail->next = twohead->next;
    }
    
    onetail->next = twohead->next;
    twotail->next = NULL;
    
    //setuphead
    head = zerohead->next;
    
    //delete dummy lists
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head; 
}

