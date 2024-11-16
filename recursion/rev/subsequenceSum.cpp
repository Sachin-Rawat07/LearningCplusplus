#include<bits/stdc++.h>
using namespace std;

void printAll(int ind,vector<int>arr,vector<int>&ans,int s,int sum){
    if(ind==arr.size()){
        if(s==sum){
            for(auto it :ans){
                cout<<it<<" ";
            }
            cout<<endl;
           
        }
        return;
    }
    ans.push_back(arr[ind]);
    s+=arr[ind];
    printAll(ind+1,arr,ans,s,sum);
    s-=arr[ind];
    ans.pop_back();
    printAll(ind+1,arr,ans,s,sum);

}
int main(){
    vector<int>arr={1,3,0,2,1};
    vector<int>ans;
    int sum=2;

    printAll(0,arr,ans,0,sum);

return 0;
}