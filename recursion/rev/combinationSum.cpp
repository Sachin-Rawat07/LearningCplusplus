#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind,int target,vector<int>arr,vector<vector<int>>&ans,vector<int>&ds){
    if(ind ==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    findCombination(ind+1,target,arr,ans,ds);

}

vector<vector<int>>combinationSum(vector<int>arr,int target){
    vector<vector<int>>ans;
    vector<int>ds;

    findCombination(0,target,arr,ans,ds);
    return ans;
}


int main(){
    vector<int>arr={2,3,5};
    
    int target=8;

    vector<vector<int>>res=combinationSum(arr,target);

     for (const auto& combination : res) {
        cout << "[";
        for (int i = 0; i < combination.size(); i++) {
            cout << combination[i];
            if (i < combination.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    



return 0;
}