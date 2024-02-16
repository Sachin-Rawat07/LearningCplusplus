#include <iostream>
using namespace std;
int main(){
    int lR,uR;
    cin>>lR>>uR;
    int count=0;

    for(int i=lR;i<=uR;i++){
        if(i%10==2 || i%10 ==3 || i%10==9){
            count++;
        }
    }
    cout<<count<<endl;

return 0 ;
}