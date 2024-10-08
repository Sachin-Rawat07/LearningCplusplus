#include<bits/stdc++.h>
#include<vector>
using namespace std;

int winnerTeam(int N, vector<int> &X, vector<int> &Y, vector<int> &Z) {
        // code here
     /*   int maxe=INT_MIN;
        int j=0;
        int k=0;
        int l=0;
        for(int i=0;i<N;i++){
            if(X[j]>=Y[k]&&X[j]>=Z[l]){
                k++;l++;
                maxe=X[j];
            }
            else if(Y[k]>maxe&&Y[k]>X[j]&&Y[k]>=Z[l]){
                j++;l++;
                maxe=Y[k];
            }
            else {
                k++;j++;
                maxe=Z[k];
            }
            
        }
        cout<<j<<"  "<<k<<"  "<<l<<endl;
        cout<<maxe<<endl;
        if(j<N) return 0;
        else if(k<N) return 1;
        else return 2;
    */
    int maxX=INT_MIN;
        int maxY=INT_MIN;
        int maxZ=INT_MIN;
        for(int i=0;i<N;i++){
            maxX=max(maxX,X[i]);
            maxY=max(maxY,Y[i]);
            maxZ=max(maxZ,Z[i]);
        }
        if(maxX>=maxY && maxX>=maxZ) return 0;
        else if(maxY>maxX && maxY>=maxZ) return 1;
        return 2;    
}
int main(){
    int n=3;
    vector<int>x={7,5,3};
    vector<int>y={4,8,1};
    vector<int >z={6,2,9};

    int ans=winnerTeam(n,x,y,z);
    cout<<ans<<endl;
return 0;
}