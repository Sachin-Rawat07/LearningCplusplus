#include<iostream>
using namespace std;

int power(int n,int m){
    if(m==0 ) return 1;
    if( m==1) return n;
    return n*power(n,m-1);
    


    
    
}

int main(){
   cout<< power(5,4)<<endl;



    return 0;
}