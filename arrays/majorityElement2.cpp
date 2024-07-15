#include<bits/stdc++.h>
using namespace std;

int majorityElement2(vector<int> nums){
    map<int,int>freq;
    for(auto ele: nums){
        freq[ele]++;
    }
    for(auto count:freq){
        if(count.second==1){
            return count.first;
        }
    }
    return -1;
}

int main(){
    vector<int> nums={1,2,5,2,3,1,5,5,2,1};
    int ans=majorityElement2(nums);
    cout<<ans<<endl;
   
return 0;
}