#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    cout<<"array before reverse"<<endl;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<"array after reverse"<<endl;
    
    int left=0;
    int right=n-1;

    while(left<right){
        swap(arr[left++],arr[right--]);
    }

    for(int i=0;i<n;i++){
    
            
            cout<<arr[i]<<" ";

    }
    

return 0 ;
}