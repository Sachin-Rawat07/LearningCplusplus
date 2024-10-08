// dp + binaryy search hi optimal approach h aur ussi se hoga loo[ se nhi hoga
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {
        0,1,0,2,3
    };
       int maxLen=0;
         int n=arr.size();
    for(int i=0;i<n;i++){
        vector<int>temp;
        temp.push_back(arr[i]);
        for(int j=i+1;j<n;j++){
            int var=temp.back();
            
            if(arr[j]>var){
                
                temp.push_back(arr[j]);
                
            }
        }
        for(auto i:temp){
            cout<<i<<"   ";
        }
        cout<<endl;
        int len=temp.size();
        maxLen=max(maxLen,len);
    }
    cout<<maxLen<<endl;
    
return 0;
}