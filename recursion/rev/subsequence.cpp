#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int>arr,vector<int>&ans,int n){

    if(ind==n){
        for(auto it:ans){
            cout<<it<<" ";
        }
     
        if(ans.size()==0){
            cout<<"{}";
        }
           cout<<endl;
        return;
    }

    ans.push_back(arr[ind]);
    printF(ind+1,arr,ans,n);
    ans.pop_back();
    printF(ind+1,arr,ans,n);
}

int main(){
    vector<int> arr={3,1,2};
    vector<int>ans;
    int n =arr.size();
    printF(0,arr,ans,n);

return 0;
}