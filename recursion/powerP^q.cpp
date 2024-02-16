#include <iostream>
using namespace std;

int power(int p,int q){
    if (q==0)
    return 1;
    else if (q==1)
    return p;
    else{
        int ans=p*power(p,q-1);
        return ans;

    }
}



int main(){
    int p ,q;
    cout<<"enter the numbers";
    cin>>p>>q;

    int result=power(p,q);
    cout<<result;

return 0 ;
}