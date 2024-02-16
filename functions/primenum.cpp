#include <iostream>
using namespace std;
int primenum(int a, int b){
    for(int i=a;i*i<=b;i++){
        if (b%i!=0){
            cout<<i<<endl;
        }
    }

}
int main(){ 
    int num1,num2;
    cout <<"enter the initial number : ";
    cin>>num1;
    cout <<"enter the final number : ";
    cin>>num2;
    int a=primenum(num1,num2);

return 0 ;
}