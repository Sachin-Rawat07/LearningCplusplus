#include<bits/stdc++.h>

using namespace std;

class Customer{
    string name;
    int acc,bal;
    

    public:
    Customer(string name,int acc,int b){
        this->name=name;
        this->acc=acc;
        bal=b;
        
    }  
    void deposit(int amount){
        if(amount>0){
            bal+=amount;
        }else cout<<"invaalid"<<endl;

    }
    void display(){
        cout<<"total balance is "<<bal<<endl;
    }

};



int main(){
    Customer A1("om",1,1000);
   
    A1.deposit(165);
    A1.display();


}