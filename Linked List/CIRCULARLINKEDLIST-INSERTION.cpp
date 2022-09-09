
CIRCULAR LINKED LIST- INSERTION

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int data){
        this->data= data;
        this->next=NULL;
    }

};

void insertNode(Node* &tail, int element ,int d){
    
    //if list is empty
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    
    else{
        //non empty list
        
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
            
            
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        
        
    }
    
    
    
}

void print(Node* &tail){
    
    Node* temp = tail;
    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    
    cout<<endl;
}

int main(){
    
    Node* tail =NULL;
    
    insertNode(tail,5,6);
    print(tail);
    
    insertNode(tail,6,8);
    print(tail);
    
    insertNode(tail,8,9);
    print(tail);
    
    insertNode(tail,6,99);
    print(tail);
    
    
    return 0;
}




