#include <iostream>
using namespace std;

void recurseArray(int *array, int index, int n){
    if(index>=n)
    return ;
    cout<<array[index]<<"\n";
    

    recurseArray(array,index+1,n);

}




int main(){

    int n=6;
    int array[6]={4,9,3,7,8,5};
    recurseArray(array,0,n);
    

return 0 ;
}