#include<bits/stdc++.h>
using namespace std;

int getLucky(string s, int k) {
    string ans="";
    for(int i=0;i<s.length();i++){
        ans+=s[i]-'a'+1;
    }
    cout<<ans<<endl;
    // int res=0;
    // while(k--){
    //     for(int i=0;i<ans.length();i++){
    //     res+=ans[i]-'0'+1;
    //     }
    // }
    // // cout<<res<<endl;
    // return res;    
}

int main(){
    string s="iiii";
    int k=1;

    // int a=getLucky(s,a);
    // cout<<a<<endl;
    string ans="";
   for(auto c:s){
    ans+=to_string(c-'a'+1);
   }
    cout<<ans<<endl;
return 0;
}