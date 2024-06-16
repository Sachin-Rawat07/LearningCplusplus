//static memory allocation- static m memmory stack m store hoti h
//dynamic memory allocation - dynamic m memory heap m store hoti h

#include<bits/stdc++.h>

using namespace std;

class Student{
    public:  
    string name;
    int age,roll_no;

};

int main(){
    Student A1;  
    //ye static method h store krne ka

    // A1.name="Sachin";
    // A1.age=21;
    // A1.roll_no=67;

    //dynamic  --- two ways   1)   (*S).name;   2) S->name;



    Student *S=new Student;
    (*S).name="Sachin";
    (*S).age=21;
    cout<<S->name<<endl;

}