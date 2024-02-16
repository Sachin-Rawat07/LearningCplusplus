#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=0;i<n;i++){          //n iterations
        for (int j=0;j<n;j++){          //n iterations
            cout<<"*";
        }cout<<endl;
    }         //worst case
             //time complexity=O(n^2)
return 0 ;
}