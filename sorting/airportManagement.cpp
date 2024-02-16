#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;
        int arr[n],dpr[n];
        int freq[100]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cin>>dpr[i];
        }
        for(int i=0;i<n;i++){
            freq[arr[i]]  ++;
        }
        

        t--;
    }

return 0 ;
}