#include<bits/stdc++.h>
using namespace std;

void subsetSum(int ind,vector<int>arr,vector<int>&ans,int sum){
    if(ind==arr.size()){
        ans.push_back(sum);
        return ;
    }
    subsetSum(ind+1,arr,ans,sum+arr[ind]);
    subsetSum(ind+1,arr,ans,sum);
}


int main(){
    vector<int>arr={3,1,2};
    vector<int>ans;

    subsetSum(0,arr,ans,0);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

return 0;
}