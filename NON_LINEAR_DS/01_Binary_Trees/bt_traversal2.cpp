//Breadth First Search
#include<iostream>
#include<vector>
#include<queue>
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


void levelOrderTraversal(Node* rootNode){
    if(rootNode==NULL) return;

    queue<Node *> q;
    q.push(rootNode);

    while(!q.empty()){
        int nodesAtCurrLvl=q.size();

        while(nodesAtCurrLvl--){
            Node* currNode=q.front();
            q.pop();
            cout<<currNode->value<<" ";

            if(currNode->left){
                q.push(currNode->left);
            }

            if(currNode->right){
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }


}


int main(){
    Node* root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(6);
    root->left->right=new Node(5);
    root->right->right=new Node(11);

    levelOrderTraversal(root); 

return 0;
}