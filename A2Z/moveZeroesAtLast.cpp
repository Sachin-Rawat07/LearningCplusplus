#include <iostream>
#include <vector>
using namespace std;


void moveZeroes(vector<int>&nums){
    //first to find out the first position of zero

    int j=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }

    //if my array doesnot contain any zero

    if(j==-1)
    return ;
    
    //if it contains
    
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=nums[j]){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    //return v;






}




int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int >nums;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            nums.push_back(ele);
        }

        moveZeroes(nums);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        t--;}

return 0 ;
}