#include <iostream>
#include<vector>
using namespace std;
int sum=0;
bool powerOf2(int n){
    if(n==1) return true;
    else if (n % 2 != 0 || n == 0) 
        return false;

    return powerOf2(n/2);
}

int main(){

   
   int n=64;
   cout<<powerOf2(n)<<endl;
    

return 0 ;
}