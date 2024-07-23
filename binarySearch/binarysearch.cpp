#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int low=0;
    int ans=-1;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    return  ans;

}
int main(){
    int arr[8]={2,3,5,6,7,8,9,10};
    int n=8;
    int target=11;
    cout<<binarySearch(arr,n,target)<<endl;
    cout<<"helo";
return 0 ;
}