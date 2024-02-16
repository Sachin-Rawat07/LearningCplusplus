#include <iostream>
using namespace std;
int main(){
    int year;
cout << "Enter the year you want to check : ";
cin>>year;
if (year %100==0&&year %400==0){
    cout<<"leap year";
}
else if(year%4==0){
    cout<<"leap year";
}
else{
    cout<<"not a leap year";
}
return 0 ;
}