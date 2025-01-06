#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int f1=1;
        int f2=1;
        if(n<3) return 1;

        int c=0;
        for(int i=3;i<=n;i++){
                c=f1+f2;
                f1=f2;
                f2=c;


        }
        cout<<c<<endl;
        return 0;
}