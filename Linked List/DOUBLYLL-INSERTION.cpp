INSERTION IN DOUBLY LINKED LIST


#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    //constructor 
    Node(int data){
        this->data=data;
        this->next = NULL;
        this->prev=NULL;
    }
};

int getlen(Node* head){
    
    Node* temp= head;
    int len = 0;
    
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* head){
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAthead(Node* &head,int d){
    
    Node* temp = new Node(d);
    
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAttail(Node* &tail , int d){
    
    Node* temp = new Node(d);
    
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    
    
}

int main(){
    
    Node* node1 = new Node(10);
    
   Node* head  = node1;
   Node* tail = node1;
  
   print(head);
   
  // cout<<getlen(head)<<endl;
   
    insertAthead(head,77);
    print(head);
    
     print(tail);
    insertAthead(head,7);
    print(head);
    
    insertAttail(tail,88);
    print(head);
    return 0;
    
}