#include <iostream>
using namespace std;

int power(int p ,int q){
    if (q==0)
    return 1;
    else{
        if(q%2==0){
            int ans=power(p,q/2);
            return ans*ans;

        }
        else{
            int ans=power(p,(q-1)/2);
            return p*ans*ans;

        }
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