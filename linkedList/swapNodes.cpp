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

/*void deleteDuplicateElements(Node* &head){
        Node*  curr_node=head;
        while(curr_node!=NULL){
        while(curr_node->next!= NULL && curr_node->val==curr_node->next->val){
            Node* temp=curr_node->next; //node to be deleted;
            curr_node->next=curr_node->next->next;
            free(temp);
            
        }curr_node=curr_node->next;
        }
        

}*/
//     1->2->3->4->NULL

Node* swapNodes(Node* &head){
    Node*temp=head;
   // while(temp){

        /*Node*ptr1=temp->next;
        Node* ptr2=temp->next->next;
        ptr1->next=temp;
        temp->next=ptr2;*/
        

    // }
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* secondNode=head->next;
    head->next=swapNodes(secondNode->next);
    secondNode->next=head;
    return secondNode;

    //temp=temp->next;
}


int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    //ll.insertAtTail(2);
    //ll.insertAtTail(5);
    //ll.insertAtTail(5);
    ll.insertAtTail(5);
    ll.insertAtTail(7);
    ll.display();
    swapNodes(ll.head);
    ll.display();




return 0 ;
}