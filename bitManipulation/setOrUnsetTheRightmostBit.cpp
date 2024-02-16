#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=n&1;
    if(a==1)
    cout<< n+1<<endl;
    else
    cout<< n-1<<endl;


return 0 ;
}