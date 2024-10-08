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
    int countDigits(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int num = abs(root->val); 
        int digitCount = 0;
        
        if (num == 0) {
            digitCount = 1;
        } else {
            while (num > 0) {
                num /= 10;
                digitCount++;
            }
        }
        
       
        return digitCount + countDigits(root->left) + countDigits(root->right);
    }
int main(){
    Node* root=new Node(2);
    root->left=new Node(3);
    root->right=new Node(4);


    cout<<"Root node: "<<root->value<<endl;
    cout<<"left node: "<<root->left->value<<endl;
    cout<<"Right node: "<<root->right->value<<endl;



return 0;
}