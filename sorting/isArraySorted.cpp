#include <iostream>
using namespace std;

bool isSortedArray(int arr[],int n){
	for(int i=1;i<n;i++){
		if(arr[i]<=arr[i-1]){
        return false;
    }

	}
    
    return true;
}

int main(){
    	int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }

        bool sort=isSortedArray(arr,n);
		if(sort==1)
		cout<<"True"<<endl;
		else
		cout<<"False"<<endl;



return 0 ;
}