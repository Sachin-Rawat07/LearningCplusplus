#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	
	cin>>n>>k;
	
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int max=0;
	
	for(int i=0;i<n-k+1;i++){
	    int sum=0;
	    for(int j=i;j<i+k;j++){
	        sum=sum+arr[j];
	    }
	    if(sum>max){
    	   max=sum;
    	}
	    
	}
    	    
	
	cout<<max<<endl;
	 
	return 0;
}