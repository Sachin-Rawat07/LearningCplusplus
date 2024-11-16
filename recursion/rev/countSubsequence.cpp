#include<bits/stdc++.h>
using namespace std;

int printCount(int ind,vector<int>arr,vector<int>&ans,int s,int sum){
    if(ind==arr.size()){
        if(s==sum){
           return 1;
        }
        return 0;    }
    ans.push_back(arr[ind]);
    s+=arr[ind];
    int l=printCount(ind+1,arr,ans,s,sum);
    s-=arr[ind];
    ans.pop_back();
    int r=printCount(ind+1,arr,ans,s,sum);


    return l+r;

}
int main(){
    vector<int>arr={1,3,2,1};
    vector<int>ans;
    int sum=2;

    cout<<printCount(0,arr,ans,0,sum);

return 0;
}