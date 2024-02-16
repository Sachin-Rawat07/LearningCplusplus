#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={2,6,5,8,11};
    int target=14;

   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;
        }
        }
    } 
    
        
    

return 0 ;
}