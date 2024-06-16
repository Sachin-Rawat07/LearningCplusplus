#include<bits/stdc++.h>

using namespace std;

class Customer{
    string name;
    int acc,bal;
    static int total_bal;

    public:
    Customer(string name,int acc,int bal){
        this->name=name;
        this->acc=acc;
        this->bal=bal;
        total_bal+=bal;
    }  
    void display(){
        cout<<"total balance is "<<total_bal<<endl;
    }

};

// Definition of the static member
int Customer::total_bal = 0;

int main(){
    Customer A1("om",1,1000);
    Customer A2("rohan",2,1500);
    A2.display();


}