//Depth First Search

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int value;
    Node *left;
    Node * right;

    Node(int v){
        value=v;
        left=right=NULL;
    }


};

void preOrderTraversal(Node * rootNode){
    if(rootNode==NULL){
        return;
    }
    cout<<rootNode->value<<" ";
    preOrderTraversal(rootNode->left);
    preOrderTraversal(rootNode->right);

}


void inOrderTraversal(Node *rootNode){
    if(rootNode==NULL){
        return;
    }
   
    inOrderTraversal(rootNode->left);
    cout<<rootNode->value<<" ";
    inOrderTraversal(rootNode->right);

}

void postOrderTraversal(Node *rootNode){
    if(rootNode==NULL){
        return;
    }
   
    postOrderTraversal(rootNode->left);
    postOrderTraversal(rootNode->right);
    cout<<rootNode->value<<" ";

}

int main(){
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(6);
    root->left->left->left=new Node(7);
    root->left->left->right=new Node(8 );
    root->left->right=new Node(5);
    root->right->left=new Node(9);
    root->right->right=new Node(11);
    root->right->right->left=new Node(13);
    root->right->right->right=new Node(15);

   // preOrderTraversal(root);
   inOrderTraversal(root);
//    postOrderTraversal(root);


    


return 0;
}