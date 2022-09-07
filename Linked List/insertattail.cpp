que: INSERT AT TAIL IN SINGLY LINKED LIST


#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructor 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void insertAttail(Node* &tail , int d){
    
    //create a node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    
}

void printlist(Node* &tail){
    
    Node* temp = tail;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    
    //create a node of linked std::list<> ;
    
    Node* node1 = new Node(10);
    
    Node* tail = node1;
    
    printlist(tail);
    
    insertAttail(tail,15);
    printlist(tail);
    
    return 0;
    
    
    
}