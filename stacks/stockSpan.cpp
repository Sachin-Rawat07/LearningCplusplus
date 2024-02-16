#include <iostream>
#include<vector>
#include<stack>
#include <algorithm> 
using namespace std;

vector<int> stockSpan(vector<int>& arr){
    int n=arr.size();
    vector<int>v;
    stack<pair<int,int>>st;

    for(int i=0;i<n;i++){

    if(st.size()==0){
        v.push_back(-1);

    }
    else if(st.size()>0 && st.top().first>arr[i]){
        v.push_back(st.top().second);
    }
    else if(st.size()>0 && st.top().first<=arr[i]){
        while(st.size()>0 && st.top().first<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            v.push_back(-1);
        }
        else 
            v.push_back(st.top().second);
    }
    st.push({arr[i],i});

    }
    for(int i=0;i<n;i++){
        v[i]=i-v[i];
    }

    return v;
}



int main(){
    vector<int> arr={100,80,60,70,60,75,85};
    vector<int> result=stockSpan(arr); //{1,1,1,2,1,4,6}

    cout << "Minimum Stock Span is ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

return 0 ;
}