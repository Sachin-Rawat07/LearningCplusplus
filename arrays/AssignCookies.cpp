#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;int j=0,count=0;
        while(i<g.size() &&j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;

        }
        if(s[j]<g[i]){
            j++;
        }
        

        
    }



    return count;    
    }

int main(){
    vector<int>g={10,9,8,7};
    vector<int>s={5,6,7,8};

    cout<<findContentChildren(g,s)<<endl;

return 0 ;
}