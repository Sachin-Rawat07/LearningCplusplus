#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n){
    if(n<2) return 0;
    vector<bool> composite(n,false);

    for(int i=2;i*i<=n;i++){
        if(composite[i]==false){
            for(int j=i*i;j<n;j+=i)
            {
                composite[j]=true;

            }
        }
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(composite[i]==false) count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    cout<<countPrimes(n);

return 0 ;
}