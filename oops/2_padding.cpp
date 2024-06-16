//padding -memory allocation given to variable
// size of empty class is 1
//size is the multipple of biggest datatype present in the class

#include<bits/stdc++.h>

using namespace std;

class Student{
    public: 
    // char a;
    // int b,c;
    // char d;             // output=16   a p p p b b b b c c c c d p p p

    char a;
    char d;
    int b,c;            //output =12       a d  p p b b b b c c c c

};

int main(){
    Student A1;  //A1 is a object we can create it n times
    cout<<sizeof(Student)<<endl;

}