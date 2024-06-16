#include <bits/stdc++.h>

using namespace std;

class Student
{
    
    string name;
    int age, roll_no;

    public:
    // Defualt Constructor
    Student(){

    cout << "constructor is called" << endl;
    name = "Om";
    age = 20;
    roll_no = 42;
    }


    
    void display() {
        cout << "Name is " << name << " age is " << age << " roll no is " << roll_no << endl;
    }
    
};

int main(){    
    Student A1;
    A1.display();
}