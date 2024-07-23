#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    unordered_set<int>s;
    for(auto i:arr){
        s.insert(i);
    }
    cout<<s.size()<<endl;

return 0;
}