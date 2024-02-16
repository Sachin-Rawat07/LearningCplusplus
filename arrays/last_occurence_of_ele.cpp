#include <iostream>
using namespace std;
int main(){
    cout<<"enter the numbers of elements you want to store in array: ";//[4,2,1,6,2,4,3,8,4,3]
    int n;
    cin>> n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter the element whose occurence to be found";
    cin>>num;
    int pos;
    for (int i=n-1;i>=0;i--){
        if (arr[i]==num){
            pos=i;
            break;
        }

    }
    cout<<"the last occurence of the element is at position"<<pos;


return 0 ;
}