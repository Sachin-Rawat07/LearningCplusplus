
//base case
// if (n>=0 and n<=9)
// return n


//assumption










#include <iostream>
using namespace std;


int sumOfDigits(int n){
    if(n>=0&&n<=9)
    return n;

    return sumOfDigits(n/10)+n%10;
}
int main(){
    int n;
  
      cout<<"enter the number : ";
     cin>>n;
      int ans=sumOfDigits(n);

    cout<<ans;

return 0 ;
}