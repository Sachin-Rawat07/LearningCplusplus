#include <iostream>
#include<queue>
#include<vector>
using namespace std;

//}int largest(vector<int>&nums){

//{4,5,9,7,1,3,9,8}
int kLargest(vector<int>&nums,int k){
    priority_queue<int> ans;
    for(int i=0;i<nums.size();i++){
        ans.push(nums[i]);
    }
    while(k-1>0){
        ans.pop();
        k--;
    }
    return ans.top();
    

    

}

int main(){
    vector<int>nums={4,5,7,1,3,9,8};
    int k;
    cin>>k;
    cout<<kLargest(nums,k)<<endl;

return 0 ;
}