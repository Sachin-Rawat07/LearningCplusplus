#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 0, 0, 1, 0,1,1,0,1,0,0};
    int e = arr.size()-1;
    int s=0;
    // while(s<e){
    //     if((arr[s]==1) && arr[e]==0){
    //         swap(arr[s],arr[e]);
    //         s++;e--;
    //     }
    //     else if(arr[s]==0) s++;
    //     else if (arr[e]==1) e--;
    // }
    while(s<e){
        if((arr[s]==1) && arr[e]==0){
           arr[s]=0;
           arr[e]=1;
        }
        else if(arr[s]==0) s++;
        else if (arr[e]==1) e--;
    }

   

    for(auto i:arr){
        cout<<i <<" ";
    }
    cout<<endl;
    return 0;
}