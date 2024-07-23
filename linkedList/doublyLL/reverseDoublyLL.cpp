 #include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;


    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;

    }

};

class DoublyLinkedlist{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }


    void insertAtHead(int val){
        Node* new_node= new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return ;
    }

    void insertAtTail(int val){
        Node* new_node= new Node(val);
        if(tail==NULL){
            head=tail=new_node;
            return;
        }

       
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
        
    }

    void insertAtK(int val ,int k){
        Node* temp=head;
        int count=0;
        while(count!=(k-1)){
            temp=temp->next;
            count++;

        }
        Node* new_node=new Node(val);

        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        
        return;


    }

    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        if( head==NULL)  return;
        head->prev=NULL;
        free(temp);
        return;
    }

    void deleteAtTail(){
        if( head==NULL){
            return; 
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else
        tail->next=NULL;
        
        free(temp);

    }

    void deleteAtK(int k){
        int count =1 ;
        Node* temp=head;
        while(count< (k)){
            temp=temp->next;
            count++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);



    }
    void reverseList(){
        if (head == nullptr || head->next == nullptr) {
            return ; 
        }
    
        Node* curr = head;
        Node* prev = nullptr;
    
        
        while (curr != nullptr) {
        
            prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            prev=curr;
            curr=curr->prev;
    }
    
  
    head=prev;
    }

};




int main(){

    DoublyLinkedlist dll;
    dll.insertAtHead(2);
    dll.display();
    dll.insertAtHead(1);
    dll.display();

    dll.insertAtTail(4);
    dll.display();
    dll.insertAtK(3,2);
    dll.display();

    
    dll.display();
    
    dll.display();

    
    dll.display();
    dll.reverseList();
    dll.display();
return 0 ;
}