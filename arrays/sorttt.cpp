#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        //sort(arr.begin(),arr.end());
    unordered_map<int,int> freq;

    for( auto i : arr){
        freq[i]++;
    }

    vector<int> count;
    for(auto i : freq){
        count.push_back(i.second);
    }
    int ans=count.size();
    sort(count.begin(),count.end());

    for( auto i: count){
        if(i<=k){
            k-=i;
            ans--;
        }
        else break;
    }
    return ans;   
        

        
}



int main(){
    vector<int>you={ 4,2,6,8,7,9,1,3,5};
    sort(you.begin(),you.end());
    //sort(you.end(),you.begin());
    reverse(you.begin(),you.end());

    for(auto i: you){
        cout<<i<<"  ";
    }
    cout<<endl;



return 0 ;
}