#include <iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr=&x;


    cout<<"Address of x "<<&x<<"\n";
    cout<<"Address stored inside ptr "<<ptr<<"\n";
    cout<<"Address of ptr itself "<<&ptr;


return 0 ;
}