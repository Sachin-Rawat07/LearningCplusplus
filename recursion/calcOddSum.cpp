#include <iostream>
#include<vector>
using namespace std;
int sum=0;
int oddSum(int a, int b){
    if(a==b) return sum+b;
    sum+=a;
    oddSum(a+2,b);
}

int main(){

   int a=7;
   int b=45;
   cout<<oddSum(a,b)<<endl;
    

return 0 ;
}