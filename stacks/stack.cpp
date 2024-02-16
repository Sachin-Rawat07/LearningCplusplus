#include <iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(7);
    s.push(6);
    s.push(5);
    //cout<<s<<endl;
    s.pop();
    s.push(2);
  // s.push(1);
    cout<<s.top()<<endl;

return 0 ;
}