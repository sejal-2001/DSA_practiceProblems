que: INSERT AT ANY POSITION

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructor 
    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void insertAthead(Node* &head, int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node* &tail,int d){
    
    Node* temp = new Node(d);
    
    tail->next= temp;
    temp = tail;
    
}


void insertAtposition(Node* &tail,Node* &head, int position , int d){
    
    
    if(position == 1){
        insertAthead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt =1;
    
    while(cnt< position -1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next == NULL){
        
        insertAttail(tail,d);
        return;
        
    }
    
    //create node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
    
}

void print(Node* head){
    
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
    
    print(tail);
    
    insertAthead(head,66);
    print(head);
    
    insertAttail(tail,55);
    print(tail);
    
    
    insertAtposition(tail,head,2,44);
    print(head);
    
    return 0;
    
}