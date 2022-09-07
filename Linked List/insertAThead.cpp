QUE:  INSERT AT HEAD IN SINGLY LINKED LIST

#include <iostream>

using namespace std;

class Node{
    public: 
    int data;
     Node* next;
     
     //constructor call
     Node(int data){
         this->data = data;
         this->next = NULL;
     }
    
};

void insertAthead(Node* &head,int d){
    //create a temporary node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void printlist(Node* &head){
    
    Node* temp = head;
    while(temp != NULL){
        
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<endl;
}


int main(){
    
    //create a new node 
    Node* node1 = new Node(10);
    
    //head point node1 
     Node* head = node1;
     
     printlist(head);
     
     //function 
     insertAthead(head,15);
     printlist(head);
     
     return 0;
    
}