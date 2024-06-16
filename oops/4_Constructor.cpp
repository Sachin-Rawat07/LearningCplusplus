#include <bits/stdc++.h>

using namespace std;

class Student
{
    
    string name;
    int age, roll_no;

    public:
    // Default Constructor
    Student(){

    cout << "constructor is called" << endl;
    name = "Om";
    age = 20;
    roll_no = 42;
    }

    //Parameterized Constructor
    Student(string a,int b,int c){
        name=a;
        age=b;
        roll_no=c;
    }


    //Constructor Overloading
    Student(string name){//for others parameter it will store garbage value
       this->name=name;
    }

    void display() {
        cout << "Name is " << name << " age is " << age << " roll no is " << roll_no << endl;
    }
    

    //inline Constructor
    inline Student(string a, int b):name(a),age(b){}
};

int main(){    
    Student A1;
    Student A2("Rohit",40,45);
    A1.display();
    A2.display();
    Student A3("Ravi");
    A3.display();
    Student A4("Rohan",13);
    A4.display();
}