#include <iostream>
using namespace std;
int oddnum(int a,int b){
    for (int i=a;i<=b;i++){
        if (i%2!=0){
            cout <<i<<"\n";
        }
        
    }
}

int main(){
    int num1,num2;
    cout <<"enter the initial number : ";
    cin>>num1;
    cout <<"enter the final number : ";
    cin>>num2;
    int a=oddnum(num1,num2);



return 0 ;
}