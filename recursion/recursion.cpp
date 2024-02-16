// in recursion , we try to solve a bigger problem cy finding out solutions to smaller sub problems .We represent there problems in the form of functions and these functions calls itself to solve smaller sub problems .



//factorial using recursion
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1)
    return 1;

    int ans=n*factorial(n-1);
    return ans;

}



int main(){
    int i=factorial(4);
    cout<<i;
    

return 0 ;
}