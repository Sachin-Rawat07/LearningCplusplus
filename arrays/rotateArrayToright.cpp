// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;


void rotate(vector<int> &arr,int k){
    
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n ]=arr[i];
    }
    arr=temp;
}

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    vector<int>arr={1,7,9,11};
    int n=arr.size();
    int k=2;
    rotate(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}