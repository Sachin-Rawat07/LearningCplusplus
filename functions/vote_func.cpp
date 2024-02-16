#include <iostream>
using namespace std;
string vote(int age){
    if (age>18){
        return "vote";
     }
     else{
        return "doesnot vote";
     }
    
}
int main(){
    int age;
    cout<<"enter the age of the user ";
    cin>>age;
    cout <<vote(age);

return 0 ;
}