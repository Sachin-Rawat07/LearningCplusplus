#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0) return 1;

    int fact=1;
    fact=n*factorial(n-1);
    return fact;
}

int main(){
    cout<<factorial(5)<<endl;



    return 0;
}