#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	int n;
	cin>>n;
	
	int p1[n];
    int p2[n];
	//storing value in array
	for(int i=0;i<n;i++){
	    cin>>p1[i]>>p2[i];
	}
    //storing cumulative frequency in array
	for(int i=1;i<=n;i++){
	    p1[i]=p1[i]+p1[i-1];
	    p2[i]=p2[i]+p2[i-1];
	}
	//to find the difference between the cumulative frequencies
	int diffarr[n];
	for(int i=0;i<n;i++){
	    diffarr[i]= abs(p1[i]-p2[i])  ;
	}
	// to find the maximum difference
	int max=0;
	int index=0;
	for(int i=0;i<n;i++){
		if(diffarr[i]>max){
			max=diffarr[i];
			index++;
			
		}
		
	}
	//cout<<max<<"   " <<index<<endl;

	if(p1[index]>p2[index])
	cout<<1<<" " <<max<<endl;
	else
	cout<<2<<" " <<max<<endl;

	t--;
	}
	
	return 0;
}
 