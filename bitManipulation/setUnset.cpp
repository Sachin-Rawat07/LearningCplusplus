#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int i;
    cin>>i;
    
    int mask=1<<i;
    if(num & mask )
    cout<<"set"<<endl;
    else
    cout<<"unset"<<endl;

return 0 ;
}