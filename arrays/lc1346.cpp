#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool checkIfExist(vector<int>& arr) {
        set<int>s;
        for(auto num:arr){
            s.insert(num);
        }
        for(int i=0;i<arr.size();i++){
            
            int t=2*arr[i];
            cout<<t<<" ";
            
            if(s.find(t)!=s.end() || (num % 2 == 0 && s.find(num / 2) != s.end())){
                return true;
            }
        }
        cout<<endl;

    return false;
        
    }
int main(){

    vector<int>arr={-2,0,10,-19,4,6,-8};
    cout<<checkIfExist(arr)<<endl;

return 0;
}