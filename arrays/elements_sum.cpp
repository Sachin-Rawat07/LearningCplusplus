#include <iostream>
using namespace std;
int main(){
    cout<<"enter the numbers of elements you want to store in array: ";
    int n;
    cin>> n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    int sum=0;
    for (int i =0;i<n;i++){
        sum=sum+arr[i];

    }
    cout<<"sum of elements in the given array is "<<sum;
    cout<<"executed";
return 0 ;
}