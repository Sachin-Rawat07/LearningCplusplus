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
    int max_ele=arr[0];
    for (int i =0;i<n;i++){
        if(arr[i]>max_ele){
            max_ele=arr[i];
        }
    }
    cout<<"maximum element in the given array is "<<max_ele; 


    
return 0 ;
}