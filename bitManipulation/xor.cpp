//given a number n print all the xor till n
//input=5
//output=001(   1^2^3^4^5)


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int xoro=0;
    while(n>0){
        xoro=xoro^n;
        n--;
    }
    cout<<xoro<<endl;

return 0 ;
}