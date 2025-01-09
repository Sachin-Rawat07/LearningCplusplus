#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>arr,int index){
    if(index==arr.size()-1) return true;

    return arr[index]<arr[index+1]&& sorted(arr,index+1);
}
int main(){
    vector<int>arr={1,3,5,6,9};
    cout<<sorted(arr,0);
return 0;
}