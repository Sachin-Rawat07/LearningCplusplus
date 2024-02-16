//addition using pointer

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;   //10,20

    int *ptrx=&x;//fetches address of x and then store in in ptrx
    int *ptry=&y;//fetches address of y and then store in in ptry 

    int result;
    int *ptr_result=&result; 

    *ptr_result=*ptrx + *ptry;   //dereference operator

    cout<<result <<endl; //value

    cout<<endl;
    cout<<&ptr_result;
    cout<<"\n"<<endl;
    cout<<ptr_result;  //address
    
    cout<<"\n"<<endl;
    cout<<*ptr_result;//value




return 0 ;
}