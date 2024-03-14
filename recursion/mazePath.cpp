#include<iostream>
#include<string>
using namespace std;

int mazePath(int sr,int sc,int er,int ec){
    if(sc>ec ||sr>er) return 0;
    if(sc==ec && sr==er) return 1;

    int rightWays=mazePath(sr,sc+1,er,ec);
    int downWays=mazePath(sr+1,sc,er,ec);

    int totalWays=rightWays+downWays;
    return totalWays;

}



void printPath(int sr,int sc,int er,int ec,string s){
    if(sc>ec ||sr>er) return ;
    if(sc==ec && sr==er) {
        cout<<s<<endl;
        return;
    };

    
    printPath(sr+1,sc,er,ec,s+'D');
    printPath(sr,sc+1,er,ec,s+'R');

}


int mazePath2(int row,int col){ 
    if(row<1 ||col<1) return 0;
    if(row==1 && col==1) return 1;

    int rightWays=mazePath2(row,col-1);
    int downWays=mazePath2(row-1,col);

    int totalWays=rightWays+downWays;
    return totalWays;

}

int main(){
  //cout<< mazePath(1,1,3,3)<<endl;

   //printPath(1,1,3,3,"");
   cout<<mazePath2(4,4)<<endl;



    return 0;
}