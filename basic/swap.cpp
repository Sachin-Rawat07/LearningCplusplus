#include <iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout <<"enter the numbers";
    cin >>num1>>num2;
    cout<<"before swapping"<<endl;
    cout<<"value of num1: "<<num1<<endl;
    cout<<"value of num2: "<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping "<<endl;
    cout<<"value of num1: "<<num1<<endl;
    cout<<"value of num2: "<<num2<<endl;

return 0 ;
}