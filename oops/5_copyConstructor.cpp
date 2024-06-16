
#include<bits/stdc++.h>

using namespace std;

class Student{
    string name;
    int age;
    public:  
    Student(string name, int age) : name(name), age(age) {}
    Student(Student &B){
        name=B.name;
        age=B.age;
    }
    void display(){
        cout<<name<<" "<<age<<endl;

    }
};

int main(){
    Student A1("sachin",20);
    Student B(A1);  
    Student A3=A1;

    A3.display();//1 method
    
    B.display();//2 method


}