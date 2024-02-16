#include <iostream>
#include <math.h >
using namespace std;
int main(){
    int n=5;
    for (int i=0;i<n;i++){          //n iterations
        for (int j=0;j<sqrt(n);j++){          //n iterations
            cout<<"*";
        }cout<<endl;
    }         //worst case
             //time complexity=O(n sqrt(n))
return 0 ;
}