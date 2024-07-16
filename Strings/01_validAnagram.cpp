#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string s1,string s2){
    if(s1.length() !=s2.length()) return false;

    vector<int>freq(26,0);

    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }

    for(auto i : freq){
        if(i!=0) return false;
    }
    return true;
}

int main(){
    string s1="anagram";
    string s2="nagaram";

    bool ans= validAnagram(s1,s2);

    if(ans==1) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;

return 0;
}