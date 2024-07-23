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
// insertion of new value before head
void insertAtHead(Node* &head, int val){
    Node* new_node= new Node(val);
    new_node->next=head;
    head=new_node;
}

//insertion of new node at the end
void insertAtTail(Node* &head, int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

}

//insertion of new node at the arbitary position
void insertAtPosition(Node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return ;
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }

    //now temp is pointing to the node at pos -1
    new_node->next=temp->next;
    temp->next=new_node;

}

//updatation of new value at k position
void updateAtK(Node* &head,int val,int k){
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    //now it reaches the k position
    temp->val=val;

}

// delete at head
void deleteAtHead(Node* &head){
    Node* temp= head ; //node to be deleted
    head=head->next;
    free(temp);

}

// deleting node from the end
void deleteFromEnd(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){;\   
        second_last=second_last->next;

    }
    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);
    }

//deleting a node from k position
void deleteAtK(Node* &head, int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int curr_pos=0;
    Node* prev=head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }

    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);


    
}

//display function
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,5);
    display(head);
    insertAtHead(head,4);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,8);
    display(head);
    insertAtTail(head,9);
    display(head);
    insertAtPosition(head,3,2 );
    display(head);
    updateAtK(head,5,2);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteFromEnd(head);
    display(head);
    deleteAtK(head,1);
    display(head);
    
return 0 ;
}