#include<iostream>
#include<vector>
using namespace std;

int pairWithMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n<2) return-1;
        int mxSum=INT_MIN;
        
        for(int i=0;i<n-1;i++){
            vector<int>subarray;
            int sum=0;
            for(int j=0;j<n;j++){
                
                
            }
            
        }
        
        return ans;
    }

int main(){

    vector<int>arr={4,3,1,5,6};
    
    
    cout<<pairWithMaxSum(arr);

    return 0;
}