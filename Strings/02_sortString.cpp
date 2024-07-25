#include<bits/stdc++.h>
using namespace std;

string sortString(string s1){
    
    vector<int>freq(26,0);
    for(int i:s1){
        freq[i-'a']++;
    }

    string ans="";
    
    for(int i = 0; i < 26; i++) {
        ans += string(freq[i], i+'a');
    }
    return ans;

}
string sortString1(string s1){
    
    sort(s1.begin(),s1.end());
    return s1;


}

int main(){
    string s1="tree";
   

    string ans1= sortString(s1);
    string ans2= sortString1(s1);

    // cout<<ans2<<endl;
    cout<<ans1<<endl;
    

return 0;
}