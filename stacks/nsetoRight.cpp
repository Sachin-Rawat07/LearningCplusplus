#include <iostream>
#include<vector>
#include<stack>
#include <algorithm> 
using namespace std;

vector<int>nseToRight(vector<int>& arr){
    int n=arr.size();
    vector<int>v;
    stack<int> st;

    for( int i=n-1;i>=0;i--){
        if(st.size()==0){
            v.push_back(-1);
        }
        else if(st.size()>0 && st.top()<arr[i]){
            v.push_back(st.top());
        }
        else if(st.size()>0 && st.top()>=arr[i]){
            while(st.size()>0 && st.top()>=arr[i]){
                st.pop();

            }
            if(st.size()==0)  v.push_back(-1);
            else    v.push_back(st.top());
            
        }
        st.push(arr[i]);

    }
    reverse(v.begin(),v.end());
    return v;
}


int main(){
    vector<int> arr={4,5,2,10,8};
    vector<int> result=nseToRight(arr); //{2,2,-1,8,-1}

    cout << "Next Smaller Elements to the Right: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

return 0 ;
}