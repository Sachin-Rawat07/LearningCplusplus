#include <iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int>demo={2,4,5,9,3,1,2,3,5,9,5,2};
    set<int>st;
    set<int,greater<int>>stee;

    for(int i=0;i<demo.size();i++){
        st.insert(demo[i]);
    }

    for(int i=0;i<demo.size();i++){
            stee.insert(demo[i]);
    }


    cout<<st.size()<<endl;
    cout<<"hemloo"<<endl;

    for(auto itr:st){
        cout<<itr<<"  ";
    }
    cout<<endl;


   for(auto itr:stee){
        cout<<itr<<"  ";
    }
    cout<<endl;
    


return 0 ;
}