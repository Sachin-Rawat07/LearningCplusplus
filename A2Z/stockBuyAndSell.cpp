#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxProfit(vector<int>& nums) {
        int left=0;
        int low=0;
        int val=nums[0];int high=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>maxi){
                high=nums[i];

            }
            else if(nums[i]>nums[i-1]){
                left ++;
                low=nums[left];
                
            }
        }
        return high-low;
    }
int main(){
    vector<int>nums={2,4,1};//{7,1,5,4,6,3}
    cout<<maxProfit(nums)<<endl;

return 0 ;
}