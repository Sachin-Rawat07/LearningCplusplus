#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<int >v1;
    vector<int>v2;

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int ans_sum=0;
    set<int>value1;
    for(auto ele:v1){
        value1.insert(ele);
}

    for(auto ele:v2){
        if(value1.find(ele)!=value1.end()){
            ans_sum+=ele;
        }
    }
    cout<<ans_sum<<endl;

return 0 ;
}