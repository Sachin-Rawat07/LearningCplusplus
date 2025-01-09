#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>arr,int index,int target){
    if(index==arr.size()-1) return false;

    return arr[index]== target || sorted(arr,index+1,target);
}
int main(){
    vector<int>arr={1,13,5,6,19};
    int target=6;
    cout<<sorted(arr,0,target);
return 0;
}