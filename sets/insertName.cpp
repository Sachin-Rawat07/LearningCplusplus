#include <iostream>
#include<set>

using namespace std;
int main(){
    set <string> names;

    int n;
    cin>>n;
    while(n--){
        string input;
        cin>>input;

        names.insert(input);
    }
    for(auto itr:names){
        cout<<itr<<endl;
    }

return 0 ;
}