//error
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int target;
    cin>>target;
    int len=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int s=0;
            for(int k=i;k<j;k++){
                s+=arr[k];
            
            if(s==arr[k]){
            len=max(len,j-i+1);}
            }

        }
    }cout<<len<<endl;

return 0 ;
}