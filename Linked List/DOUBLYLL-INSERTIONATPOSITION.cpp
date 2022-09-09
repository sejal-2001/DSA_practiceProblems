DOUBLYLINKEDLIST -INSERT AT ANY POSITION

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
        
    }
};

void insertAthead(Node* &head,int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head->prev =temp;
    head = temp;
    
}

void insertAttail(Node* &tail,int d){
    
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    
    
}

void insertAtposition(Node* &tail,Node* &head,int d, int position){
    
    //at first position 
    if(position == 1){
        insertAthead(head,d);
        return;
    }
    
    Node* temp = head;
    
    int cnt =1;
    if(cnt<position-1){
        temp =temp->next;
        cnt++;
    }
    //at last position 
    if(temp->next == NULL){
        
        insertAttail(tail,d);
        return;
        
        
    }
    
    //create node to insertAtposition
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}


void print(Node* &head){
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    
    insertAthead(head,77);
    print(head);
    
    insertAttail(tail,100);
    print(head);
    
    insertAtposition(tail,head,45,2);
    print(head);
    
    return 0;
    
    
    
}