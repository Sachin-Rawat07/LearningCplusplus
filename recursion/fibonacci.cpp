#include <iostream>
using namespace std;
int fibb(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else{
    int anss=fibb(n-1)+fibb(n-2);
    return anss;}
}


int main(){
    int ans=fibb(8);
    cout<<ans<<endl;

return 0 ;
}