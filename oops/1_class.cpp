//access modifiers and getter and setter function
// by default access modifier public hota h

#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int age;

    public:
    //set the name
    void setname(string a){
        name=a;
    }
    void set_age(int b){
        age=b;
    }

    //get the name

    void get_name(){
        cout<<name<<" "<<age;
    }

};
int main(){
    Student A1;
    A1.setname("Sachin");
    A1.set_age(21);
    A1.get_name();
return 0;
}