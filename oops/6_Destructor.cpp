#include<bits/stdc++.h>

using namespace std;

class Student{
    string name;
    int* age;
    public:  

   /* Student(){
        name="Raj";
        age=new int;
        *age=20;

    }
    ~Student(){
        delete age;
    }
*/

    

};

class Customer{
    string name;
    public:
    Customer(string name){
        this->name=name;
        cout<<"Constructor is  "<<name<<endl;


    }
    ~Customer(){
        cout<<"Destructor is  "<<name<<endl;
    }
    

    /*output :
    C1
    C2
    C3
    D3
    D2
    D1*/
};

int main(){
    Student A1;  
    Customer A("1"),B("2"),C("3");
   


}