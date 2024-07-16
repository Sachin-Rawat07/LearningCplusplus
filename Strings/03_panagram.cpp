#include<bits/stdc++.h>
using namespace std;

bool Panagram(string s1){
    vector<int>freq(26,0);
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;  
    }
    for(auto i : freq){
        if(i==0) return false;
    }
    return true;
}

int main(){
    string s1="anagram";
    string s2="Thequickbrownfoxjumpsoverthelazydog";

    bool ans= Panagram(s1);
    bool ans1= Panagram(s2);

    if(ans==1) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;
    if(ans1==1) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;

return 0;
}