#include <iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>newArr;
        int k=m+n;
        for(int i=0;i<k;i++){
            if(i<m){
                newArr.push_back(nums1[i]);
            }
            else{
                newArr.push_back(nums2[i-m]);
            }
            
        }

        
        //[1,2,3,2,5,6]
        int left=0;
        int right=m+n-1;
        while(left<=right){
            if(newArr[left]<=newArr[right]){
                left++;right--;
                
            }
            else{
                swap(newArr[left],newArr[right]);
                left++;right--;
            }
            
        }
        for(int i=0;i<k;i++){
            cout<<newArr[i]<<endl;
        }
        
    }
};



int main(){
    Solution solution;
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    int m=3,n=3;

    solution.merge(nums1,m,nums2,n);

return 0 ;
}