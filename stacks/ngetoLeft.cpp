#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>ngeToLeft(vector<int>& arr){
    int n=arr.size();
    vector<int > v;
    stack<int>st;

    for(int i=0;i<n;i++){
        if(st.size()==0){
            v.push_back(-1);
        }
        else if(st.size()>0 && st.top()>arr[i] ){
            v.push_back(st.top());
        }
        else if(st.size()>0 && st.top()<=arr[i]){
            while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                v.push_back(-1);
            }
            else v.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return v;

}

int main(){
    vector<int> arr={1,3,0,0,1,2,4};
    vector<int> result=ngeToLeft(arr);//{-1,-1,3,3,3,-1}

    cout << "Next Greater Elements to the Left: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;


return 0 ;
}