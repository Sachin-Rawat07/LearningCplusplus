#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if((j+i)%n==0)
            cout<<n<<" ";
            else
            cout<<(j+i)%n<<" ";

        }cout<<endl;
    }

return 0 ;
}













// cout<<"Enter no. of rows : ";
   // cin>>n;
    // cout<<"Enter no. of columns : ";
    // cin>>m;

    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1 || i==4 ||j==1 ||j==n)
    //         cout<<j;
    //         else
    //         cout<<" ";
    //     }cout<<endl;
    // }