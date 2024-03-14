#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
        map<int,int>freq;

        for(int ele:nums){
            freq[ele]++;
        }
        
        int sum=0;
        int maxi=INT_MIN;
        for(auto ele:freq){
            if(ele.second>maxi){
                maxi=ele.second;
                sum=ele.second;
            }
            else if(ele.second==maxi){
                sum+=ele.second;
            }
            
        }
        return sum;
    }

int main(){
    vector<int> nums={1,2,2,4,5};
    cout<<maxFrequencyElements(nums)<<endl;



    return 0;
}