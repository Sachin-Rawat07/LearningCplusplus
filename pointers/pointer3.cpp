//dereferencing operator  -> *ptr

//ptr->address
//*ptr ->value


#include <iostream>
using namespace std;
int main(){
    int x=9;
    float y=70.2;

    int *ptr1=&x;
    float *ptr2=&y;


    cout<<"Address stored inside ptr : "<<ptr1<<endl;
    cout<<"Value present at the address stored in ptr : "<<*ptr1<<endl;

    cout<<"\n"<<endl;

    cout<<"Address stored inside ptr : "<<ptr2<<endl;
    cout<<"Value present at the address stored in ptr : "<<*ptr2<<endl;


    cout<<"\n"<<endl;

    x=23;//the bucket x has changed its value from 18->23;//and it is again pointing to same memory location
    cout<<"Address stored inside ptr : "<<ptr1<<endl;
    cout<<"Value present at the address stored in ptr : "<<*ptr1<<endl;



    cout<<"\n"<<endl;

    //updatingvalue of x with pointer
    *ptr2=18.9;
    cout<<"Address stored inside ptr : "<<ptr2<<endl;
    cout<<"Value present at the address stored in ptr : "<<*ptr2<<endl;

return 0 ;
}