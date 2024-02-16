///completed on leetcode
#include <iostream>

using namespace std;
int lowerBound(vector <int> &arr , int target)
{   
    int n=arr.size();
    int low=0;
    int high=n-1;
    int frst=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
                first=mid;
                high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return first;
}

    int upperBound(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int last=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            last=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return last;
}
int main(){

return 0 ;
}
