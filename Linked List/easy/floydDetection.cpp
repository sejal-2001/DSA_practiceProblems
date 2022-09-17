que: FLOYD DETECTION



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

void inserthead(Node* &head,int d){
    
    Node* temp = new Node(d);
    
   
        
        temp->next= head;
        head = temp;
        
    
}

void inserttail(Node* &tail ,int d){
    
    Node* temp = new Node(d);
    
    tail->next = temp;
    tail =temp;
    
    
    
}

void print(Node* &head){
    
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

Node* floydDetectloop(Node*head){
    
    if(head == NULL){
        return  NULL;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL){
        fast = fast->next;
        
        if(fast != NULL){
            fast = fast->next;
        }
        
        slow = slow->next;
        
        if(slow == fast){
            return slow;
        }
    }
   return NULL; 
}


int main()
{
  Node* node1 = new Node(66);
  Node* head = node1;
  Node* tail = node1;
  
  
  inserthead(head,88);
  inserttail(tail,4);
  
  tail->next = head->next;
  
  

  
  if(floydDetectloop(head)){
      cout<<"cycle is present"<<endl;
  }
  else{
      cout<<"no cycle is there"<<endl;
  }

    return 0;
}
