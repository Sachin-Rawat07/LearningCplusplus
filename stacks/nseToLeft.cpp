#include <iostream>
#include<vector>
#include<stack>
#include <algorithm> 
using namespace std;

vector<int>nseToLeft(vector<int>& arr){
    int n=arr.size();
    vector<int>v;
    stack<int> st;

    for( int i=0;i<n;i++){
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
    
    return v;
}


int main(){
    vector<int> arr={4,5,1,10,2,8};
    vector<int> result=nseToLeft(arr); //{-1,4,-1,1,1,2}

    cout << "Next Smaller Elements to the left: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

return 0 ;
}