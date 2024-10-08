/*#include <bits/stdc++.h>
using namespace std;

int countSum(vector<int>arr,int n,int k){
    int maxSum=0;
    int mini=INT_MAX;

    while(k--){
        int minE=*min_element(arr.begin(),arr.end());
        int sum=0;

        for(int i=0;i<n;i++){
                sum+=arr[i];
        }
        if(minE>0){
    
            
            sum-=minE;
            minE=-minE;
            sum+=minE;


        }
        else{   
            sum=sum+2*(-1*minE);    
        }
        
      maxSum=sum;  
    }
    return maxSum;
      while (k--) {
        int minIndex = min_element(arr.begin(), arr.end()) - arr.begin();
        arr[minIndex] = -arr[minIndex];  // Flip the minimum element
    }
    
    int maxSum = accumulate(arr.begin(), arr.end(), 0);
    return maxSum;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=countSum(arr,n,k);
    cout<<ans<<endl;
    return 0;
}*/

#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countSum(vector<int>arr,int n,int k){
    int maxSum=0;
    while(k--){
        int minE=INT_MAX;
        int minIndex=-1;

        for(int i=0;i<n;i++){
            if(arr[i]<minE){
                minE=arr[i];
                minIndex=i;
            }
            
            
        }
        arr[minIndex]=-1*arr[minIndex];
    }
      for(int i=0;i<n;i++){
            maxSum+=arr[i];
        }
       
    return maxSum;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=countSum(arr,n,k);
    cout<<ans<<endl;
    return 0;  
    
}