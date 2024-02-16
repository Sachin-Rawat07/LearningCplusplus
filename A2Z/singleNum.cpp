#include <iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &v,int n){
    // int j=0;
    // for (int i = j+1; i < n; i++)
    // {
    //     if(v[i]==v[j]){
    //          v.erase(v.begin()+i);
    //         j++;
    //     }
    // }
    // return v[j];
    
    int result = 0;
    for (int num : v) {
        result ^= num; // Using XOR to find the single number
    }
    return result;
    
}





int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);

        }

        cout<<singleNumber(v,n);
        t--;
    }


return 0 ;
}