#include<iostream>
using namespace std;

int print(int n){
    if(n==1 ) return 1;

    cout<<n<<endl;
    print(n-1);
}

int main(){
    cout<<print(5)<<endl;



    return 0;
}