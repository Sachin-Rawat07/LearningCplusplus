#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
     
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout<<"actual matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }

    int transpose[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                transpose[i][j]=A[j][i];
            }
        }
    cout<<"transpose matrix"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
            }
            cout<<endl;
        }
    



return 0 ;
}