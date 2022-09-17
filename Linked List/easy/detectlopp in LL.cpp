
que: DETECT CYCLE/LOOP IN LINKED LIST


#include <iostream>
#include <map>

using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    
    
    //constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

bool detectloop(Node* head){
    
    if(head == NULL){
        return false;
    }
    
    map<Node* , bool>visited;
    
    Node* temp  = head;
    while(temp != NULL){
        
        if(visited[temp] == true){
            return true;
        }
        
        visited[temp] = true;
        temp = temp->next;
    }
   return false; 
    
}


int main()
{
  Node* node1 = new Node(66);
  Node* head = node1;
  Node* tail = node1;
  
  head->next = new Node(12);
  head->next->next = new  Node(6);
  
  
 
  
  print(head);
  if(detectloop(head)){
      cout<<"cycle is present"<<endl;
  }
  else{
      cout<<"no cycle is there"<<endl;
  }

    return 0;
}
