#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int d;
    cin>>d;

    for(int i=0;i<n;i++){
        cout<<arr[(i+d)%n]<<" ";
    }

return 0 ;
}