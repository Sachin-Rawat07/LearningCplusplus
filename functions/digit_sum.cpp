#include <iostream>
using namespace std;

int digitsum(int a){
    int sum=0;
    while (true){
        int b=a%10;
        sum=sum+b;
        a=a//10;

    }
    return sum;
}
int main(){
int num;
cout<<"Enter the number";

cin>>num;
int dig_sum=digitsum(num);
cout<<dig_sum;

return 0 ;
}