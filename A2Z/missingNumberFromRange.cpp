#include <iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> &v){
    int n=v.size();
    
    int sum=(n*(n+1))/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        
        sum2+=v[i];
    }
    return sum-sum2;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    // cout<<v.size();
    cout<<missingNumber(v)<<endl;
    

return 0 ;
}