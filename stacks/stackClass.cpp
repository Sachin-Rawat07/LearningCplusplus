#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }

    }


    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }


    int peek(){
        if(top>=0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
        return -1;
        }

    }


    bool isEmpty(){
        return (top==-1);}
  
};



int main(){
    const int size=5;
    Stack st(size);
    st.push(22);
    st.push(42);
    st.push(45);
    st.pop();
    st.push(1);
    st.push(40);
    st.push(47);
    //st.push(78);
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();st.pop();//st.pop();st.pop();
    cout<<st.peek()<<endl;

return 0 ;
}