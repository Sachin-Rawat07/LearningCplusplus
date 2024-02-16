#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int count=0;
    
    while(temp>0 ){
        int val=temp&1;
        if(val==0){
            n=n|(1<<count);
            break;
            
        }
        temp>>=1;
            count++;
            
        


    } 
    cout<<n<<endl;
   
    

return 0 ;
}