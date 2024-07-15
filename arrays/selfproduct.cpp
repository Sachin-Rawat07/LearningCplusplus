#include <bits/stdc++.h>
using namespace std;
    vector<int> productExceptSelf(vector<int>& nums) {
        /*int n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        int product1=1;
        int product2=1;

        for(int i=0;i<nums.size();i++){
            product1*=nums[i];
            left.push_back(product1);

        }
        for(int i=nums.size()-1;i>=0;i--){
            product2*=nums[i];
            right.push_back(product2);
        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans[i]=left[i]*right[i];
        }
        for(auto i: ans){
        cout<<i<<" ";
    }

        return ans;*/
        int n=nums.size();
        vector<int>leftArr(n,1);
        vector<int>rightArr(n,1);
        vector<int>anssArr(n,1);
        for(int i= 1;i<n;i++){
            leftArr[i]=leftArr[i-1]*nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            rightArr[i]=rightArr[i+1]*nums[i+1];
        }
        
        for(int i=0;i<n;i++){
            anssArr[i]=leftArr[i]*rightArr[i];
        }

        return anssArr;
 f5





    }

int main(){
    vector<int>arr={1,2 ,3 ,4};
    //cout<<selfProduct(arr)<<endl;
    vector<int> ans=productExceptSelf(arr);
   /* for (int a: selfProduct(arr)) {
        cout << a << " ";
    }*/
    for(auto i: ans){
        cout<<i<<" ";
    }


return 0 ;
}