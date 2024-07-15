#include<iostream>
#include<vector>
using namespace std;
int main(){
    int bottle=15;
    int exchange=4;

    int sum=bottle;
    // int rem=0;
    while(bottle>=exchange){
        int rem=bottle%exchange;
        bottle=bottle/exchange;

        sum+=(bottle);
        sum+=(bottle+rem)/exchange;
        

    }
    cout<<sum<<endl;
return 0;
}