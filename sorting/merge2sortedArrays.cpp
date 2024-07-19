#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr1={-3,4,5,9,10};
    vector<int>arr2={2,3,7,13,14,20,75};

    vector<int>ansArr(arr1.size()+arr2.size());
    int i=0;
    int j=0,k=0;
    while(i<=arr1.size() && j<=arr2.size()){
        if(arr1[i]<=arr2[j]){
            ansArr[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j]){
            ansArr[k]=arr2[j];
            j++;
            k++;
        }
        
    }
    if(i<arr1.size()) {ansArr[k]=arr1[i]; i++;k++;}
    if(j<arr2.size()) {ansArr[k]=arr2[j]; j++;k++;}

    for(auto i: ansArr){
        cout<<i<<"  ";
    }
    cout<<endl;

return 0;
}