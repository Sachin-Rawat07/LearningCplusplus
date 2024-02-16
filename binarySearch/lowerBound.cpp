#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector <int> &arr , int target)
{   
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return ans;

}

int main(){
    vector<int> arr{2,3,5,7,9,11,13,16};
    int target=11;
    cout<<lowerBound(arr,target)<<endl;

return 0 ;
}