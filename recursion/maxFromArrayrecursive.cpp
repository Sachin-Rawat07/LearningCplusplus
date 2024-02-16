#include <iostream>
using namespace std;
int f(int *arr,int i,int n){
    if(i==n-1)
    return arr[i];


    return max(arr[i],f(arr,i+1,n));

}
int main(){
    int n=5;
    int arr[]={7,3,4,2,9};
    cout<<f(arr,0,n);
    

return 0 ;
}