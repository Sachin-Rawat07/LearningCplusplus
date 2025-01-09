#include<iostream>
#include<vector>
using namespace std;

int sum(int num){
    if(num==0){
        return 0 ;

    }
    
    return num%10+sum(num/10);
}    
int main(){
cout<<sum(1342);

return 0;
}