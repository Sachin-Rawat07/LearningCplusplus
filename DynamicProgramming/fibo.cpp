#include<iostream>
#include<vector>
using namespace std;

int numberOfWays(int n) {
        if(n==0) return 0;

        int a[n+1];
        a[0]=1;
        a[1]=1;
        for(int i=0;i<5;i++) a[i]=1;

        for(int i=5;i<=n;i++){
            a[i]=(a[i-5]+a[i-1]);
        }
        
        return a[n];
    }
int main(){

    int n=7;
    cout<<numberOfWays(n)<<endl;
return 0;
}