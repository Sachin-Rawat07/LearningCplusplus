#include<bits/stdc++.h>
using namespace std;

int cost(int x){
    if(x%2==0) return 0;
    string s=to_string(x);
    vector<string>arr;
    do{
        arr.push_back(s);
    }
    while(next_permutation(s.begin(),s.end())); 
    int maxe=INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxe=max(maxe,stoi(arr[i]));
    }
    cout<<"maxe ="<<maxe<<endl;
    string ss=to_string(maxe);
    cout<<"ss ="<<ss<<endl;
    return ss[ss.length()-1]-'0';
}

int main(){
    int x=913;
    int fs=cost(x);
    cout<<fs<<endl;
}