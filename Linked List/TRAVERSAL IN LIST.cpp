TRAVESRSEL IN LINKED LIST:-



#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void printlist(Node * n){
    
    while(n!=NULL){
        cout<<n->data<<" ";
       n= n->next;
    }
}


int main(){
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    //allocate nodes in heap
    
    head  = new Node();
    second = new Node();
    third = new  Node();
    
    ///give data to nodes
    
    head->data = 11;
    head->next = second;
    
    second->data =12;
    second->next = third;
    
    third->data = 13;
    third->next = NULL;
    
    //print the list 
    
    printlist(head);
    return 0;
    
    
    
    
}