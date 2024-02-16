#include <iostream>
using namespace std;
float area(int r){
    return 3.14*r*r;

}
float circumference(int r){
    return 2*3.14*r;

}
int main(){
    int rad=5;
    float ar= area(rad);
    float cr = circumference(rad);
    cout <<"area of circle is : "<< ar<<"\n";
    cout <<"circumference of circle is : "<<cr<<"\n";

return 0 ;
}