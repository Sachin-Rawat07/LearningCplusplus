#include <iostream>
using namespace std;

void f(int num){
    if(num<=0)
    return;
    f(num-1);
    cout<<num<<" ";
}




int main(){
    f(6);

return 0 ;
}