#include<bits/stdc++.h>
using namespace std;

string largestNumber(vector<int>&arr){
    auto myComparator=[](int &a,int &b){
        string s1=to_string(a);
        string s2=to_string(b);
        if((s1+s2)>(s2+s1)) return true;
        else return   false;
    };

    sort(begin(arr),end(arr),myComparator);
    string res="";
    for(auto &i:arr){
        res+=to_string(i);
    }
    return res;
}

int main(){
    vector<int>arr={3,30,34,9,5};
    string ans=largestNumber(arr);
    cout<<ans<<endl;

return 0;
}