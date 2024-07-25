#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    int data;
    Node next;

    Node(int val){
        data=val;
        next=nullptr;
    }

};
class Stack{
    int
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(3);

    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<"hello"<<endl;
    // cout<<st.empty()<<endl;
    cout<<"lskd"<<endl;



return 0;
}