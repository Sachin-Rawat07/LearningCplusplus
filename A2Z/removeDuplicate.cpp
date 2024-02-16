#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i=0;
    for(int j=i+1 ;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;

}

int main(){
    int t; 
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;

            nums.push_back(ele);
        }

        
        cout<<removeDuplicates( nums)<<endl;
       









        t--;
        }

return 0 ;
}