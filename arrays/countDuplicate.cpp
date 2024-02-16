#include <iostream>
#include <vector>
using namespace std;
bool duplicate(vector<int>& nums) {
    
        int n = nums.size();
        int i=0;
        int j=1;
        while (i<n) {
            if (nums[i] == nums[j])
                return true;
        
        j++;

        if(j==n){
            i++;
            j=i+1;
        }
        }
       return false;
        
    }

int main(){
    vector<int> nums={1,2,3,4};
    cout<<duplicate(nums)<<endl;
    return 0;
}
