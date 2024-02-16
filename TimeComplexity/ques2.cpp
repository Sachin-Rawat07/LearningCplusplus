#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<"\n";
    }
    //if value of n changes than no. of operations changes tooo that is n times
    //here we have 3n+1 operation to perform.
    //therefore the time compplexity is O(n)

return 0 ;
}