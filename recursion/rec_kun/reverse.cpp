#include<bits/stdc++.h>
using namespace std;
int sum=0;
void reversenum(int num){
    if(num==0) return ;
    // int sum=0;
    int rem=num%10;
    sum=sum*10+rem;

    return reversenum(num/10);

}
int helper(int num,int dig){
    if(num%10==num){
        return num;
    }
    int rem=num%10;
    return rem*(pow(10,(dig-1)))+ helper(num/10,dig-1);
}

int reversenum2(int num){
    // if(num%10==num) return num;
    int dig=floor(log10(num))+1;
    // cout<<dig<<endl;
    return helper(num,dig);

}
int main(){
    // reversenum(124);
    cout<<reversenum2(759);

    // cout<<sum;

return 0;
}