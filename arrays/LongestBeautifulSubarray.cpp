#include<bits/stdc++.h>
using namespace std;

int longestBeautifulSubarray(vector<int> arr){
    map<int,int>mp;
    mp[0]=1;
    int ans=0,xorSum=0;

    for(int i=0;i<arr.size();i++){
        xorSum^=arr[i];

        if(mp.find(xorSum)!=mp.end()){
            ans=max(ans,i-mp[xorSum]);
        }
        else mp[xorSum]=i;
    }
    return ans;
}



int main(){
    // vector<int> arr={4,2,5,7,9};
    vector<int> arr={1,3,3};
    int ans= longestBeautifulSubarray(arr);
    cout<<ans<<endl;

return 0;
}