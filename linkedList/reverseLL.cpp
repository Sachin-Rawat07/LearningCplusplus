#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }

};


class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int val){
        
        Node* new_node=new Node(val);

        if(head==NULL){
            head=new_node;
            return;
            
        }

        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=new_node;

    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};


// void recurse(Node* head){
//     if(head==NULL){
//         return;
//     }
//     recurse(head->next);
//     cout<<head->val<<" ";
    

// }

Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
 
    while(currptr!=NULL){
        Node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    Node* new_head=prevptr;
    return new_head;


}
int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
   
    ll.display();
    ll.head=reverse(ll.head);
    ll.display();
    
   

return 0 ;
}