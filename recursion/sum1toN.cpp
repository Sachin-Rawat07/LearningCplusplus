#include<iostream>
using namespace std;

int sum(int n){
    if(n==1 ) return 1;
    int summ=0;
    // summ+=n;

    // summ+=sum(n-1);
    return n+sum(n-1);

    
    
}

int main(){
   cout<< sum(10)<<endl;



    return 0;
}